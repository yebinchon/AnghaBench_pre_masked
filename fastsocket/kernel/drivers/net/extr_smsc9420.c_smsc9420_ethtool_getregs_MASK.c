
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct smsc9420_pdata {struct phy_device* phy_dev; } ;
struct phy_device {int addr; int bus; } ;
struct net_device {int dummy; } ;
struct ethtool_regs {void* version; } ;


 unsigned int VAR_0 ;
 struct smsc9420_pdata* FUNC_0 (struct net_device*) ;
 void* FUNC_1 (int ,int ,unsigned int) ;
 void* FUNC_2 (struct smsc9420_pdata*,unsigned int) ;

__attribute__((used)) static void
FUNC_3(struct net_device *VAR_1, struct ethtool_regs *VAR_2,
    void *VAR_3)
{
 struct smsc9420_pdata *VAR_4 = FUNC_0(VAR_1);
 struct phy_device *VAR_5 = VAR_4->phy_dev;
 unsigned int VAR_6, VAR_7 = 0;
 u32 *VAR_8 = VAR_3;

 VAR_2->version = FUNC_2(VAR_4, VAR_0);
 for (VAR_6 = 0; VAR_6 < 0x100; VAR_6 += (sizeof(u32)))
  VAR_8[VAR_7++] = FUNC_2(VAR_4, VAR_6);


 if (!VAR_5)
  return;

 for (VAR_6 = 0; VAR_6 <= 31; VAR_6++)
  VAR_8[VAR_7++] = FUNC_1(VAR_5->bus, VAR_5->addr, VAR_6);
}
