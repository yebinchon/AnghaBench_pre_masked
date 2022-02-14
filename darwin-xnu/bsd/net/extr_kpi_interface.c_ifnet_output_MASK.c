
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
typedef scalar_t__ protocol_family_t ;
typedef int * mbuf_t ;
typedef int * ifnet_t ;
typedef int errno_t ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__,int *,void*,struct sockaddr const*,int ,int *) ;
 int FUNC_1 (int *) ;

errno_t
FUNC_2(ifnet_t VAR_1, protocol_family_t VAR_2,
    mbuf_t VAR_3, void *VAR_4, const struct sockaddr *VAR_5)
{
 if (VAR_1 == ((void*)0) || VAR_2 == 0 || VAR_3 == ((void*)0)) {
  if (VAR_3 != ((void*)0))
   FUNC_1(VAR_3);
  return (VAR_0);
 }
 return (FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, 0, ((void*)0)));
}
