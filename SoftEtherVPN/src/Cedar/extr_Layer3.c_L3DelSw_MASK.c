
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int L3SwList; } ;
typedef int L3SW ;
typedef TYPE_1__ CEDAR ;


 int FUNC_0 (int ,int *) ;
 int * FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

bool FUNC_6(CEDAR *VAR_0, char *VAR_1)
{
 L3SW *VAR_2;
 bool VAR_3 = 0;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 FUNC_3(VAR_0->L3SwList);
 {
  VAR_2 = FUNC_1(VAR_0, VAR_1);

  if (VAR_2 != ((void*)0))
  {

   FUNC_2(VAR_2);
   FUNC_0(VAR_0->L3SwList, VAR_2);
   FUNC_4(VAR_2);
   FUNC_4(VAR_2);

   VAR_3 = 1;
  }
 }
 FUNC_5(VAR_0->L3SwList);

 return VAR_3;
}
