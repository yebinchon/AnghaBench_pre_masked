
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int mac_addr; } ;
struct port_info {unsigned int iscsi_ipv4addr; TYPE_1__ iscsic; } ;
struct net_device {int dev_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct net_device*) ;

__attribute__((used)) static inline void FUNC_2(struct net_device *VAR_1,
      unsigned int VAR_2)
{
 struct port_info *VAR_3 = (struct port_info *)FUNC_1(VAR_1);

 VAR_3->iscsic.flags = VAR_2 ? 1 : 0;
 VAR_3->iscsi_ipv4addr = VAR_2;
 if (VAR_2)
  FUNC_0(VAR_3->iscsic.mac_addr, VAR_1->dev_addr, VAR_0);
}
