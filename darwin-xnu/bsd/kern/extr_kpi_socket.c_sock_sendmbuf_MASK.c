
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msghdr {scalar_t__ msg_iovlen; int * msg_iov; } ;
typedef int socket_t ;
typedef int * mbuf_t ;
typedef int errno_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct msghdr const*,int *,int,size_t*) ;

errno_t
FUNC_2(socket_t VAR_1, const struct msghdr *VAR_2, mbuf_t VAR_3,
    int VAR_4, size_t *VAR_5)
{
 if (VAR_3 == ((void*)0) || (VAR_2 != ((void*)0) && (VAR_2->msg_iov != ((void*)0) ||
     VAR_2->msg_iovlen != 0))) {
  if (VAR_3 != ((void*)0))
   FUNC_0(VAR_3);
  return (VAR_0);
 }
 return (FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5));
}
