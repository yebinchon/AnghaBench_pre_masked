
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct in6_ifaddr_dbg {int in6ifa_alloc; } ;
struct TYPE_2__ {int ifa_detached; int ifa_attached; int ifa_trace; int ifa_debug; int ifa_free; } ;
struct in6_ifaddr {TYPE_1__ ia_ifa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct in6_ifaddr*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct in6_ifaddr* FUNC_3 (int ) ;
 struct in6_ifaddr* FUNC_4 (int ) ;

__attribute__((used)) static struct in6_ifaddr *
FUNC_5(int VAR_10)
{
 struct in6_ifaddr *VAR_11;

 VAR_11 = (VAR_10 == VAR_2) ? FUNC_3(VAR_9) :
     FUNC_4(VAR_9);
 if (VAR_11 != ((void*)0)) {
  FUNC_0(VAR_11, VAR_8);
  VAR_11->ia_ifa.ifa_free = VAR_5;
  VAR_11->ia_ifa.ifa_debug |= VAR_0;
  FUNC_2(&VAR_11->ia_ifa);
  if (VAR_7 != 0) {
   struct in6_ifaddr_dbg *VAR_12 =
       (struct in6_ifaddr_dbg *)VAR_11;
   VAR_11->ia_ifa.ifa_debug |= VAR_1;
   VAR_11->ia_ifa.ifa_trace = VAR_6;
   VAR_11->ia_ifa.ifa_attached = VAR_3;
   VAR_11->ia_ifa.ifa_detached = VAR_4;
   FUNC_1(&VAR_12->in6ifa_alloc);
  }
 }

 return (VAR_11);
}
