
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int PACK ;
typedef int IPV6_ADDR ;
typedef int ELEMENT ;


 int * FUNC_0 (int *,char*,int *,int,int ,int ) ;

ELEMENT *FUNC_1(PACK *VAR_0, char *VAR_1, IPV6_ADDR *VAR_2, UINT VAR_3, UINT VAR_4)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 return FUNC_0(VAR_0, VAR_1, VAR_2, sizeof(IPV6_ADDR), VAR_3, VAR_4);
}
