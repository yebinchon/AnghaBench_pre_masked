
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int sa_len; scalar_t__ sa_family; } ;
typedef int int32_t ;
typedef int * ifnet_t ;
typedef int errno_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct sockaddr*,int ,int,int,int *) ;

errno_t
FUNC_1(ifnet_t VAR_3, struct sockaddr *VAR_4, int32_t VAR_5,
    int VAR_6, int VAR_7, u_int8_t VAR_8[48])
{
 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_8 == ((void*)0))
  return (VAR_2);
 if (VAR_4->sa_len > sizeof(struct sockaddr_storage))
  return (VAR_2);
 if (VAR_4->sa_family != VAR_1 && VAR_4->sa_family != VAR_0)
  return (VAR_2);

 FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
 return (0);
}
