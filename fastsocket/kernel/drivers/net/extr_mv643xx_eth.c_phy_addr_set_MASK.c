
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mv643xx_eth_private {int port_num; } ;


 int VAR_0 ;
 int FUNC_0 (struct mv643xx_eth_private*,int ) ;
 int FUNC_1 (struct mv643xx_eth_private*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct mv643xx_eth_private *VAR_1, int VAR_2)
{
 int VAR_3 = 5 * VAR_1->port_num;
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_0);
 VAR_4 &= ~(0x1f << VAR_3);
 VAR_4 |= (VAR_2 & 0x1f) << VAR_3;
 FUNC_1(VAR_1, VAR_0, VAR_4);
}
