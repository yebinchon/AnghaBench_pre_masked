
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct sockaddr {scalar_t__ sa_family; char* sa_data; } ;
struct TYPE_5__ {struct ifaddr* tqh_first; } ;
struct ifnet {int if_flags; TYPE_1__ if_addrhead; } ;
struct TYPE_6__ {struct ifaddr* tqe_next; } ;
struct ifaddr {TYPE_3__* ifa_netmask; TYPE_4__* ifa_addr; TYPE_4__* ifa_dstaddr; TYPE_2__ ifa_link; } ;
struct TYPE_8__ {scalar_t__ sa_family; char* sa_data; } ;
struct TYPE_7__ {char* sa_data; int sa_len; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ifaddr*) ;
 int FUNC_1 (struct ifaddr*) ;
 int FUNC_2 (struct ifaddr*) ;
 int FUNC_3 (struct ifaddr*) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (struct sockaddr const*,TYPE_4__*) ;
 int FUNC_5 (struct ifnet*) ;
 int FUNC_6 (struct ifnet*) ;

struct ifaddr *
FUNC_7(const struct sockaddr *VAR_2, struct ifnet *VAR_3)
{
 struct ifaddr *VAR_4 = ((void*)0);
 const char *VAR_5, *VAR_6, *VAR_7;
 char *VAR_8;
 struct ifaddr *VAR_9 = ((void*)0);
 struct ifaddr *VAR_10 = ((void*)0);
 u_int VAR_11 = VAR_2->sa_family;

 if (VAR_11 >= VAR_0)
  return (((void*)0));

 FUNC_6(VAR_3);
 for (VAR_4 = VAR_3->if_addrhead.tqh_first; VAR_4;
      VAR_4 = VAR_4->ifa_link.tqe_next) {
  FUNC_1(VAR_4);
  if (VAR_4->ifa_addr->sa_family != VAR_11) {
   FUNC_3(VAR_4);
   continue;
  }
  if (VAR_9 == ((void*)0)) {
   FUNC_0(VAR_4);
   VAR_9 = VAR_4;
  }
  if (VAR_4->ifa_netmask == 0) {
   if (FUNC_4(VAR_2, VAR_4->ifa_addr) ||
       FUNC_4(VAR_2, VAR_4->ifa_dstaddr)) {
    FUNC_0(VAR_4);
    FUNC_3(VAR_4);
    break;
   }
   FUNC_3(VAR_4);
   continue;
  }
  if (VAR_3->if_flags & VAR_1) {
   if (FUNC_4(VAR_2, VAR_4->ifa_dstaddr)) {
    FUNC_0(VAR_4);
    FUNC_3(VAR_4);
    break;
   }
  } else {
   if (FUNC_4(VAR_2, VAR_4->ifa_addr)) {

    FUNC_0(VAR_4);
    FUNC_3(VAR_4);
    break;
   }
   VAR_5 = VAR_2->sa_data;
   VAR_6 = VAR_4->ifa_addr->sa_data;
   VAR_7 = VAR_4->ifa_netmask->sa_data;
   VAR_8 = VAR_4->ifa_netmask->sa_len +
       (char *)VAR_4->ifa_netmask;
   for (; VAR_7 < VAR_8; VAR_7++)
    if ((*VAR_5++ ^ *VAR_6++) & *VAR_7)
     break;
   if (VAR_7 == VAR_8) {

    if (VAR_10 == ((void*)0)) {

     FUNC_0(VAR_4);
     VAR_10 = VAR_4;
    }
   }
  }
  FUNC_3(VAR_4);
 }

 if (VAR_4 == ((void*)0)) {
  if (VAR_10 != ((void*)0)) {
   VAR_4 = VAR_10;
   VAR_10 = ((void*)0);
  } else {
   VAR_4 = VAR_9;
   VAR_9 = ((void*)0);
  }
 }

 FUNC_5(VAR_3);

 if (VAR_10 != ((void*)0))
  FUNC_2(VAR_10);
 if (VAR_9 != ((void*)0))
  FUNC_2(VAR_9);

 return (VAR_4);
}
