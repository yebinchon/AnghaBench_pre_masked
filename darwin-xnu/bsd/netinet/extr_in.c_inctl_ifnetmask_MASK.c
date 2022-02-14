
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
struct in_ifaddr {TYPE_5__ ia_ifa; int ia_netbroadcast; int ia_subnetmask; int ia_subnet; int ia_netmask; int ia_net; TYPE_2__ ia_addr; struct sockaddr_in ia_sockmask; } ;
struct ifreq {struct sockaddr_in ifr_addr; } ;
struct ifnet {int if_unit; int if_family; int if_name; } ;
typedef int mask ;
typedef int in_addr_t ;
struct TYPE_10__ {int data_length; struct kev_msg* data_ptr; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int FUNC_2 (int ) ;
 int FUNC_3 (struct sockaddr_in*,struct sockaddr_in*,int) ;
 int FUNC_4 (struct kev_msg*,int) ;
 int FUNC_5 (struct ifnet*,struct kev_msg*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int ,int ) ;

__attribute__((used)) static __attribute__((noinline)) int
FUNC_8(struct ifnet *VAR_7, struct in_ifaddr *VAR_8, u_long VAR_9,
    struct ifreq *VAR_10)
{
 struct kev_in_data VAR_11;
 struct kev_msg VAR_12;
 struct sockaddr_in VAR_13;
 int VAR_14 = 0;

 FUNC_2(VAR_7 != ((void*)0));

 FUNC_4(&VAR_11, sizeof (struct kev_in_data));
 FUNC_4(&VAR_12, sizeof (struct kev_msg));

 switch (VAR_9) {
 case 129:
  if (VAR_8 == ((void*)0)) {
   VAR_14 = VAR_0;
   break;
  }
  FUNC_0(&VAR_8->ia_ifa);
  FUNC_3(&VAR_8->ia_sockmask, &VAR_10->ifr_addr, sizeof (VAR_13));
  FUNC_1(&VAR_8->ia_ifa);
  break;

 case 128: {
  in_addr_t VAR_15;

  FUNC_3(&VAR_10->ifr_addr, &VAR_13, sizeof (VAR_13));
  VAR_15 = VAR_13.sin_addr.s_addr;

  FUNC_2(VAR_8 != ((void*)0));
  FUNC_0(&VAR_8->ia_ifa);
  VAR_8->ia_subnetmask = FUNC_6(VAR_8->ia_sockmask.sin_addr.s_addr = VAR_15);
  VAR_12.vendor_code = VAR_6;
  VAR_12.kev_class = VAR_5;
  VAR_12.kev_subclass = VAR_4;

  VAR_12.event_code = VAR_3;

  if (VAR_8->ia_ifa.ifa_dstaddr) {
   VAR_11.ia_dstaddr = ((struct sockaddr_in *)
       (void *)VAR_8->ia_ifa.ifa_dstaddr)->sin_addr;
  } else {
   VAR_11.ia_dstaddr.s_addr = VAR_2;
  }
  VAR_11.ia_addr = VAR_8->ia_addr.sin_addr;
  VAR_11.ia_net = VAR_8->ia_net;
  VAR_11.ia_netmask = VAR_8->ia_netmask;
  VAR_11.ia_subnet = VAR_8->ia_subnet;
  VAR_11.ia_subnetmask = VAR_8->ia_subnetmask;
  VAR_11.ia_netbroadcast = VAR_8->ia_netbroadcast;
  FUNC_1(&VAR_8->ia_ifa);
  (void) FUNC_7(&VAR_11.link_data.if_name[0],
      VAR_7->if_name, VAR_1);
  VAR_11.link_data.if_family = VAR_7->if_family;
  VAR_11.link_data.if_unit = (u_int32_t)VAR_7->if_unit;

  VAR_12.dv[0].data_ptr = &VAR_11;
  VAR_12.dv[0].data_length = sizeof (struct kev_in_data);
  VAR_12.dv[1].data_length = 0;

  FUNC_5(VAR_7, &VAR_12);
  break;
 }

 default:
  FUNC_2(0);

 }

 return (VAR_14);
}
