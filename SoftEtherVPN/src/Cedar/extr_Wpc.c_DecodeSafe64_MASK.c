
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;


 int FUNC_0 (void*,char*,int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;

UINT FUNC_6(void *VAR_0, char *VAR_1, UINT VAR_2)
{
 char *VAR_3;
 UINT VAR_4;
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 if (VAR_2 == 0)
 {
  VAR_2 = FUNC_5(VAR_1);
 }

 VAR_3 = FUNC_3(VAR_2 + 1);
 FUNC_1(VAR_3, VAR_1, VAR_2);
 VAR_3[VAR_2] = 0;
 FUNC_4(VAR_3);

 VAR_4 = FUNC_0(VAR_0, VAR_3, VAR_2);
 FUNC_2(VAR_3);

 return VAR_4;
}
