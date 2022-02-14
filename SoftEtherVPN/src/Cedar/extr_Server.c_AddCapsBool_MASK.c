
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CAPSLIST ;
typedef int CAPS ;


 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (char*,int) ;

void FUNC_2(CAPSLIST *VAR_0, char *VAR_1, bool VAR_2)
{
 CAPS *VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_3 = FUNC_1(VAR_1, VAR_2 == 0 ? 0 : 1);
 FUNC_0(VAR_0, VAR_3);
}
