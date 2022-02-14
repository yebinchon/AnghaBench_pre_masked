
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sockaddr {scalar_t__ sa_family; } ;
struct TYPE_7__ {struct ifaddr* tqh_first; } ;
struct TYPE_6__ {struct ifnet* tqe_next; } ;
struct ifnet {int if_flags; TYPE_2__ if_addrhead; TYPE_1__ if_link; } ;
struct TYPE_8__ {struct ifaddr* tqe_next; } ;
struct ifaddr {int ifa_dstaddr; TYPE_4__* ifa_addr; TYPE_3__ ifa_link; } ;
struct TYPE_10__ {struct ifnet* tqh_first; } ;
struct TYPE_9__ {scalar_t__ sa_family; } ;


 int FUNC_0 (struct ifaddr*) ;
 int FUNC_1 (struct ifaddr*) ;
 int FUNC_2 (struct ifaddr*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (struct sockaddr const*,int ) ;
 TYPE_5__ VAR_1 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct ifnet*) ;
 int FUNC_7 (struct ifnet*) ;

struct ifaddr *
FUNC_8(const struct sockaddr *VAR_2)
{
 struct ifnet *VAR_3;
 struct ifaddr *VAR_4;
 struct ifaddr *VAR_5 = ((void*)0);

 FUNC_5();
 for (VAR_3 = VAR_1.tqh_first; VAR_3 && !VAR_5;
     VAR_3 = VAR_3->if_link.tqe_next) {
     if ((VAR_3->if_flags & VAR_0)) {
   FUNC_7(VAR_3);
   for (VAR_4 = VAR_3->if_addrhead.tqh_first; VAR_4;
       VAR_4 = VAR_4->ifa_link.tqe_next) {
    FUNC_1(VAR_4);
    if (VAR_4->ifa_addr->sa_family !=
        VAR_2->sa_family) {
     FUNC_2(VAR_4);
     continue;
    }
    if (FUNC_3(VAR_2, VAR_4->ifa_dstaddr)) {
     VAR_5 = VAR_4;
     FUNC_0(VAR_4);
     FUNC_2(VAR_4);
     break;
    }
    FUNC_2(VAR_4);
   }
   FUNC_6(VAR_3);
  }
 }
 FUNC_4();
 return (VAR_5);
}
