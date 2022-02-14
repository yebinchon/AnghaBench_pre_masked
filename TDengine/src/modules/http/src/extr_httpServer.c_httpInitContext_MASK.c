
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int buffer; int pLast; int pCur; } ;
struct TYPE_9__ {int parsed; int accessTimes; TYPE_1__* pThread; int ipstr; int fd; TYPE_2__ parser; TYPE_2__ singleCmd; int * timer; int * encodeMethod; int reqType; void* contentEncoding; void* acceptEncoding; int httpChunked; int httpKeepAlive; int httpVersion; int lastAccessTime; } ;
struct TYPE_7__ {int label; } ;
typedef int HttpSqlCmd ;
typedef TYPE_2__ HttpParser ;
typedef TYPE_3__ HttpContext ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,TYPE_3__*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 () ;

bool FUNC_3(HttpContext *VAR_5) {
  VAR_5->accessTimes++;
  VAR_5->lastAccessTime = FUNC_2();
  VAR_5->httpVersion = VAR_4;
  VAR_5->httpKeepAlive = VAR_1;
  VAR_5->httpChunked = VAR_3;
  VAR_5->acceptEncoding = VAR_0;
  VAR_5->contentEncoding = VAR_0;
  VAR_5->reqType = VAR_2;
  VAR_5->encodeMethod = ((void*)0);
  VAR_5->timer = ((void*)0);
  FUNC_1(&VAR_5->singleCmd, 0, sizeof(HttpSqlCmd));

  HttpParser *VAR_6 = &VAR_5->parser;
  FUNC_1(VAR_6, 0, sizeof(HttpParser));
  VAR_6->pCur = VAR_6->pLast = VAR_6->buffer;

  FUNC_0("context:%p, fd:%d, ip:%s, thread:%s, accessTimes:%d, parsed:%d",
          VAR_5, VAR_5->fd, VAR_5->ipstr, VAR_5->pThread->label, VAR_5->accessTimes, VAR_5->parsed);
  return 1;
}
