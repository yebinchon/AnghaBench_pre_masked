
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int dummy; } ;
struct ath9k_tx_queue_info {int tqi_cwmin; int tqi_readyTime; int tqi_burstTime; int tqi_cwmax; int tqi_aifs; } ;
struct ath9k_htc_priv {struct ath_hw* ah; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*,int,struct ath9k_tx_queue_info*) ;
 int FUNC_2 (struct ath_hw*,int) ;
 int FUNC_3 (struct ath_hw*,int,struct ath9k_tx_queue_info*) ;
 int FUNC_4 (int ,char*,int) ;

int FUNC_5(struct ath9k_htc_priv *VAR_1, int VAR_2,
         struct ath9k_tx_queue_info *VAR_3)
{
 struct ath_hw *VAR_4 = VAR_1->ah;
 int VAR_5 = 0;
 struct ath9k_tx_queue_info VAR_6;

 FUNC_1(VAR_4, VAR_2, &VAR_6);

 VAR_6.tqi_aifs = VAR_3->tqi_aifs;
 VAR_6.tqi_cwmin = VAR_3->tqi_cwmin / 2;
 VAR_6.tqi_cwmax = VAR_3->tqi_cwmax;
 VAR_6.tqi_burstTime = VAR_3->tqi_burstTime;
 VAR_6.tqi_readyTime = VAR_3->tqi_readyTime;

 if (!FUNC_3(VAR_4, VAR_2, &VAR_6)) {
  FUNC_4(FUNC_0(VAR_4),
   "Unable to update hardware queue %u!\n", VAR_2);
  VAR_5 = -VAR_0;
 } else {
  FUNC_2(VAR_4, VAR_2);
 }

 return VAR_5;
}
