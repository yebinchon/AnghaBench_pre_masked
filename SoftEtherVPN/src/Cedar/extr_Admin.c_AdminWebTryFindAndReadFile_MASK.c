
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp3 ;
typedef int tmp2 ;
typedef int tmp ;
typedef int relative_path ;
typedef int UINT ;
typedef int BUF ;


 int * FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,int,char*,char*) ;
 int VAR_0 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int,char*) ;
 int FUNC_4 (char*) ;

BUF *FUNC_5(char *VAR_1, char *VAR_2, char *VAR_3, char *VAR_4, UINT VAR_5, bool *VAR_6)
{
 char VAR_7[VAR_0];
 char VAR_8[VAR_0];
 UINT VAR_9;
 UINT VAR_10;
 char VAR_11[VAR_0];
 BUF *VAR_12;
 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_6 == ((void*)0))
 {
  return ((void*)0);
 }

 *VAR_6 = 0;

 if (FUNC_2(VAR_3, VAR_1) == 0)
 {
  return ((void*)0);
 }

 VAR_9 = FUNC_4(VAR_1);
 VAR_10 = FUNC_4(VAR_3);

 FUNC_3(VAR_11, sizeof(VAR_11), VAR_3 + VAR_9);

 if (FUNC_2(VAR_11, "/"))
 {
  char VAR_13[VAR_0];

  FUNC_3(VAR_13, sizeof(VAR_13), VAR_11 + 1);
  FUNC_3(VAR_11, sizeof(VAR_11), VAR_13);
 }

 FUNC_1(VAR_7, sizeof(VAR_7), VAR_2, VAR_11);


 FUNC_1(VAR_8, sizeof(VAR_8), VAR_7, "index.html");
 VAR_12 = FUNC_0(VAR_8, VAR_4, VAR_5);
 if (VAR_12 != ((void*)0))
 {
  *VAR_6 = 1;
  return VAR_12;
 }


 FUNC_3(VAR_8, sizeof(VAR_8), VAR_7);
 VAR_12 = FUNC_0(VAR_8, VAR_4, VAR_5);
 if (VAR_12 != ((void*)0))
 {
  return VAR_12;
 }

 return ((void*)0);
}
