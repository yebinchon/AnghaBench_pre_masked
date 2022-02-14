
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usbnet {scalar_t__* data; } ;
struct smsc95xx_priv {int use_tx_csum; } ;
struct net_device {int dummy; } ;


 struct usbnet* FUNC_0 (struct net_device*) ;

__attribute__((used)) static u32 FUNC_1(struct net_device *VAR_0)
{
 struct usbnet *VAR_1 = FUNC_0(VAR_0);
 struct smsc95xx_priv *VAR_2 = (struct smsc95xx_priv *)(VAR_1->data[0]);

 return VAR_2->use_tx_csum;
}
