
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int PACK ;
typedef int IP ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int *,int ) ;

UINT FUNC_2(PACK *VAR_0, char *VAR_1, UINT VAR_2)
{
 IP VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_1(VAR_0, VAR_1, &VAR_3, VAR_2) == 0)
 {
  return 0;
 }

 return FUNC_0(&VAR_3);
}
