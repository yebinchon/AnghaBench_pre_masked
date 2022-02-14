
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int tmp ;
typedef int UNI_TOKEN_LIST ;
typedef int TOKEN_LIST ;


 int * FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;

TOKEN_LIST *FUNC_4(char *VAR_1)
{
 TOKEN_LIST *VAR_2;
 UNI_TOKEN_LIST *VAR_3;
 wchar_t VAR_4[VAR_0];

 if (VAR_1 == ((void*)0))
 {
  VAR_1 = "./";
 }

 FUNC_1(VAR_4, sizeof(VAR_4), VAR_1);

 VAR_3 = FUNC_0(VAR_4);

 VAR_2 = FUNC_3(VAR_3);

 FUNC_2(VAR_3);

 return VAR_2;
}
