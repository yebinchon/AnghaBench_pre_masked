
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int BUF ;


 int FUNC_0 (char*,void*,int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,char*,char*,int ) ;

void FUNC_5(BUF *VAR_0, char *VAR_1, void *VAR_2, UINT VAR_3)
{
 char *VAR_4;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || (VAR_2 == ((void*)0) && VAR_3 != 0))
 {
  return;
 }

 VAR_4 = FUNC_2(VAR_3 * 2 + 64);

 FUNC_0(VAR_4, VAR_2, VAR_3);

 FUNC_4(VAR_0, VAR_1, VAR_4, FUNC_3(VAR_4));

 FUNC_1(VAR_4);
}
