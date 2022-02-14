
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct HttpContext {scalar_t__ acceptEncoding; int ipstr; int fd; } ;
struct TYPE_3__ {struct HttpContext* pContext; int lst; int size; scalar_t__ total; int buf; } ;
typedef TYPE_1__ JsonBuf ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct HttpContext*) ;
 int FUNC_1 (char*,struct HttpContext*,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

void FUNC_3(JsonBuf* VAR_2, struct HttpContext* VAR_3) {
  VAR_2->lst = VAR_2->buf;
  VAR_2->total = 0;
  VAR_2->size = VAR_1;
  VAR_2->pContext = VAR_3;
  FUNC_2(VAR_2->lst, 0, VAR_1);

  if (VAR_3->acceptEncoding == VAR_0) {
    FUNC_0(VAR_2->pContext);
  }

  FUNC_1("context:%p, fd:%d, ip:%s, json buffer initialized", VAR_2->pContext, VAR_2->pContext->fd, VAR_2->pContext->ipstr);
}
