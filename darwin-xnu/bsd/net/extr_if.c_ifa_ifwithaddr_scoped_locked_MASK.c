
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {scalar_t__ sa_family; scalar_t__ sa_len; } ;
struct TYPE_3__ {struct ifaddr* tqh_first; } ;
struct ifnet {int if_flags; TYPE_1__ if_addrhead; } ;
struct TYPE_4__ {struct ifaddr* tqe_next; } ;
struct ifaddr {struct sockaddr const* ifa_broadaddr; struct sockaddr const* ifa_addr; TYPE_2__ ifa_link; } ;


 int FUNC_0 (struct ifaddr*) ;
 int FUNC_1 (struct ifaddr*) ;
 int FUNC_2 (struct ifaddr*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (struct sockaddr const*,struct sockaddr const*) ;
 struct ifaddr* FUNC_4 (struct sockaddr const*) ;
 struct ifnet** VAR_3 ;
 int FUNC_5 (struct ifnet*) ;
 int FUNC_6 (struct ifnet*) ;

struct ifaddr *
FUNC_7(const struct sockaddr *VAR_4, unsigned int VAR_5)
{
 struct ifaddr *VAR_6 = ((void*)0);
 struct ifnet *VAR_7;

 if (VAR_5 == VAR_1)
  return (FUNC_4(VAR_4));

 if (VAR_5 > (unsigned int)VAR_2) {
  return (((void*)0));
 }

 VAR_7 = VAR_3[VAR_5];
 if (VAR_7 != ((void*)0)) {
  struct ifaddr *VAR_8 = ((void*)0);






  FUNC_6(VAR_7);
  for (VAR_8 = VAR_7->if_addrhead.tqh_first; VAR_8 != ((void*)0);
      VAR_8 = VAR_8->ifa_link.tqe_next) {
   FUNC_1(VAR_8);
   if (VAR_8->ifa_addr->sa_family != VAR_4->sa_family) {
    FUNC_2(VAR_8);
    continue;
   }
   if (FUNC_3(VAR_4, VAR_8->ifa_addr)) {
    VAR_6 = VAR_8;
    FUNC_0(VAR_8);
    FUNC_2(VAR_8);
    break;
   }
   if ((VAR_7->if_flags & VAR_0) &&
       VAR_8->ifa_broadaddr != ((void*)0) &&

       VAR_8->ifa_broadaddr->sa_len != 0 &&
       FUNC_3(VAR_8->ifa_broadaddr, VAR_4)) {
    VAR_6 = VAR_8;
    FUNC_0(VAR_8);
    FUNC_2(VAR_8);
    break;
   }
   FUNC_2(VAR_8);
  }
  FUNC_5(VAR_7);
 }

 return (VAR_6);
}
