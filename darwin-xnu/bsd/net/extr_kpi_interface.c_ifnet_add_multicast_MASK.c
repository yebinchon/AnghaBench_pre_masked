
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {scalar_t__ sa_family; } ;
typedef int * ifnet_t ;
typedef int ifmultiaddr_t ;
typedef int errno_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct sockaddr const*,int *) ;

errno_t
FUNC_1(ifnet_t VAR_3, const struct sockaddr *VAR_4,
    ifmultiaddr_t *VAR_5)
{
 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
  return (VAR_2);


 if (VAR_4->sa_family != VAR_1 && VAR_4->sa_family != VAR_0)
  return (VAR_2);

 return (FUNC_0(VAR_3, VAR_4, VAR_5));
}
