
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int UINT ;


 int* FUNC_0 (int*) ;
 char* FUNC_1 (int*) ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int* FUNC_5 (int*) ;
 int FUNC_6 (int*) ;
 int FUNC_7 (int*) ;
 int FUNC_8 (int*) ;
 int FUNC_9 (int*) ;

bool FUNC_10(wchar_t *VAR_0, char **VAR_1, wchar_t **VAR_2)
{
 UINT VAR_3, VAR_4, VAR_5;
 wchar_t *VAR_6;
 wchar_t *VAR_7;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }
 if (VAR_1 != ((void*)0))
 {
  *VAR_1 = ((void*)0);
 }
 if (VAR_2 != ((void*)0))
 {
  *VAR_2 = ((void*)0);
 }

 VAR_7 = FUNC_5(VAR_0);
 FUNC_9(VAR_7);
 FUNC_8(VAR_7);

 VAR_4 = FUNC_7(VAR_7);
 VAR_6 = FUNC_3(sizeof(wchar_t) * (VAR_4 + 32));
 VAR_5 = 0;

 for (VAR_3 = 0;VAR_3 < (VAR_4 + 1);VAR_3++)
 {
  wchar_t VAR_8 = VAR_7[VAR_3];

  switch (VAR_8)
  {
  case 0:
  case L' ':
  case L'\t':
   VAR_6[VAR_5] = 0;
   if (FUNC_6(VAR_6))
   {
    FUNC_2(VAR_6);
    FUNC_2(VAR_7);
    return 0;
   }
   if (VAR_1 != ((void*)0))
   {
    *VAR_1 = FUNC_1(VAR_6);
    FUNC_4(*VAR_1);
   }
   goto ESCAPE;

  default:
   VAR_6[VAR_5++] = VAR_8;
   break;
  }
 }

ESCAPE:
 if (VAR_2 != ((void*)0))
 {
  *VAR_2 = FUNC_0(&VAR_7[VAR_5]);
  FUNC_8(*VAR_2);
 }

 FUNC_2(VAR_6);
 FUNC_2(VAR_7);

 return 1;
}
