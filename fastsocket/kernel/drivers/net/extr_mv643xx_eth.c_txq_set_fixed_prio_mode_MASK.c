
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tx_queue {int index; } ;
struct mv643xx_eth_private {TYPE_1__* shared; } ;
struct TYPE_2__ {int tx_bw_control; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct mv643xx_eth_private*,int) ;
 struct mv643xx_eth_private* FUNC_1 (struct tx_queue*) ;
 int FUNC_2 (struct mv643xx_eth_private*,int,int) ;

__attribute__((used)) static void FUNC_3(struct tx_queue *VAR_2)
{
 struct mv643xx_eth_private *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;
 u32 VAR_5;




 VAR_4 = 0;
 switch (VAR_3->shared->tx_bw_control) {
 case 128:
  VAR_4 = VAR_0;
  break;
 case 129:
  VAR_4 = VAR_1;
  break;
 }

 if (VAR_4) {
  VAR_5 = FUNC_0(VAR_3, VAR_4);
  VAR_5 |= 1 << VAR_2->index;
  FUNC_2(VAR_3, VAR_4, VAR_5);
 }
}
