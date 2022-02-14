
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath5k_txq_info {int tqi_subtype; int tqi_flags; int tqi_cw_max; int tqi_cw_min; int tqi_aifs; } ;
struct ath5k_txq {int setup; int qnum; int txq_poll_mark; scalar_t__ txq_stuck; int txq_max; scalar_t__ txq_len; int lock; int q; int * link; } ;
struct ath5k_hw {struct ath5k_txq* txqs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ath5k_txq* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ath5k_hw*,int,struct ath5k_txq_info*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct ath5k_txq *
FUNC_4(struct ath5k_hw *VAR_6,
  int VAR_7, int VAR_8)
{
 struct ath5k_txq *VAR_9;
 struct ath5k_txq_info VAR_10 = {
  .tqi_subtype = VAR_8,


  .tqi_aifs = VAR_0,
  .tqi_cw_min = VAR_2,
  .tqi_cw_max = VAR_1
 };
 int VAR_11;
 VAR_10.tqi_flags = VAR_4 |
    VAR_3;
 VAR_11 = FUNC_2(VAR_6, VAR_7, &VAR_10);
 if (VAR_11 < 0) {




  return FUNC_0(VAR_11);
 }
 VAR_9 = &VAR_6->txqs[VAR_11];
 if (!VAR_9->setup) {
  VAR_9->qnum = VAR_11;
  VAR_9->link = ((void*)0);
  FUNC_1(&VAR_9->q);
  FUNC_3(&VAR_9->lock);
  VAR_9->setup = 1;
  VAR_9->txq_len = 0;
  VAR_9->txq_max = VAR_5;
  VAR_9->txq_poll_mark = 0;
  VAR_9->txq_stuck = 0;
 }
 return &VAR_6->txqs[VAR_11];
}
