
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; } ;
struct TYPE_4__ {int* eth_regs; int wolopts; } ;
typedef TYPE_1__ pegasus_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_0 (struct net_device*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_5, struct ethtool_wolinfo *VAR_6)
{
 pegasus_t *VAR_7 = FUNC_0(VAR_5);
 u8 VAR_8 = 0x04;

 if (VAR_6->wolopts & ~VAR_3)
  return -VAR_0;

 if (VAR_6->wolopts & VAR_1)
  VAR_8 |= 0x80;
 if (VAR_6->wolopts & VAR_2)
  VAR_8 |= 0x40;

 if (VAR_6->wolopts)
  VAR_7->eth_regs[0] |= 0x10;
 else
  VAR_7->eth_regs[0] &= ~0x10;
 VAR_7->wolopts = VAR_6->wolopts;
 return FUNC_1(VAR_7, VAR_4, VAR_8);
}
