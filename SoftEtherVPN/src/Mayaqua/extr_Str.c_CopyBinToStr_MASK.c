
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;


 int FUNC_0 (char*,int,void*,int) ;
 char* FUNC_1 (int) ;

char *FUNC_2(void *VAR_0, UINT VAR_1)
{
 char *VAR_2;
 UINT VAR_3;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3 = VAR_1 * 2 + 1;
 VAR_2 = FUNC_1(VAR_3);

 FUNC_0(VAR_2, VAR_3, VAR_0, VAR_1);

 return VAR_2;
}
