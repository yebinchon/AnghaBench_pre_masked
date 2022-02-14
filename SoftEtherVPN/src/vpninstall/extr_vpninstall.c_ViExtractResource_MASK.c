
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int * HRSRC ;
typedef int * HINSTANCE ;
typedef int * HGLOBAL ;
typedef int BUF ;


 int * FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int * FUNC_3 (char*,int *,int ) ;
 int * FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,void*,int ) ;

BUF *FUNC_10(char *VAR_1, char *VAR_2, char *VAR_3)
{
 HINSTANCE VAR_4;
 HRSRC VAR_5;
 HGLOBAL VAR_6;
 UINT VAR_7;
 void *VAR_8;
 BUF *VAR_9;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_4 = FUNC_3(VAR_1, ((void*)0), VAR_0);
 if (VAR_4 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_5 = FUNC_0(VAR_4, VAR_3, VAR_2);
 if (VAR_5 == ((void*)0))
 {
  FUNC_1(VAR_4);
  return ((void*)0);
 }

 VAR_6 = FUNC_4(VAR_4, VAR_5);
 if (VAR_6 == ((void*)0))
 {
  FUNC_1(VAR_4);
  return ((void*)0);
 }

 VAR_7 = FUNC_8(VAR_4, VAR_5);
 VAR_8 = (void *)FUNC_5(VAR_6);

 VAR_9 = FUNC_6();
 FUNC_9(VAR_9, VAR_8, VAR_7);

 FUNC_2(VAR_6);
 FUNC_1(VAR_4);

 FUNC_7(VAR_9, 0, 0);

 return VAR_9;
}
