
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
typedef int socket_t ;
typedef int sock_upcall ;
typedef int errno_t ;


 int FUNC_0 (int ,struct sockaddr*,int,int,int ,void*,int *,int) ;

errno_t
FUNC_1(socket_t VAR_0, struct sockaddr *VAR_1, int VAR_2, int VAR_3,
    sock_upcall VAR_4, void *VAR_5, socket_t *VAR_6)
{
 return (FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3,
     VAR_4, VAR_5, VAR_6, 0));
}
