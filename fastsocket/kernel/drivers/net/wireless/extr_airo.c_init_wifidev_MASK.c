
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct net_device {int addr_len; int dev_addr; TYPE_1__ dev; int wireless_data; int base_addr; int irq; int ml_priv; } ;
struct airo_info {int dummy; } ;


 int FUNC_0 (struct net_device*,int ) ;
 struct net_device* FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct net_device*) ;
 int VAR_0 ;

__attribute__((used)) static struct net_device *FUNC_5(struct airo_info *VAR_1,
     struct net_device *VAR_2)
{
 int VAR_3;
 struct net_device *VAR_4 = FUNC_1(0, "wifi%d", VAR_0);
 if (!VAR_4)
  return ((void*)0);
 VAR_4->ml_priv = VAR_2->ml_priv;
 VAR_4->irq = VAR_2->irq;
 VAR_4->base_addr = VAR_2->base_addr;
 VAR_4->wireless_data = VAR_2->wireless_data;
 FUNC_0(VAR_4, VAR_2->dev.parent);
 FUNC_3(VAR_4->dev_addr, VAR_2->dev_addr, VAR_4->addr_len);
 VAR_3 = FUNC_4(VAR_4);
 if (VAR_3<0) {
  FUNC_2(VAR_4);
  return ((void*)0);
 }
 return VAR_4;
}
