
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct tg3_napi {scalar_t__ last_rx_cons; scalar_t__ rx_rcb_ptr; scalar_t__ last_tx_cons; scalar_t__ tx_cons; int chk_msi_cnt; } ;
struct tg3 {size_t irq_cnt; struct tg3_napi* napi; } ;


 scalar_t__ FUNC_0 (struct tg3_napi*) ;
 int FUNC_1 (int ,struct tg3_napi*) ;

__attribute__((used)) static void FUNC_2(struct tg3 *VAR_0)
{
 u32 VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->irq_cnt; VAR_1++) {
  struct tg3_napi *VAR_2 = &VAR_0->napi[VAR_1];

  if (FUNC_0(VAR_2)) {
   if (VAR_2->last_rx_cons == VAR_2->rx_rcb_ptr &&
       VAR_2->last_tx_cons == VAR_2->tx_cons) {
    if (VAR_2->chk_msi_cnt < 1) {
     VAR_2->chk_msi_cnt++;
     return;
    }
    FUNC_1(0, VAR_2);
   }
  }
  VAR_2->chk_msi_cnt = 0;
  VAR_2->last_rx_cons = VAR_2->rx_rcb_ptr;
  VAR_2->last_tx_cons = VAR_2->tx_cons;
 }
}
