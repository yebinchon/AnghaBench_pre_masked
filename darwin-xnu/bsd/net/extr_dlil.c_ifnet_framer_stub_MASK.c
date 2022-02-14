
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct sockaddr {int dummy; } ;
struct mbuf {int dummy; } ;
struct ifnet {int (* if_framer_legacy ) (struct ifnet*,struct mbuf**,struct sockaddr const*,char const*,char const*) ;} ;
typedef int errno_t ;


 int FUNC_0 (struct ifnet*,struct mbuf**,struct sockaddr const*,char const*,char const*) ;

errno_t
FUNC_1(struct ifnet *VAR_0, struct mbuf **VAR_1,
    const struct sockaddr *VAR_2, const char *VAR_3,
    const char *VAR_4, u_int32_t *VAR_5, u_int32_t *VAR_6)
{
 if (VAR_5 != ((void*)0))
  *VAR_5 = 0;
 if (VAR_6 != ((void*)0))
  *VAR_6 = 0;

 return (VAR_0->if_framer_legacy(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4));
}
