
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int * socket_t ;
typedef int sock_evupcall ;
typedef int errno_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,void*,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;

errno_t
FUNC_3(socket_t VAR_1, sock_evupcall VAR_2, void *VAR_3,
    u_int32_t VAR_4)
{
 if (VAR_1 == ((void*)0))
  return (VAR_0);

 FUNC_1(VAR_1, 1);
 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_2(VAR_1, 1);

 return (0);
}
