
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int NatTable; int NativeNat; } ;
typedef TYPE_1__ VH ;
typedef scalar_t__ UINT ;
struct TYPE_15__ {int Protocol; } ;
typedef TYPE_2__ NAT_ENTRY ;


 TYPE_2__* FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;




 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*) ;

void FUNC_8(VH *VAR_0)
{
 UINT VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 if (FUNC_2(VAR_0))
 {

  FUNC_3(VAR_0->NativeNat);
 }


 for (VAR_1 = 0;VAR_1 < FUNC_1(VAR_0->NatTable);VAR_1++)
 {
  NAT_ENTRY *VAR_2 = FUNC_0(VAR_0->NatTable, VAR_1);

  switch (VAR_2->Protocol)
  {
  case 129:
   FUNC_6(VAR_0, VAR_2);
   break;

  case 128:
   FUNC_7(VAR_0, VAR_2);
   break;

  case 130:
   FUNC_5(VAR_0, VAR_2);
   break;

  case 131:
   FUNC_4(VAR_0, VAR_2);
   break;
  }
 }
}
