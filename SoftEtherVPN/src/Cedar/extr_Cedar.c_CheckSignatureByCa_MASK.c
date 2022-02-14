
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X ;
struct TYPE_3__ {int CaList; } ;
typedef TYPE_1__ CEDAR ;


 int * FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;

bool FUNC_2(CEDAR *VAR_0, X *VAR_1)
{
 X *VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }


 VAR_2 = FUNC_0(VAR_0->CaList, VAR_1);
 if (VAR_2 == ((void*)0))
 {

  return 0;
 }


 FUNC_1(VAR_2);
 return 1;
}
