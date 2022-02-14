
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dev_addr; } ;
struct mv643xx_eth_private {int port_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct mv643xx_eth_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct mv643xx_eth_private*,int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct mv643xx_eth_private*,int ) ;
 int FUNC_5 (struct mv643xx_eth_private*,int,int) ;
 int FUNC_6 (struct mv643xx_eth_private*,int ,int) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_2)
{
 struct mv643xx_eth_private *VAR_3 = FUNC_1(VAR_2);
 u32 VAR_4;
 u32 VAR_5;
 int VAR_6;

 FUNC_4(VAR_3, VAR_2->dev_addr);

 VAR_4 = FUNC_2(VAR_3, VAR_0) & ~VAR_1;

 VAR_5 = FUNC_3(VAR_2);
 if (!VAR_5) {
  VAR_4 |= VAR_1;
  VAR_5 = 0xffff;
 }

 for (VAR_6 = 0; VAR_6 < 16; VAR_6 += 4) {
  int VAR_7 = FUNC_0(VAR_3->port_num) + VAR_6;
  u32 VAR_8;

  VAR_8 = 0;
  if (VAR_5 & 1)
   VAR_8 |= 0x00000001;
  if (VAR_5 & 2)
   VAR_8 |= 0x00000100;
  if (VAR_5 & 4)
   VAR_8 |= 0x00010000;
  if (VAR_5 & 8)
   VAR_8 |= 0x01000000;
  VAR_5 >>= 4;

  FUNC_5(VAR_3, VAR_7, VAR_8);
 }

 FUNC_6(VAR_3, VAR_0, VAR_4);
}
