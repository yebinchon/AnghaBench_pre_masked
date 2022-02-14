
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int32_t ;
struct stf_softc {int sc_if; } ;
struct in_addr {scalar_t__ s_addr; } ;
struct sockaddr_in {int sin_len; struct in_addr sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct rtentry {struct ifnet* rt_ifp; } ;
struct TYPE_9__ {TYPE_1__* ifa_ifp; } ;
struct TYPE_7__ {scalar_t__ s_addr; } ;
struct TYPE_8__ {TYPE_2__ sin_addr; } ;
struct in_ifaddr {TYPE_4__ ia_ifa; TYPE_3__ ia_broadaddr; } ;
struct ifnet {int dummy; } ;
typedef int sin ;
struct TYPE_6__ {int if_flags; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 (struct rtentry*) ;
 int FUNC_4 (struct rtentry*) ;
 struct in_ifaddr* FUNC_5 (int *) ;
 struct in_ifaddr* FUNC_6 (struct in_ifaddr*,int ) ;
 int FUNC_7 (struct sockaddr_in*,int) ;
 int VAR_4 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*,int ,int ) ;
 int FUNC_13 (scalar_t__) ;
 struct rtentry* FUNC_14 (struct sockaddr*,int ,int ) ;
 int FUNC_15 (struct rtentry*) ;

__attribute__((used)) static int
FUNC_16(
 struct stf_softc *VAR_7,
 const struct in_addr *VAR_8,
 struct ifnet *VAR_9)
{
 struct in_ifaddr *VAR_10;





 if (FUNC_2(FUNC_13(VAR_8->s_addr)))
  return -1;
 switch ((FUNC_13(VAR_8->s_addr) & 0xff000000) >> 24) {
 case 0: case 127: case 255:
  return -1;
 }




 FUNC_11(VAR_5);
 for (VAR_10 = FUNC_5(&VAR_6);
      VAR_10;
      VAR_10 = FUNC_6(VAR_10, VAR_4))
 {
  FUNC_0(&VAR_10->ia_ifa);
  if ((VAR_10->ia_ifa.ifa_ifp->if_flags & VAR_1) == 0) {
   FUNC_1(&VAR_10->ia_ifa);
   continue;
  }
  if (VAR_8->s_addr == VAR_10->ia_broadaddr.sin_addr.s_addr) {
   FUNC_1(&VAR_10->ia_ifa);
   FUNC_10(VAR_5);
   return -1;
  }
  FUNC_1(&VAR_10->ia_ifa);
 }
 FUNC_10(VAR_5);




 if (VAR_7 && (FUNC_9(VAR_7->sc_if) & VAR_2) == 0 && VAR_9) {
  struct sockaddr_in VAR_11;
  struct rtentry *VAR_12;

  FUNC_7(&VAR_11, sizeof(VAR_11));
  VAR_11.sin_family = VAR_0;
  VAR_11.sin_len = sizeof(struct sockaddr_in);
  VAR_11.sin_addr = *VAR_8;
  VAR_12 = FUNC_14((struct sockaddr *)&VAR_11, 0, 0);
  if (VAR_12 != ((void*)0))
   FUNC_3(VAR_12);
  if (VAR_12 == ((void*)0) || VAR_12->rt_ifp != VAR_9) {

   FUNC_12(VAR_3, "%s: packet from 0x%x dropped "
       "due to ingress filter\n", FUNC_8(VAR_7->sc_if),
       (u_int32_t)FUNC_13(VAR_11.sin_addr.s_addr));

   if (VAR_12 != ((void*)0)) {
    FUNC_4(VAR_12);
    FUNC_15(VAR_12);
   }
   return -1;
  }
  FUNC_4(VAR_12);
  FUNC_15(VAR_12);
 }

 return 0;
}
