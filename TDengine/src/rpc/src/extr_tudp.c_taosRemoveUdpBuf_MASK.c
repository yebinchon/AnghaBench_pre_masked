
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int msgHdr; int * signature; int port; int ip; TYPE_1__* pConn; int timer; } ;
struct TYPE_5__ {int hash; } ;
typedef TYPE_2__ SUdpBuf ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(SUdpBuf *VAR_0) {
  FUNC_3(&VAR_0->timer);
  FUNC_1(VAR_0->pConn->hash, VAR_0->ip, VAR_0->port);




  VAR_0->signature = ((void*)0);
  FUNC_2(VAR_0->msgHdr);
  FUNC_0(VAR_0);
}
