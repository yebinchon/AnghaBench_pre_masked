
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int IPV6_ADDR ;
typedef int IP ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (char*,int ,int *,int) ;
 int FUNC_2 (char*,int ,char*) ;

void FUNC_3(char *VAR_0, UINT VAR_1, IPV6_ADDR *VAR_2, bool VAR_3)
{
 IP VAR_4;


 if (VAR_0 == ((void*)0) || VAR_2 == ((void*)0))
 {
  FUNC_2(VAR_0, VAR_1, "");
  return;
 }

 FUNC_0(&VAR_4, VAR_2);

 FUNC_1(VAR_0, VAR_1, &VAR_4, VAR_3);
}
