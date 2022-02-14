
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_long ;
typedef int u_int32_t ;
struct TYPE_9__ {int s_addr; } ;
struct sockaddr_in {int sin_len; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct TYPE_11__ {int if_unit; int if_family; int * if_name; } ;
struct kev_msg {TYPE_4__* dv; TYPE_3__ link_data; int ia_netbroadcast; int ia_subnetmask; int ia_subnet; int ia_netmask; int ia_net; int ia_addr; TYPE_1__ ia_dstaddr; int event_code; int kev_subclass; int kev_class; int vendor_code; } ;
struct kev_in_data {TYPE_4__* dv; TYPE_3__ link_data; int ia_netbroadcast; int ia_subnetmask; int ia_subnet; int ia_netmask; int ia_net; int ia_addr; TYPE_1__ ia_dstaddr; int event_code; int kev_subclass; int kev_class; int vendor_code; } ;
struct TYPE_13__ {struct sockaddr* ifa_dstaddr; } ;
struct TYPE_10__ {int sin_addr; } ;
struct in_ifaddr {int ia_flags; TYPE_5__ ia_ifa; struct sockaddr_in ia_dstaddr; int ia_netbroadcast; int ia_subnetmask; int ia_subnet; int ia_netmask; int ia_net; TYPE_2__ ia_addr; } ;
struct ifreq {struct sockaddr_in ifr_dstaddr; } ;
struct ifnet {int if_flags; int if_unit; int if_family; int if_name; } ;
typedef int dstaddr ;
struct TYPE_12__ {int data_length; struct kev_msg* data_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_5__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;


 int FUNC_3 (int ) ;
 int FUNC_4 (struct sockaddr_in*,struct sockaddr_in*,int) ;
 int FUNC_5 (struct kev_msg*,int) ;
 int FUNC_6 (struct ifnet*,struct kev_msg*) ;
 int FUNC_7 (struct ifnet*,int ,int const,struct in_ifaddr*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_17 ;
 int FUNC_10 (TYPE_5__*,int,int) ;
 int FUNC_11 (int *,int ,int ) ;

__attribute__((used)) static __attribute__((noinline)) int
FUNC_12(struct ifnet *VAR_18, struct in_ifaddr *VAR_19, u_long VAR_20,
    struct ifreq *VAR_21)
{
 struct kev_in_data VAR_22;
 struct kev_msg VAR_23;
 struct sockaddr_in VAR_24;
 int VAR_25 = 0;

 FUNC_3(VAR_18 != ((void*)0));

 if (!(VAR_18->if_flags & VAR_5))
  return (VAR_2);

 FUNC_5(&VAR_22, sizeof (struct kev_in_data));
 FUNC_5(&VAR_23, sizeof (struct kev_msg));

 switch (VAR_20) {
 case 129:
  if (VAR_19 == ((void*)0)) {
   VAR_25 = VAR_1;
   break;
  }
  FUNC_0(&VAR_19->ia_ifa);
  FUNC_4(&VAR_19->ia_dstaddr, &VAR_21->ifr_dstaddr, sizeof (VAR_24));
  FUNC_2(&VAR_19->ia_ifa);
  break;

 case 128:
  FUNC_3(VAR_19 != ((void*)0));
  FUNC_0(&VAR_19->ia_ifa);
  VAR_24 = VAR_19->ia_dstaddr;
  FUNC_4(&VAR_21->ifr_dstaddr, &VAR_19->ia_dstaddr, sizeof (VAR_24));
  if (VAR_19->ia_dstaddr.sin_family == VAR_0)
   VAR_19->ia_dstaddr.sin_len = sizeof (struct sockaddr_in);
  FUNC_2(&VAR_19->ia_ifa);






  VAR_25 = FUNC_7(VAR_18, VAR_12, 128, VAR_19);
  FUNC_0(&VAR_19->ia_ifa);
  if (VAR_25 == VAR_3)
   VAR_25 = 0;
  if (VAR_25 != 0) {
   VAR_19->ia_dstaddr = VAR_24;
   FUNC_2(&VAR_19->ia_ifa);
   break;
  }
  FUNC_1(&VAR_19->ia_ifa);

  VAR_23.vendor_code = VAR_11;
  VAR_23.kev_class = VAR_10;
  VAR_23.kev_subclass = VAR_9;

  VAR_23.event_code = VAR_8;

  if (VAR_19->ia_ifa.ifa_dstaddr) {
   VAR_22.ia_dstaddr = ((struct sockaddr_in *)
       (void *)VAR_19->ia_ifa.ifa_dstaddr)->sin_addr;
  } else {
   VAR_22.ia_dstaddr.s_addr = VAR_7;
  }

  VAR_22.ia_addr = VAR_19->ia_addr.sin_addr;
  VAR_22.ia_net = VAR_19->ia_net;
  VAR_22.ia_netmask = VAR_19->ia_netmask;
  VAR_22.ia_subnet = VAR_19->ia_subnet;
  VAR_22.ia_subnetmask = VAR_19->ia_subnetmask;
  VAR_22.ia_netbroadcast = VAR_19->ia_netbroadcast;
  FUNC_2(&VAR_19->ia_ifa);
  (void) FUNC_11(&VAR_22.link_data.if_name[0],
      VAR_18->if_name, VAR_6);
  VAR_22.link_data.if_family = VAR_18->if_family;
  VAR_22.link_data.if_unit = (u_int32_t)VAR_18->if_unit;

  VAR_23.dv[0].data_ptr = &VAR_22;
  VAR_23.dv[0].data_length = sizeof (struct kev_in_data);
  VAR_23.dv[1].data_length = 0;

  FUNC_6(VAR_18, &VAR_23);

  FUNC_8(VAR_17);
  FUNC_0(&VAR_19->ia_ifa);
  if (VAR_19->ia_flags & VAR_4) {
   VAR_19->ia_ifa.ifa_dstaddr = (struct sockaddr *)&VAR_24;
   FUNC_2(&VAR_19->ia_ifa);
   FUNC_10(&(VAR_19->ia_ifa), (int)VAR_16, VAR_13);
   FUNC_0(&VAR_19->ia_ifa);
   VAR_19->ia_ifa.ifa_dstaddr =
       (struct sockaddr *)&VAR_19->ia_dstaddr;
   FUNC_2(&VAR_19->ia_ifa);
   FUNC_10(&(VAR_19->ia_ifa), (int)VAR_15,
       VAR_13|VAR_14);
  } else {
   FUNC_2(&VAR_19->ia_ifa);
  }
  FUNC_9(VAR_17);
  break;



 default:
  FUNC_3(0);

 }

 return (VAR_25);
}
