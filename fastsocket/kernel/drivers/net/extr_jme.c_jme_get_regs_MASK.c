
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct jme_adapter {int dummy; } ;
struct ethtool_regs {int version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct jme_adapter*,int *,int ) ;
 int FUNC_1 (void*,int,int ) ;
 int FUNC_2 (struct jme_adapter*,int *,int ,int ) ;
 struct jme_adapter* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void
FUNC_4(struct net_device *VAR_10, struct ethtool_regs *VAR_11, void *VAR_12)
{
 struct jme_adapter *VAR_13 = FUNC_3(VAR_10);
 u32 *VAR_14 = (u32 *)VAR_12;

 FUNC_1(VAR_12, 0xFF, VAR_7);

 VAR_11->version = 1;
 FUNC_2(VAR_13, VAR_14, VAR_0, VAR_1);

 VAR_14 += 0x100 >> 2;
 FUNC_2(VAR_13, VAR_14, VAR_4, VAR_5);

 VAR_14 += 0x100 >> 2;
 FUNC_2(VAR_13, VAR_14, VAR_2, VAR_3);

 VAR_14 += 0x100 >> 2;
 FUNC_2(VAR_13, VAR_14, VAR_8, VAR_9);

 VAR_14 += 0x100 >> 2;
 FUNC_0(VAR_13, VAR_14, VAR_6);
}
