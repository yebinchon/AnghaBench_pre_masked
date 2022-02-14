
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int * FUNC_0 (char*) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *) ;

char *FUNC_4(wchar_t *VAR_0, char *VAR_1)
{
 wchar_t *VAR_2, *VAR_3;
 char *VAR_4;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 if (VAR_1 != ((void*)0))
 {
  VAR_2 = FUNC_0(VAR_1);
 }
 else
 {
  VAR_2 = ((void*)0);
 }

 VAR_3 = FUNC_3(VAR_0, VAR_2);

 if (VAR_3 == ((void*)0))
 {
  VAR_4 = ((void*)0);
 }
 else
 {
  VAR_4 = FUNC_1(VAR_3);
  FUNC_2(VAR_3);
 }

 FUNC_2(VAR_2);

 return VAR_4;
}
