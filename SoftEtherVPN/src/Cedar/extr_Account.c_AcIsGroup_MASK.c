
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int USERGROUP ;
typedef int HUB ;


 int * FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

bool FUNC_3(HUB *VAR_0, char *VAR_1)
{
 USERGROUP *VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || FUNC_1(VAR_0))
 {
  return 0;
 }

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 == ((void*)0))
 {
  return 0;
 }
 FUNC_2(VAR_2);

 return 1;
}
