
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_queue {int index; } ;
struct mv643xx_eth_private {int dummy; } ;


 int VAR_0 ;
 struct mv643xx_eth_private* FUNC_0 (struct tx_queue*) ;
 int FUNC_1 (struct mv643xx_eth_private*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct tx_queue *VAR_1)
{
 struct mv643xx_eth_private *VAR_2 = FUNC_0(VAR_1);
 FUNC_1(VAR_2, VAR_0, 1 << VAR_1->index);
}
