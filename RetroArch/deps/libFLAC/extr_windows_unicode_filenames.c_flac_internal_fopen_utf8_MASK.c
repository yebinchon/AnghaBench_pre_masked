
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int FILE ;


 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (char const*,char const*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int * FUNC_3 (char const*) ;

FILE* FUNC_4(const char *VAR_1, const char *VAR_2)
{
 if (!VAR_0) {
  return FUNC_1(VAR_1, VAR_2);
 } else {
  wchar_t *VAR_3 = ((void*)0);
  wchar_t *VAR_4 = ((void*)0);
  FILE *VAR_5 = ((void*)0);

  do {
   if (!(VAR_3 = FUNC_3(VAR_1))) break;
   if (!(VAR_4 = FUNC_3(VAR_2))) break;
   VAR_5 = FUNC_0(VAR_3, VAR_4);
  } while(0);

  FUNC_2(VAR_3);
  FUNC_2(VAR_4);

  return VAR_5;
 }
}
