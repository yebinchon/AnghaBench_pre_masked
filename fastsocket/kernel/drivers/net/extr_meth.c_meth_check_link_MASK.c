
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct meth_private {unsigned long mac_ctrl; } ;
struct TYPE_3__ {unsigned long mac_ctrl; } ;
struct TYPE_4__ {TYPE_1__ eth; } ;


 int FUNC_0 (char*,...) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 TYPE_2__* VAR_2 ;
 unsigned long FUNC_1 (struct meth_private*,int) ;
 struct meth_private* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_3)
{
 struct meth_private *VAR_4 = FUNC_2(VAR_3);
 unsigned long VAR_5 = FUNC_1(VAR_4, 4);
 unsigned long VAR_6 = FUNC_1(VAR_4, 5);
 unsigned long VAR_7 = VAR_5 & VAR_6;
 unsigned long VAR_8, VAR_9;

 if (VAR_6 == 0xffff)
  return;

 VAR_9 = (VAR_7 & 0x0380) ? VAR_0 : 0;
 VAR_8 = ((VAR_7 & 0x0100) || (VAR_7 & 0x01C0) == 0x0040) ?
   VAR_1 : 0;

 if ((VAR_4->mac_ctrl & VAR_1) ^ VAR_8) {
  FUNC_0("Setting %s-duplex\n", VAR_8 ? "full" : "half");
  if (VAR_8)
   VAR_4->mac_ctrl |= VAR_1;
  else
   VAR_4->mac_ctrl &= ~VAR_1;
  VAR_2->eth.mac_ctrl = VAR_4->mac_ctrl;
 }

 if ((VAR_4->mac_ctrl & VAR_0) ^ VAR_9) {
  FUNC_0("Setting %dMbs mode\n", VAR_9 ? 100 : 10);
  if (VAR_8)
   VAR_4->mac_ctrl |= VAR_0;
  else
   VAR_4->mac_ctrl &= ~VAR_0;
  VAR_2->eth.mac_ctrl = VAR_4->mac_ctrl;
 }
}
