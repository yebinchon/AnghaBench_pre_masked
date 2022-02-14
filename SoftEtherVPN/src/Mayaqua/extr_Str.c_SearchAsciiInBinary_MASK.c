
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;


 int FUNC_0 (char*,void*,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (char*,char*,int ,int) ;
 char* FUNC_3 (int ) ;

UINT FUNC_4(void *VAR_1, UINT VAR_2, char *VAR_3, bool VAR_4)
{
 UINT VAR_5 = VAR_0;
 char *VAR_6;

 if (VAR_1 == ((void*)0) || VAR_2 == 0 || VAR_3 == ((void*)0))
 {
  return VAR_0;
 }

 VAR_6 = FUNC_3(VAR_2 + 1);
 FUNC_0(VAR_6, VAR_1, VAR_2);

 VAR_5 = FUNC_2(VAR_6, VAR_3, 0, VAR_4);

 FUNC_1(VAR_6);

 return VAR_5;
}
