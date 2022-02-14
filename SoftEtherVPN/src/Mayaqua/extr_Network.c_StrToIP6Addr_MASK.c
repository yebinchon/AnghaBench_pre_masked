
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IPV6_ADDR ;
typedef int IP ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int) ;

bool FUNC_3(IPV6_ADDR *VAR_0, char *VAR_1)
{
 IP VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  FUNC_2(VAR_0, sizeof(IPV6_ADDR));
  return 0;
 }

 if (FUNC_1(&VAR_2, VAR_1) == 0)
 {
  return 0;
 }

 if (FUNC_0(VAR_0, &VAR_2) == 0)
 {
  return 0;
 }

 return 1;
}
