
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sin6_family; } ;
struct ifaddr {int dummy; } ;
struct in6_ifaddr {int ia_flags; int ia_plen; TYPE_1__ ia_dstaddr; struct ifaddr ia_ifa; } ;
struct ifnet {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ifaddr*) ;
 int FUNC_1 (struct ifaddr*) ;
 int VAR_2 ;
 int FUNC_2 (struct ifaddr*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ifnet*,int ,int ,struct in6_ifaddr*) ;
 int FUNC_5 (struct ifaddr*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct ifaddr*,int ,int) ;

__attribute__((used)) static int
FUNC_8(struct ifnet *VAR_11, struct in6_ifaddr *VAR_12, int VAR_13)
{
 int VAR_14;
 struct ifaddr *VAR_15;

 VAR_14 = 0;
 VAR_15 = &VAR_12->ia_ifa;






 if ((VAR_13 & VAR_3) != 0) {
  VAR_14 = FUNC_4(VAR_11, VAR_5, VAR_10, VAR_12);
  if (VAR_14 != 0) {
   if (VAR_14 != VAR_1)
    return (VAR_14);
   VAR_14 = 0;
  }
 }

 FUNC_0(VAR_15);







 if (!(VAR_12->ia_flags & VAR_2) && VAR_12->ia_plen == 128 &&
     VAR_12->ia_dstaddr.sin6_family == VAR_0) {
  FUNC_2(VAR_15);
  VAR_14 = FUNC_7(VAR_15, VAR_9, VAR_8 | VAR_7);
  if (VAR_14 != 0)
   return (VAR_14);
  FUNC_0(VAR_15);
  VAR_12->ia_flags |= VAR_2;
 }
 FUNC_1(VAR_15);
 if (VAR_12->ia_plen < 128) {



  VAR_12->ia_flags |= VAR_6;
 }

 FUNC_2(VAR_15);


 if ((VAR_13 & VAR_4) != 0)
  FUNC_5(VAR_15);


 FUNC_6();

 FUNC_3(VAR_14 == 0);
 return (0);
}
