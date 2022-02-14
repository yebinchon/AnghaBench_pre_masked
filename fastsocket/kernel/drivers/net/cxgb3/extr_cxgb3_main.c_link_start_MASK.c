
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mac_addr; } ;
struct cmac {int dummy; } ;
struct port_info {int link_config; int phy; TYPE_1__ iscsic; struct cmac mac; } ;
struct net_device {int dev_addr; int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct port_info* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,struct cmac*,int *) ;
 int FUNC_2 (struct cmac*,int) ;
 int FUNC_3 (struct cmac*) ;
 int FUNC_4 (struct cmac*,int ,int ) ;
 int FUNC_5 (struct cmac*,int ) ;
 int FUNC_6 (struct cmac*,int ) ;
 int FUNC_7 (struct cmac*,struct net_device*) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_5)
{
 struct port_info *VAR_6 = FUNC_0(VAR_5);
 struct cmac *VAR_7 = &VAR_6->mac;

 FUNC_3(VAR_7);
 FUNC_6(VAR_7, VAR_3);
 FUNC_5(VAR_7, VAR_5->mtu);
 FUNC_4(VAR_7, VAR_0, VAR_5->dev_addr);
 FUNC_4(VAR_7, VAR_4, VAR_6->iscsic.mac_addr);
 FUNC_7(VAR_7, VAR_5);
 FUNC_1(&VAR_6->phy, VAR_7, &VAR_6->link_config);
 FUNC_2(VAR_7, VAR_1 | VAR_2);
}
