
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr {int sa_len; scalar_t__ sa_family; } ;
typedef int * ifnet_t ;
typedef int errno_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct sockaddr*) ;

errno_t
FUNC_1(ifnet_t VAR_3, struct sockaddr *VAR_4)
{
 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
  return (VAR_2);
 if (VAR_4->sa_len > sizeof(struct sockaddr_storage))
  return (VAR_2);
 if (VAR_4->sa_family != VAR_1 && VAR_4->sa_family != VAR_0)
  return (VAR_2);

 FUNC_0(VAR_3, VAR_4);
 return (0);
}
