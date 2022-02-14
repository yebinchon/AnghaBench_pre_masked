
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int txurn_interrupt_mask; int imrs2_reg; int txeol_interrupt_mask; int txerr_interrupt_mask; int txdesc_interrupt_mask; int txok_interrupt_mask; } ;
struct ath9k_tx_queue_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ath_hw*) ;
 int VAR_8 ;
 int FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*,int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (int ,int ,char*,int ,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_6(struct ath_hw *VAR_9,
     struct ath9k_tx_queue_info *VAR_10)
{
 FUNC_5(FUNC_4(VAR_9), VAR_8,
  "tx ok 0x%x err 0x%x desc 0x%x eol 0x%x urn 0x%x\n",
  VAR_9->txok_interrupt_mask, VAR_9->txerr_interrupt_mask,
  VAR_9->txdesc_interrupt_mask, VAR_9->txeol_interrupt_mask,
  VAR_9->txurn_interrupt_mask);

 FUNC_0(VAR_9);

 FUNC_2(VAR_9, VAR_0,
    FUNC_3(VAR_9->txok_interrupt_mask, VAR_2)
    | FUNC_3(VAR_9->txdesc_interrupt_mask, VAR_1));
 FUNC_2(VAR_9, VAR_3,
    FUNC_3(VAR_9->txerr_interrupt_mask, VAR_5)
    | FUNC_3(VAR_9->txeol_interrupt_mask, VAR_4));

 VAR_9->imrs2_reg &= ~VAR_7;
 VAR_9->imrs2_reg |= (VAR_9->txurn_interrupt_mask & VAR_7);
 FUNC_2(VAR_9, VAR_6, VAR_9->imrs2_reg);

 FUNC_1(VAR_9);
}
