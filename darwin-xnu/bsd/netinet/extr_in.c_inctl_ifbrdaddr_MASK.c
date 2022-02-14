
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_long ;
typedef int u_int32_t ;
struct TYPE_7__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct TYPE_9__ {int if_unit; int if_family; int * if_name; } ;
struct kev_msg {TYPE_4__* dv; TYPE_3__ link_data; int ia_netbroadcast; int ia_subnetmask; int ia_subnet; int ia_netmask; int ia_net; int ia_addr; TYPE_1__ ia_dstaddr; int event_code; int kev_subclass; int kev_class; int vendor_code; } ;
struct kev_in_data {TYPE_4__* dv; TYPE_3__ link_data; int ia_netbroadcast; int ia_subnetmask; int ia_subnet; int ia_netmask; int ia_net; int ia_addr; TYPE_1__ ia_dstaddr; int event_code; int kev_subclass; int kev_class; int vendor_code; } ;
struct TYPE_11__ {scalar_t__ ifa_dstaddr; } ;
struct TYPE_8__ {int sin_addr; } ;
struct in_ifaddr {TYPE_5__ ia_ifa; int ia_netbroadcast; int ia_subnetmask; int ia_subnet; int ia_netmask; int ia_net; TYPE_2__ ia_addr; int ia_broadaddr; } ;
struct ifreq {int ifr_broadaddr; } ;
struct ifnet {int if_flags; int if_unit; int if_family; int if_name; } ;
struct TYPE_10__ {int data_length; struct kev_msg* data_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;


 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (struct kev_msg*,int) ;
 int FUNC_5 (struct ifnet*,struct kev_msg*) ;
 int FUNC_6 (int *,int ,int ) ;

__attribute__((used)) static __attribute__((noinline)) int
FUNC_7(struct ifnet *VAR_9, struct in_ifaddr *VAR_10, u_long VAR_11,
    struct ifreq *VAR_12)
{
 struct kev_in_data VAR_13;
 struct kev_msg VAR_14;
 int VAR_15 = 0;

 FUNC_2(VAR_9 != ((void*)0));

 if (VAR_10 == ((void*)0))
  return (VAR_0);

 if (!(VAR_9->if_flags & VAR_2))
  return (VAR_1);

 FUNC_4(&VAR_13, sizeof (struct kev_in_data));
 FUNC_4(&VAR_14, sizeof (struct kev_msg));

 switch (VAR_11) {
 case 129:
  FUNC_0(&VAR_10->ia_ifa);
  FUNC_3(&VAR_10->ia_broadaddr, &VAR_12->ifr_broadaddr,
      sizeof (struct sockaddr_in));
  FUNC_1(&VAR_10->ia_ifa);
  break;

 case 128:
  FUNC_0(&VAR_10->ia_ifa);
  FUNC_3(&VAR_12->ifr_broadaddr, &VAR_10->ia_broadaddr,
      sizeof (struct sockaddr_in));

  VAR_14.vendor_code = VAR_8;
  VAR_14.kev_class = VAR_7;
  VAR_14.kev_subclass = VAR_6;

  VAR_14.event_code = VAR_5;

  if (VAR_10->ia_ifa.ifa_dstaddr) {
   VAR_13.ia_dstaddr = ((struct sockaddr_in *)
       (void *)VAR_10->ia_ifa.ifa_dstaddr)->sin_addr;
  } else {
   VAR_13.ia_dstaddr.s_addr = VAR_4;
  }
  VAR_13.ia_addr = VAR_10->ia_addr.sin_addr;
  VAR_13.ia_net = VAR_10->ia_net;
  VAR_13.ia_netmask = VAR_10->ia_netmask;
  VAR_13.ia_subnet = VAR_10->ia_subnet;
  VAR_13.ia_subnetmask = VAR_10->ia_subnetmask;
  VAR_13.ia_netbroadcast = VAR_10->ia_netbroadcast;
  FUNC_1(&VAR_10->ia_ifa);
  (void) FUNC_6(&VAR_13.link_data.if_name[0],
      VAR_9->if_name, VAR_3);
  VAR_13.link_data.if_family = VAR_9->if_family;
  VAR_13.link_data.if_unit = (u_int32_t)VAR_9->if_unit;

  VAR_14.dv[0].data_ptr = &VAR_13;
  VAR_14.dv[0].data_length = sizeof (struct kev_in_data);
  VAR_14.dv[1].data_length = 0;

  FUNC_5(VAR_9, &VAR_14);
  break;

 default:
  FUNC_2(0);

 }

 return (VAR_15);
}
