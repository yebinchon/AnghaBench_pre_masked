
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct port_info {int xact_addr_filt; int viid; TYPE_1__* adapter; int link_cfg; int tx_chan; int * vlan_grp; } ;
struct net_device {int dev_addr; int mtu; } ;
struct TYPE_5__ {unsigned int fn; } ;


 struct port_info* FUNC_0 (struct net_device*) ;
 int FUNC_1 (TYPE_1__*,unsigned int,int ,int,int ,int,int) ;
 int FUNC_2 (TYPE_1__*,unsigned int,int ,int,int) ;
 int FUNC_3 (TYPE_1__*,unsigned int,int ,int *) ;
 int FUNC_4 (TYPE_1__*,unsigned int,int ,int ,int,int,int,int ,int) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_0)
{
 int VAR_1;
 struct port_info *VAR_2 = FUNC_0(VAR_0);
 unsigned int VAR_3 = VAR_2->adapter->fn;





 VAR_1 = FUNC_4(VAR_2->adapter, VAR_3, VAR_2->viid, VAR_0->mtu, -1, -1, -1,
       VAR_2->vlan_grp != ((void*)0), 1);
 if (VAR_1 == 0) {
  VAR_1 = FUNC_1(VAR_2->adapter, VAR_3, VAR_2->viid,
        VAR_2->xact_addr_filt, VAR_0->dev_addr, 1,
        1);
  if (VAR_1 >= 0) {
   VAR_2->xact_addr_filt = VAR_1;
   VAR_1 = 0;
  }
 }
 if (VAR_1 == 0)
  VAR_1 = FUNC_3(VAR_2->adapter, VAR_3, VAR_2->tx_chan,
        &VAR_2->link_cfg);
 if (VAR_1 == 0)
  VAR_1 = FUNC_2(VAR_2->adapter, VAR_3, VAR_2->viid, 1, 1);
 return VAR_1;
}
