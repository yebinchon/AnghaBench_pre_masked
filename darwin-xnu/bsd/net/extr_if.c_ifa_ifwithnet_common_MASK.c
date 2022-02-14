
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct sockaddr_dl {int sdl_index; } ;
struct sockaddr {scalar_t__ sa_family; char* sa_data; } ;
struct TYPE_8__ {struct ifaddr* tqh_first; } ;
struct TYPE_7__ {struct ifnet* tqe_next; } ;
struct ifnet {unsigned int if_index; TYPE_2__ if_addrhead; TYPE_1__ if_link; } ;
struct TYPE_9__ {struct ifaddr* tqe_next; } ;
struct ifaddr {TYPE_5__* ifa_netmask; TYPE_4__* ifa_addr; TYPE_3__ ifa_link; } ;
typedef int caddr_t ;
struct TYPE_12__ {struct ifnet* tqh_first; } ;
struct TYPE_11__ {char* sa_data; int sa_len; } ;
struct TYPE_10__ {scalar_t__ sa_family; char* sa_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ifaddr*) ;
 int FUNC_1 (struct ifaddr*) ;
 int FUNC_2 (struct ifaddr*) ;
 int FUNC_3 (struct ifaddr*) ;
 int FUNC_4 (struct ifaddr*) ;
 int FUNC_5 (struct ifaddr*) ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 struct ifaddr** VAR_5 ;
 TYPE_6__ VAR_6 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct ifnet*) ;
 int FUNC_9 (struct ifnet*) ;
 scalar_t__ FUNC_10 (int ,int ) ;

__attribute__((used)) static struct ifaddr *
FUNC_11(const struct sockaddr *VAR_7, unsigned int VAR_8)
{
 struct ifnet *VAR_9;
 struct ifaddr *VAR_10 = ((void*)0);
 struct ifaddr *VAR_11 = ((void*)0);
 u_int VAR_12 = VAR_7->sa_family;
 const char *VAR_13 = VAR_7->sa_data, *VAR_14;




 if (VAR_12 != VAR_0)

  VAR_8 = VAR_3;

 FUNC_7();




 if (VAR_12 == VAR_2) {
  const struct sockaddr_dl *VAR_15 =
      (const struct sockaddr_dl *)(uintptr_t)(size_t)VAR_7;
  if (VAR_15->sdl_index && VAR_15->sdl_index <= VAR_4) {
   VAR_10 = VAR_5[VAR_15->sdl_index - 1];
   if (VAR_10 != ((void*)0))
    FUNC_0(VAR_10);

   FUNC_6();
   return (VAR_10);
  }
 }





 for (VAR_9 = VAR_6.tqh_first; VAR_9; VAR_9 = VAR_9->if_link.tqe_next) {
  FUNC_9(VAR_9);
  for (VAR_10 = VAR_9->if_addrhead.tqh_first; VAR_10;
       VAR_10 = VAR_10->ifa_link.tqe_next) {
   const char *VAR_16, *VAR_17, *VAR_18;

   FUNC_2(VAR_10);
   if (VAR_10->ifa_addr == ((void*)0) ||
       VAR_10->ifa_addr->sa_family != VAR_12) {
next:
    FUNC_5(VAR_10);
    continue;
   }




   if (VAR_8 != VAR_3 &&
       VAR_9->if_index != VAR_8) {
    FUNC_5(VAR_10);
    continue;
   }
   if (VAR_10->ifa_netmask == 0) {
    FUNC_5(VAR_10);
    continue;
   }
   VAR_16 = VAR_13;
   VAR_17 = VAR_10->ifa_addr->sa_data;
   VAR_18 = VAR_10->ifa_netmask->sa_data;
   VAR_14 = VAR_10->ifa_netmask->sa_len +
       (char *)VAR_10->ifa_netmask;
   while (VAR_18 < VAR_14)
    if ((*VAR_16++ ^ *VAR_17++) & *VAR_18++)
     goto next;







   if (VAR_11 == ((void*)0) ||
       FUNC_10((caddr_t)VAR_10->ifa_netmask,
       (caddr_t)VAR_11->ifa_netmask)) {
    FUNC_1(VAR_10);
    FUNC_5(VAR_10);
    if (VAR_11 != ((void*)0))
     FUNC_4(VAR_11);
    VAR_11 = VAR_10;
   } else {
    FUNC_5(VAR_10);
   }
   FUNC_3(VAR_10);
  }
  FUNC_8(VAR_9);

  if (VAR_10 != ((void*)0))
   break;
 }
 FUNC_6();

 if (VAR_10 == ((void*)0))
  VAR_10 = VAR_11;
 else if (VAR_11 != ((void*)0))
  FUNC_4(VAR_11);

 return (VAR_10);
}
