
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int DhId; } ;
typedef TYPE_1__ IKE_DH ;
typedef int DH_CTX ;


 int * FUNC_0 () ;
 int * FUNC_1 () ;
 int * FUNC_2 () ;
 int * FUNC_3 () ;
 int * FUNC_4 () ;
 int * FUNC_5 () ;







DH_CTX *FUNC_6(IKE_DH *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 switch (VAR_0->DhId)
 {
 case 133:
  return FUNC_3();

 case 131:
  return FUNC_4();

 case 128:
  return FUNC_5();

 case 132:
  return FUNC_0();

 case 130:
  return FUNC_1();

 case 129:
  return FUNC_2();
 }

 return ((void*)0);
}
