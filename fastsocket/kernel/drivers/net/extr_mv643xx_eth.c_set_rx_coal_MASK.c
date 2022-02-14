
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct mv643xx_eth_private {TYPE_1__* shared; } ;
struct TYPE_2__ {int t_clk; scalar_t__ extended_rx_coal_limit; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct mv643xx_eth_private*,int ) ;
 int FUNC_2 (struct mv643xx_eth_private*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct mv643xx_eth_private *VAR_1, unsigned int VAR_2)
{
 u64 VAR_3;
 u32 VAR_4;

 VAR_3 = (u64)VAR_2 * VAR_1->shared->t_clk;
 VAR_3 += 31999999;
 FUNC_0(VAR_3, 64000000);

 VAR_4 = FUNC_1(VAR_1, VAR_0);
 if (VAR_1->shared->extended_rx_coal_limit) {
  if (VAR_3 > 0xffff)
   VAR_3 = 0xffff;
  VAR_4 &= ~0x023fff80;
  VAR_4 |= (VAR_3 & 0x8000) << 10;
  VAR_4 |= (VAR_3 & 0x7fff) << 7;
 } else {
  if (VAR_3 > 0x3fff)
   VAR_3 = 0x3fff;
  VAR_4 &= ~0x003fff00;
  VAR_4 |= (VAR_3 & 0x3fff) << 8;
 }
 FUNC_2(VAR_1, VAR_0, VAR_4);
}
