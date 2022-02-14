
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_8__ {TYPE_1__* NatTableForRecv; } ;
struct TYPE_7__ {scalar_t__ SrcIp; scalar_t__ Protocol; } ;
struct TYPE_6__ {int AllList; } ;
typedef TYPE_2__ NATIVE_NAT_ENTRY ;
typedef TYPE_3__ NATIVE_NAT ;


 TYPE_2__* FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

UINT FUNC_2(NATIVE_NAT *VAR_0, UINT VAR_1, UINT VAR_2)
{
 UINT VAR_3 = 0;
 UINT VAR_4;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 for (VAR_4 = 0;VAR_4 < FUNC_1(VAR_0->NatTableForRecv->AllList);VAR_4++)
 {
  NATIVE_NAT_ENTRY *VAR_5 = FUNC_0(VAR_0->NatTableForRecv->AllList, VAR_4);

  if (VAR_5->SrcIp == VAR_1)
  {
   if (VAR_5->Protocol == VAR_2)
   {
    VAR_3++;
   }
  }
 }

 return VAR_3;
}
