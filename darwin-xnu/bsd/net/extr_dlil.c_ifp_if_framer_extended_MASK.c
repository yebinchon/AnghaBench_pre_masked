
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct sockaddr {int dummy; } ;
struct mbuf {int dummy; } ;
struct ifnet {int dummy; } ;
typedef int errno_t ;


 int VAR_0 ;
 int FUNC_0 (struct mbuf*) ;

__attribute__((used)) static errno_t
FUNC_1(struct ifnet *VAR_1, struct mbuf **VAR_2,
    const struct sockaddr *VAR_3, const char *VAR_4, const char *VAR_5,
    u_int32_t *VAR_6, u_int32_t *VAR_7)
{
#pragma unused(ifp, sa, ll, t)
 FUNC_0(*VAR_2);
 *VAR_2 = ((void*)0);

 if (VAR_6 != ((void*)0))
  *VAR_6 = 0;
 if (VAR_7 != ((void*)0))
  *VAR_7 = 0;

 return (VAR_0);
}
