
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gentity_t ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (char*,...) ;
 int VAR_0 ;
 int FUNC_3 () ;

gentity_t *FUNC_4 (char *VAR_1)
{
 gentity_t *VAR_2 = ((void*)0);
 int VAR_3 = 0;
 gentity_t *VAR_4[VAR_0];

 if (!VAR_1)
 {
  FUNC_2("G_PickTarget called with NULL targetname\n");
  return ((void*)0);
 }

 while(1)
 {
  VAR_2 = FUNC_1 (VAR_2, FUNC_0(VAR_1), VAR_1);
  if (!VAR_2)
   break;
  VAR_4[VAR_3++] = VAR_2;
  if (VAR_3 == VAR_0)
   break;
 }

 if (!VAR_3)
 {
  FUNC_2("G_PickTarget: target %s not found\n", VAR_1);
  return ((void*)0);
 }

 return VAR_4[FUNC_3() % VAR_3];
}
