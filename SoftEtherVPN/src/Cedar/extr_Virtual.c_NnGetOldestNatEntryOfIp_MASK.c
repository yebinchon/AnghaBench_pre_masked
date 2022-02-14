
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_9__ {TYPE_1__* NatTableForRecv; } ;
struct TYPE_8__ {scalar_t__ SrcIp; scalar_t__ Protocol; scalar_t__ LastCommTime; } ;
struct TYPE_7__ {int AllList; } ;
typedef TYPE_2__ NATIVE_NAT_ENTRY ;
typedef TYPE_3__ NATIVE_NAT ;


 TYPE_2__* FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

NATIVE_NAT_ENTRY *FUNC_2(NATIVE_NAT *VAR_0, UINT VAR_1, UINT VAR_2)
{
 UINT VAR_3;
 NATIVE_NAT_ENTRY *VAR_4 = ((void*)0);
 UINT64 VAR_5 = 0xFFFFFFFFFFFFFFFFULL;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 for (VAR_3 = 0;VAR_3 < FUNC_1(VAR_0->NatTableForRecv->AllList);VAR_3++)
 {
  NATIVE_NAT_ENTRY *VAR_6 = FUNC_0(VAR_0->NatTableForRecv->AllList, VAR_3);

  if (VAR_6->SrcIp == VAR_1)
  {
   if (VAR_6->Protocol == VAR_2)
   {
    if (VAR_6->LastCommTime <= VAR_5)
    {
     VAR_5 = VAR_6->LastCommTime;
     VAR_4 = VAR_6;
    }
   }
  }
 }

 return VAR_4;
}
