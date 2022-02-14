
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SOCK_EVENT ;
typedef int INTERRUPT_MANAGER ;
typedef int CEDAR ;


 void* FUNC_0 (int *,int *,int *) ;

bool FUNC_1(void **VAR_0, CEDAR *VAR_1, INTERRUPT_MANAGER *VAR_2, SOCK_EVENT *VAR_3)
{
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }

 *VAR_0 = FUNC_0(VAR_1, VAR_2, VAR_3);

 return 1;
}
