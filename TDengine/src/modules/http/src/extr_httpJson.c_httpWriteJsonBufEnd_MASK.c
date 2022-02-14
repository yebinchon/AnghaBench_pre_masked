
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int fd; int ipstr; } ;
struct TYPE_6__ {TYPE_4__* pContext; } ;
typedef TYPE_1__ JsonBuf ;


 int FUNC_0 (char*,TYPE_4__*,int,int ) ;
 int FUNC_1 (TYPE_4__*,char*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;

void FUNC_3(JsonBuf* VAR_0) {
  if (VAR_0->pContext->fd <= 0) {
    FUNC_0("context:%p, fd:%d, ip:%s, json buf fd is 0", VAR_0->pContext, VAR_0->pContext->fd, VAR_0->pContext->ipstr);
    VAR_0->pContext->fd = -1;
  }

  FUNC_2(VAR_0, 1);
  FUNC_1(VAR_0->pContext, "0\r\n\r\n", 5);
}
