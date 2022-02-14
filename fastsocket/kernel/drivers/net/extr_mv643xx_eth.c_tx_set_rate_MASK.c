
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mv643xx_eth_private {TYPE_2__* shared; TYPE_1__* dev; } ;
struct TYPE_4__ {int t_clk; int tx_bw_control; } ;
struct TYPE_3__ {int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mv643xx_eth_private*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct mv643xx_eth_private *VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_9 = ((VAR_7 / 1000) * 64) / (VAR_6->shared->t_clk / 1000);
 if (VAR_9 > 1023)
  VAR_9 = 1023;

 VAR_10 = (VAR_6->dev->mtu + 255) >> 8;
 if (VAR_10 > 63)
  VAR_10 = 63;

 VAR_11 = (VAR_8 + 255) >> 8;
 if (VAR_11 > 65535)
  VAR_11 = 65535;

 switch (VAR_6->shared->tx_bw_control) {
 case 128:
  FUNC_0(VAR_6, VAR_4, VAR_9);
  FUNC_0(VAR_6, VAR_2, VAR_10);
  FUNC_0(VAR_6, VAR_0, VAR_11);
  break;
 case 129:
  FUNC_0(VAR_6, VAR_5, VAR_9);
  FUNC_0(VAR_6, VAR_3, VAR_10);
  FUNC_0(VAR_6, VAR_1, VAR_11);
  break;
 }
}
