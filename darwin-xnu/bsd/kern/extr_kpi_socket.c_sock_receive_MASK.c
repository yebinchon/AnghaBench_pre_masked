
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msghdr {int msg_iovlen; TYPE_1__* msg_iov; } ;
typedef int socket_t ;
typedef int errno_t ;
struct TYPE_2__ {scalar_t__ iov_len; int * iov_base; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct msghdr*,int *,int,size_t*) ;

errno_t
FUNC_1(socket_t VAR_1, struct msghdr *VAR_2, int VAR_3, size_t *VAR_4)
{
 if ((VAR_2 == ((void*)0)) || (VAR_2->msg_iovlen < 1) ||
     (VAR_2->msg_iov[0].iov_len == 0) ||
     (VAR_2->msg_iov[0].iov_base == ((void*)0)))
  return (VAR_0);

 return (FUNC_0(VAR_1, VAR_2, ((void*)0), VAR_3, VAR_4));
}
