
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t ;
typedef int UINT ;
typedef int DHCP_CLASSLESS_ROUTE_TABLE ;


 int FUNC_0 (char*,int ,int *) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int) ;

bool FUNC_3(char *VAR_0, UINT VAR_1, char *VAR_2)
{
 DHCP_CLASSLESS_ROUTE_TABLE VAR_3;

 if (VAR_0 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 FUNC_2(&VAR_3, sizeof(VAR_3));
 if (FUNC_1(&VAR_3, VAR_2))
 {
  FUNC_0(VAR_0, VAR_1, &VAR_3);

  return 1;
 }

 return 0;
}
