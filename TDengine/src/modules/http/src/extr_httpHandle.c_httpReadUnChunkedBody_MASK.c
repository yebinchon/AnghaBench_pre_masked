
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int ipstr; int fd; } ;
struct TYPE_10__ {int len; scalar_t__ pos; } ;
struct TYPE_11__ {int bufsize; TYPE_1__ data; scalar_t__ buffer; } ;
typedef TYPE_2__ HttpParser ;
typedef TYPE_3__ HttpContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,TYPE_3__*,int ,int ,...) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (char*,TYPE_3__*,int ,int ,int,int) ;

int FUNC_4(HttpContext* VAR_4, HttpParser* VAR_5) {
  int VAR_6 = VAR_5->bufsize - (int)(VAR_5->data.pos - VAR_5->buffer);
  if (VAR_6 > VAR_5->data.len) {
    FUNC_0("context:%p, fd:%d, ip:%s, un-chunked body length invalid, dataReadLen:%d > pContext->data.len:%d",
              VAR_4, VAR_4->fd, VAR_4->ipstr, VAR_6, VAR_5->data.len);
    FUNC_2(VAR_4, VAR_3);
    return VAR_1;
  } else if (VAR_6 < VAR_5->data.len) {
    FUNC_3("context:%p, fd:%d, ip:%s, un-chunked body not finished, dataReadLen:%d < pContext->data.len:%d, continue read",
              VAR_4, VAR_4->fd, VAR_4->ipstr, VAR_6, VAR_5->data.len);
    if (!FUNC_1(VAR_4)) {
      FUNC_0("context:%p, fd:%d, ip:%s, read chunked request error", VAR_4, VAR_4->fd, VAR_4->ipstr);
      return VAR_1;
    } else {
      return VAR_0;
    }
  } else {
    return VAR_2;
  }
}
