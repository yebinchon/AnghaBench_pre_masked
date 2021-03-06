
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
typedef void* int16_t ;
struct TYPE_11__ {int pos; void* len; } ;
struct TYPE_10__ {scalar_t__ len; } ;
struct TYPE_12__ {int pLast; int pCur; TYPE_2__ token; TYPE_1__ data; } ;
struct TYPE_13__ {int httpChunked; scalar_t__ httpKeepAlive; int ipstr; int fd; void* contentEncoding; void* acceptEncoding; TYPE_3__ parser; } ;
typedef TYPE_3__ HttpParser ;
typedef TYPE_4__ HttpContext ;


 int HTTP_CHUNKED ;
 void* HTTP_COMPRESS_GZIP ;
 void* HTTP_COMPRESS_IDENTITY ;
 int HTTP_INVALID_AUTH_TOKEN ;
 int HTTP_INVALID_BASIC_AUTH_TOKEN ;
 int HTTP_INVALID_TAOSD_AUTH_TOKEN ;
 scalar_t__ HTTP_KEEPALIVE_DISABLE ;
 scalar_t__ HTTP_KEEPALIVE_ENABLE ;
 scalar_t__ atoi (int) ;
 int httpParseBasicAuthToken (TYPE_4__*,int,void*) ;
 int httpParseTaosdAuthToken (TYPE_4__*,int,void*) ;
 int httpSendErrorResp (TYPE_4__*,int ) ;
 int httpTrace (char*,TYPE_4__*,int ,int ,...) ;
 scalar_t__ strncasecmp (int,char*,int) ;
 int * strstr (int,char*) ;
 scalar_t__ tsHttpEnableCompress ;

bool httpParseHead(HttpContext* pContext) {
  HttpParser* pParser = &pContext->parser;
  if (strncasecmp(pParser->pLast, "Content-Length: ", 16) == 0) {
    pParser->data.len = (int32_t)atoi(pParser->pLast + 16);
    httpTrace("context:%p, fd:%d, ip:%s, Content-Length:%d", pContext, pContext->fd, pContext->ipstr,
              pParser->data.len);
  } else if (strncasecmp(pParser->pLast, "Accept-Encoding: ", 17) == 0) {
    if (tsHttpEnableCompress && strstr(pParser->pLast + 17, "gzip") != ((void*)0)) {
      pContext->acceptEncoding = HTTP_COMPRESS_GZIP;
      httpTrace("context:%p, fd:%d, ip:%s, Accept-Encoding:gzip", pContext, pContext->fd, pContext->ipstr);
    } else {
      pContext->acceptEncoding = HTTP_COMPRESS_IDENTITY;
      httpTrace("context:%p, fd:%d, ip:%s, Accept-Encoding:identity", pContext, pContext->fd, pContext->ipstr);
    }
  } else if (strncasecmp(pParser->pLast, "Content-Encoding: ", 18) == 0) {
    if (strstr(pParser->pLast + 18, "gzip") != ((void*)0)) {
      pContext->contentEncoding = HTTP_COMPRESS_GZIP;
      httpTrace("context:%p, fd:%d, ip:%s, Content-Encoding:gzip", pContext, pContext->fd, pContext->ipstr);
    } else {
      pContext->contentEncoding = HTTP_COMPRESS_IDENTITY;
      httpTrace("context:%p, fd:%d, ip:%s, Content-Encoding:identity", pContext, pContext->fd, pContext->ipstr);
    }
  } else if (strncasecmp(pParser->pLast, "Connection: ", 12) == 0) {
    if (strncasecmp(pParser->pLast + 12, "Keep-Alive", 10) == 0) {
      pContext->httpKeepAlive = HTTP_KEEPALIVE_ENABLE;
    } else {
      pContext->httpKeepAlive = HTTP_KEEPALIVE_DISABLE;
    }
    httpTrace("context:%p, fd:%d, ip:%s, keepAlive:%d", pContext, pContext->fd, pContext->ipstr,
              pContext->httpKeepAlive);
  } else if (strncasecmp(pParser->pLast, "Transfer-Encoding: ", 19) == 0) {
    if (strncasecmp(pParser->pLast + 19, "chunked", 7) == 0) {
      pContext->httpChunked = HTTP_CHUNKED;
    }
  } else if (strncasecmp(pParser->pLast, "Authorization: ", 15) == 0) {
    if (strncasecmp(pParser->pLast + 15, "Basic ", 6) == 0) {
      pParser->token.pos = pParser->pLast + 21;
      pParser->token.len = (int16_t)(pParser->pCur - pParser->token.pos - 1);
      bool parsed = httpParseBasicAuthToken(pContext, pParser->token.pos, pParser->token.len);
      if (!parsed) {
        httpSendErrorResp(pContext, HTTP_INVALID_BASIC_AUTH_TOKEN);
        return 0;
      }
    } else if (strncasecmp(pParser->pLast + 15, "Taosd ", 6) == 0) {
      pParser->token.pos = pParser->pLast + 21;
      pParser->token.len = (int16_t)(pParser->pCur - pParser->token.pos - 1);
      bool parsed = httpParseTaosdAuthToken(pContext, pParser->token.pos, pParser->token.len);
      if (!parsed) {
        httpSendErrorResp(pContext, HTTP_INVALID_TAOSD_AUTH_TOKEN);
        return 0;
      }
    } else {
      httpSendErrorResp(pContext, HTTP_INVALID_AUTH_TOKEN);
      return 0;
    }
  } else {
  }

  return 1;
}
