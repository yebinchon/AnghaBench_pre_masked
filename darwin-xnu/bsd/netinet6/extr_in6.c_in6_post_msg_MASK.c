
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* u_int32_t ;
struct TYPE_5__ {void* if_unit; int if_family; int * if_name; } ;
struct TYPE_4__ {int ia6t_pltime; int ia6t_vltime; int ia6t_preferred; int ia6t_expire; } ;
struct kev_msg {TYPE_3__* dv; int ia_mac; TYPE_2__ link_data; TYPE_1__ ia_lifetime; void* ia6_flags; int ia_plen; int ia_prefixmask; int ia_dstaddr; int ia_net; int ia_addr; void* event_code; int kev_subclass; int kev_class; int vendor_code; } ;
struct kev_in6_data {TYPE_3__* dv; int ia_mac; TYPE_2__ link_data; TYPE_1__ ia_lifetime; void* ia6_flags; int ia_plen; int ia_prefixmask; int ia_dstaddr; int ia_net; int ia_addr; void* event_code; int kev_subclass; int kev_class; int vendor_code; } ;
struct in6_ifaddr {int ia_ifa; scalar_t__ ia6_flags; int ia_plen; int ia_prefixmask; int ia_dstaddr; int ia_net; int ia_addr; } ;
struct in6_addrlifetime {int ia6t_pltime; int ia6t_vltime; int ia6t_preferred; int ia6t_expire; } ;
struct ifnet {scalar_t__ if_unit; int if_family; int if_name; } ;
typedef int in6_event_data ;
struct TYPE_6__ {int data_length; struct kev_msg* data_ptr; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct kev_msg*,int) ;
 int FUNC_3 (int *,struct kev_msg*) ;
 int FUNC_4 (struct in6_ifaddr*,struct in6_addrlifetime*,int) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,int ,int ) ;

void
FUNC_7(struct ifnet *VAR_4, u_int32_t VAR_5, struct in6_ifaddr *VAR_6,
    uint8_t *VAR_7)
{
 struct kev_msg VAR_8;
 struct kev_in6_data VAR_9;
 struct in6_addrlifetime VAR_10;

 FUNC_2(&VAR_9, sizeof (struct kev_in6_data));
 FUNC_2(&VAR_8, sizeof (struct kev_msg));
 VAR_8.vendor_code = VAR_3;
 VAR_8.kev_class = VAR_2;
 VAR_8.kev_subclass = VAR_1;
 VAR_8.event_code = VAR_5;

 if (VAR_6) {
  FUNC_0(&VAR_6->ia_ifa);
  VAR_9.ia_addr = VAR_6->ia_addr;
  VAR_9.ia_net = VAR_6->ia_net;
  VAR_9.ia_dstaddr = VAR_6->ia_dstaddr;
  VAR_9.ia_prefixmask = VAR_6->ia_prefixmask;
  VAR_9.ia_plen = VAR_6->ia_plen;
  VAR_9.ia6_flags = (u_int32_t)VAR_6->ia6_flags;


  FUNC_4(VAR_6, &VAR_10, 1);
  VAR_9.ia_lifetime.ia6t_expire = VAR_10.ia6t_expire;
  VAR_9.ia_lifetime.ia6t_preferred = VAR_10.ia6t_preferred;
  VAR_9.ia_lifetime.ia6t_vltime = VAR_10.ia6t_vltime;
  VAR_9.ia_lifetime.ia6t_pltime = VAR_10.ia6t_pltime;
  FUNC_1(&VAR_6->ia_ifa);
 }

 if (VAR_4 != ((void*)0)) {
  (void) FUNC_6(&VAR_9.link_data.if_name[0],
      VAR_4->if_name, VAR_0);
  VAR_9.link_data.if_family = VAR_4->if_family;
  VAR_9.link_data.if_unit = (u_int32_t)VAR_4->if_unit;
 }

 if (VAR_7 != ((void*)0))
  FUNC_5(&VAR_9.ia_mac, VAR_7,
      sizeof(VAR_9.ia_mac));

 VAR_8.dv[0].data_ptr = &VAR_9;
 VAR_8.dv[0].data_length = sizeof (VAR_9);
 VAR_8.dv[1].data_length = 0;

 FUNC_3(((void*)0), &VAR_8);
}
