
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
typedef int * socket_t ;
typedef int errno_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,struct sockaddr**,int) ;

errno_t
FUNC_3(socket_t VAR_1, struct sockaddr **VAR_2, int VAR_3)
{
 int VAR_4;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
  return (VAR_0);

 FUNC_0(VAR_1, 1);
 VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
 FUNC_1(VAR_1, 1);

 return (VAR_4);
}
