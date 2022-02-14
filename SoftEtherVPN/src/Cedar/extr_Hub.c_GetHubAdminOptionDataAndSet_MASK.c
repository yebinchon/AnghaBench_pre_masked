
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int RPC_ADMIN_OPTION ;


 scalar_t__ FUNC_0 (int *,char*) ;
 scalar_t__ VAR_0 ;

void FUNC_1(RPC_ADMIN_OPTION *VAR_1, char *VAR_2, UINT *VAR_3)
{
 UINT VAR_4;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 VAR_4 = FUNC_0(VAR_1, VAR_2);
 if (VAR_4 == VAR_0)
 {
  return;
 }

 *VAR_3 = VAR_4;
}
