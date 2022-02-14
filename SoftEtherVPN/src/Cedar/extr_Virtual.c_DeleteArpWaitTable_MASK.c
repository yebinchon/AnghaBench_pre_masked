
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ArpWaitTable; } ;
typedef TYPE_1__ VH ;
typedef int UINT ;
typedef int ARP_WAIT ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_1__*,int ) ;

void FUNC_3(VH *VAR_0, UINT VAR_1)
{
 ARP_WAIT *VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2 == ((void*)0))
 {
  return;
 }
 FUNC_0(VAR_0->ArpWaitTable, VAR_2);

 FUNC_1(VAR_2);
}
