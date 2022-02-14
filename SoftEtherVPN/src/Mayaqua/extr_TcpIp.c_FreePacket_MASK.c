
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int TypeL3; struct TYPE_7__* HttpLog; int * MacHeader; } ;
typedef TYPE_1__ PKT ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;




void FUNC_4(PKT *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 if (VAR_0->MacHeader != ((void*)0))
 {
  switch (VAR_0->TypeL3)
  {
  case 129:
   FUNC_2(VAR_0);
   break;

  case 130:
   FUNC_1(VAR_0);
   break;

  case 128:
   FUNC_3(VAR_0);
   break;
  }
 }

 if (VAR_0->HttpLog != ((void*)0))
 {
  FUNC_0(VAR_0->HttpLog);
 }

 FUNC_0(VAR_0);
}
