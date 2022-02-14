
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int dummy; } ;
struct ifla_vf_info {int vf; int vlan; int qos; scalar_t__ tx_rate; int mac; } ;
struct TYPE_2__ {int tci; int mac_addr; } ;
struct efx_vf {TYPE_1__ addr; } ;
struct efx_nic {int vf_init_count; struct efx_vf* vf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 struct efx_nic* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct net_device *VAR_4, int VAR_5,
       struct ifla_vf_info *VAR_6)
{
 struct efx_nic *VAR_7 = FUNC_1(VAR_4);
 struct efx_vf *VAR_8;
 u16 VAR_9;

 if (VAR_5 >= VAR_7->vf_init_count)
  return -VAR_0;
 VAR_8 = VAR_7->vf + VAR_5;

 VAR_6->vf = VAR_5;
 FUNC_0(VAR_6->mac, VAR_8->addr.mac_addr, VAR_1);
 VAR_6->tx_rate = 0;
 VAR_9 = FUNC_2(VAR_8->addr.tci);
 VAR_6->vlan = VAR_9 & VAR_3;
 VAR_6->qos = (VAR_9 >> VAR_2) & 0x7;

 return 0;
}
