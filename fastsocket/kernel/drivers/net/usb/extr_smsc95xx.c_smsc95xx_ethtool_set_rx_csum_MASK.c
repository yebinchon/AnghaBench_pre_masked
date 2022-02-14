
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usbnet {scalar_t__* data; } ;
struct smsc95xx_priv {int use_rx_csum; } ;
struct net_device {int dummy; } ;


 struct usbnet* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct usbnet*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0, u32 VAR_1)
{
 struct usbnet *VAR_2 = FUNC_0(VAR_0);
 struct smsc95xx_priv *VAR_3 = (struct smsc95xx_priv *)(VAR_2->data[0]);

 VAR_3->use_rx_csum = !!VAR_1;

 return FUNC_1(VAR_2);
}
