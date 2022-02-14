
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int replace_name ;
typedef int BUF ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int * FUNC_5 (char*) ;
 int FUNC_6 (int *,int,char*) ;
 int FUNC_7 (int *,int) ;

bool FUNC_8(wchar_t *VAR_1)
{
 bool VAR_2;
 BUF *VAR_3;
 wchar_t VAR_4[VAR_0];

 FUNC_7(VAR_4, sizeof(VAR_4));

 VAR_3 = FUNC_5("@table_name.txt");
 if (VAR_3 != ((void*)0))
 {
  char *VAR_5 = FUNC_0(VAR_3);
  if (VAR_5 != ((void*)0))
  {
   if (FUNC_3(VAR_5) == 0)
   {
    FUNC_6(VAR_4, sizeof(VAR_4), VAR_5);
    VAR_1 = VAR_4;
   }

   FUNC_1(VAR_5);
  }
  FUNC_2(VAR_3);
 }

 VAR_2 = FUNC_4(VAR_1);

 return VAR_2;
}
