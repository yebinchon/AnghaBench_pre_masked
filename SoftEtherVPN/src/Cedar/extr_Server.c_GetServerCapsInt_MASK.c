
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t ;
typedef int UINT ;
typedef int SERVER ;
typedef int CAPSLIST ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int) ;

UINT FUNC_3(SERVER *VAR_0, char *VAR_1)
{
 CAPSLIST VAR_2;
 UINT VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 FUNC_2(&VAR_2, sizeof(VAR_2));
 FUNC_1(VAR_0, &VAR_2);

 VAR_3 = FUNC_0(&VAR_2, VAR_1);

 return VAR_3;
}
