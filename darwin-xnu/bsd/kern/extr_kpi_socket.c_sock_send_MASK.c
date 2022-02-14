
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msghdr {int msg_iovlen; int * msg_iov; } ;
typedef int socket_t ;
typedef int errno_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct msghdr const*,int *,int,size_t*) ;

errno_t
FUNC_1(socket_t VAR_1, const struct msghdr *VAR_2, int VAR_3, size_t *VAR_4)
{
 if (VAR_2 == ((void*)0) || VAR_2->msg_iov == ((void*)0) || VAR_2->msg_iovlen < 1)
  return (VAR_0);

 return (FUNC_0(VAR_1, VAR_2, ((void*)0), VAR_3, VAR_4));
}
