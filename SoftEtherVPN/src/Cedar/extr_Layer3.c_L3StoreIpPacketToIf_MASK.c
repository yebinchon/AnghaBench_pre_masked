
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* Session; int CancelList; int IpPacketQueue; } ;
struct TYPE_5__ {int Cancel1; } ;
typedef int L3PACKET ;
typedef TYPE_2__ L3IF ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(L3IF *VAR_0, L3IF *VAR_1, L3PACKET *VAR_2)
{

 if (VAR_0 == ((void*)0) || VAR_2 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }


 FUNC_1(VAR_1->IpPacketQueue, VAR_2);


 FUNC_0(VAR_0->CancelList, VAR_1->Session->Cancel1);
}
