
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int IP ;
typedef int FOLDER ;


 int FUNC_0 (int *,char*,int *) ;
 int FUNC_1 (int *) ;

UINT FUNC_2(FOLDER *VAR_0, char *VAR_1)
{
 IP VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_0(VAR_0, VAR_1, &VAR_2) == 0)
 {
  return 0;
 }

 return FUNC_1(&VAR_2);
}
