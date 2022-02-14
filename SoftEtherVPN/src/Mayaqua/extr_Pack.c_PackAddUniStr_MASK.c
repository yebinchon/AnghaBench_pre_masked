
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int VALUE ;
typedef int PACK ;
typedef int ELEMENT ;


 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (char*,int ,int,int **) ;
 int * FUNC_2 (int *) ;
 int VAR_0 ;

ELEMENT *FUNC_3(PACK *VAR_1, char *VAR_2, wchar_t *VAR_3)
{
 VALUE *VAR_4;
 ELEMENT *VAR_5 = ((void*)0);

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_4 = FUNC_2(VAR_3);
 VAR_5 = FUNC_1(VAR_2, VAR_0, 1, &VAR_4);
 if (FUNC_0(VAR_1, VAR_5) == 0)
 {
  return ((void*)0);
 }
 return VAR_5;
}
