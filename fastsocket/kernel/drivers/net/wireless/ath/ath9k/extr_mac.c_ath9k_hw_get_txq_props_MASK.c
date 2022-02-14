
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {struct ath9k_tx_queue_info* txq; } ;
struct ath_common {int dummy; } ;
struct ath9k_tx_queue_info {scalar_t__ tqi_type; int tqi_readyTime; int tqi_burstTime; int tqi_cbrOverflowLimit; int tqi_cbrPeriod; int tqi_lgretry; int tqi_shretry; int tqi_cwmax; int tqi_cwmin; int tqi_aifs; int tqi_priority; int tqi_qflags; int tqi_subtype; int tqi_ver; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct ath_common* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_common*,int ,char*,int) ;

bool FUNC_2(struct ath_hw *VAR_2, int VAR_3,
       struct ath9k_tx_queue_info *VAR_4)
{
 struct ath_common *VAR_5 = FUNC_0(VAR_2);
 struct ath9k_tx_queue_info *VAR_6;

 VAR_6 = &VAR_2->txq[VAR_3];
 if (VAR_6->tqi_type == VAR_0) {
  FUNC_1(VAR_5, VAR_1,
   "Get TXQ properties, inactive queue: %u\n", VAR_3);
  return 0;
 }

 VAR_4->tqi_qflags = VAR_6->tqi_qflags;
 VAR_4->tqi_ver = VAR_6->tqi_ver;
 VAR_4->tqi_subtype = VAR_6->tqi_subtype;
 VAR_4->tqi_qflags = VAR_6->tqi_qflags;
 VAR_4->tqi_priority = VAR_6->tqi_priority;
 VAR_4->tqi_aifs = VAR_6->tqi_aifs;
 VAR_4->tqi_cwmin = VAR_6->tqi_cwmin;
 VAR_4->tqi_cwmax = VAR_6->tqi_cwmax;
 VAR_4->tqi_shretry = VAR_6->tqi_shretry;
 VAR_4->tqi_lgretry = VAR_6->tqi_lgretry;
 VAR_4->tqi_cbrPeriod = VAR_6->tqi_cbrPeriod;
 VAR_4->tqi_cbrOverflowLimit = VAR_6->tqi_cbrOverflowLimit;
 VAR_4->tqi_burstTime = VAR_6->tqi_burstTime;
 VAR_4->tqi_readyTime = VAR_6->tqi_readyTime;

 return 1;
}
