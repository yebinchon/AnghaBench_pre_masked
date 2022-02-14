
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8139_private {int lock; int mmio_addr; } ;
struct net_device {int dummy; } ;
struct ethtool_regs {int len; int version; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,int ) ;
 struct rtl8139_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2, struct ethtool_regs *VAR_3, void *VAR_4)
{
 struct rtl8139_private *VAR_5;


 if (VAR_1)
  return;
 VAR_5 = FUNC_1(VAR_2);

 VAR_3->version = VAR_0;

 FUNC_2(&VAR_5->lock);
 FUNC_0(VAR_4, VAR_5->mmio_addr, VAR_3->len);
 FUNC_3(&VAR_5->lock);
}
