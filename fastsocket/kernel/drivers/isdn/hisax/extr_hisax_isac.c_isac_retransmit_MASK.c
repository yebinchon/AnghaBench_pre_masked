
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isac {scalar_t__ tx_cnt; int tx_skb; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct isac *VAR_1)
{
 if (!VAR_1->tx_skb) {
  FUNC_0(VAR_0, "no skb");
  return;
 }
 FUNC_1(VAR_1->tx_skb, VAR_1->tx_cnt);
 VAR_1->tx_cnt = 0;
}
