
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int IP ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (char*,int ) ;

bool FUNC_5(char *VAR_0, UINT VAR_1)
{
 bool VAR_2 = 0;
 IP VAR_3;

 FUNC_0(VAR_0, VAR_1);
 if (VAR_0 == ((void*)0))
 {
  return 0;
 }
 VAR_2 = FUNC_2(VAR_0, VAR_1);


 if (VAR_2 == 0)
 {
  return 0;
 }

 return (FUNC_1(VAR_0) ? 0 : 1);
}
