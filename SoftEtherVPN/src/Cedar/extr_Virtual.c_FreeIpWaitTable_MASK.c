
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int IpWaitTable; } ;
typedef TYPE_1__ VH ;
typedef scalar_t__ UINT ;
struct TYPE_7__ {struct TYPE_7__* Data; } ;
typedef TYPE_2__ IP_WAIT ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(VH *VAR_0)
{
 UINT VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 for (VAR_1 = 0;VAR_1 < FUNC_2(VAR_0->IpWaitTable);VAR_1++)
 {
  IP_WAIT *VAR_2 = FUNC_1(VAR_0->IpWaitTable, VAR_1);

  FUNC_0(VAR_2->Data);
  FUNC_0(VAR_2);
 }

 FUNC_3(VAR_0->IpWaitTable);
}
