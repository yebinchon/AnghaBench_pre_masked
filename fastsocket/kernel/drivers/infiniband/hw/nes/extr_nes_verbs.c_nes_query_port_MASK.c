
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int mtu; } ;
struct nes_vnic {scalar_t__ linkup; struct net_device* netdev; } ;
struct ib_port_attr {int lid; int port_cap_flags; int gid_tbl_len; int pkey_tbl_len; int max_msg_sz; int active_speed; int active_width; scalar_t__ qkey_viol_cntr; scalar_t__ phys_state; void* state; scalar_t__ sm_sl; scalar_t__ sm_lid; scalar_t__ lmc; void* active_mtu; void* max_mtu; } ;
struct ib_device {int dummy; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct ib_port_attr*,int ,int) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 struct nes_vnic* FUNC_2 (struct ib_device*) ;

__attribute__((used)) static int FUNC_3(struct ib_device *VAR_13, u8 VAR_14, struct ib_port_attr *VAR_15)
{
 struct nes_vnic *VAR_16 = FUNC_2(VAR_13);
 struct net_device *VAR_17 = VAR_16->netdev;

 FUNC_0(VAR_15, 0, sizeof(*VAR_15));

 VAR_15->max_mtu = VAR_3;

 if (VAR_17->mtu >= 4096)
  VAR_15->active_mtu = VAR_3;
 else if (VAR_17->mtu >= 2048)
  VAR_15->active_mtu = VAR_1;
 else if (VAR_17->mtu >= 1024)
  VAR_15->active_mtu = VAR_0;
 else if (VAR_17->mtu >= 512)
  VAR_15->active_mtu = VAR_4;
 else
  VAR_15->active_mtu = VAR_2;

 VAR_15->lid = 1;
 VAR_15->lmc = 0;
 VAR_15->sm_lid = 0;
 VAR_15->sm_sl = 0;
 if (FUNC_1(VAR_17))
  VAR_15->state = VAR_8;
 else if (VAR_16->linkup)
  VAR_15->state = VAR_5;
 else
  VAR_15->state = VAR_8;
 VAR_15->phys_state = 0;
 VAR_15->port_cap_flags = VAR_7 | VAR_9 |
   VAR_10 | VAR_6;
 VAR_15->gid_tbl_len = 1;
 VAR_15->pkey_tbl_len = 1;
 VAR_15->qkey_viol_cntr = 0;
 VAR_15->active_width = VAR_12;
 VAR_15->active_speed = VAR_11;
 VAR_15->max_msg_sz = 0x80000000;

 return 0;
}
