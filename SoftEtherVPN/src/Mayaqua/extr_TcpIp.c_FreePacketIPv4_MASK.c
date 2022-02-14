
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * IPv4Header; } ;
struct TYPE_8__ {int TypeL4; int TypeL3; TYPE_1__ L3; } ;
typedef TYPE_2__ PKT ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;




void FUNC_3(PKT *VAR_1)
{

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 switch (VAR_1->TypeL4)
 {
 case 130:
  FUNC_0(VAR_1);
  break;

 case 129:
  FUNC_1(VAR_1);
  break;

 case 128:
  FUNC_2(VAR_1);
  break;
 }

 VAR_1->L3.IPv4Header = ((void*)0);
 VAR_1->TypeL3 = VAR_0;
}
