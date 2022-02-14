
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tx_queue {int index; } ;
struct mv643xx_eth_private {TYPE_1__* shared; } ;
struct TYPE_2__ {int t_clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct mv643xx_eth_private* FUNC_2 (struct tx_queue*) ;
 int FUNC_3 (struct mv643xx_eth_private*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct tx_queue *VAR_0, int VAR_1, int VAR_2)
{
 struct mv643xx_eth_private *VAR_3 = FUNC_2(VAR_0);
 int VAR_4;
 int VAR_5;

 VAR_4 = ((VAR_1 / 1000) * 64) / (VAR_3->shared->t_clk / 1000);
 if (VAR_4 > 1023)
  VAR_4 = 1023;

 VAR_5 = (VAR_2 + 255) >> 8;
 if (VAR_5 > 65535)
  VAR_5 = 65535;

 FUNC_3(VAR_3, FUNC_1(VAR_0->index), VAR_4 << 14);
 FUNC_3(VAR_3, FUNC_0(VAR_0->index), (VAR_5 << 10) | VAR_4);
}
