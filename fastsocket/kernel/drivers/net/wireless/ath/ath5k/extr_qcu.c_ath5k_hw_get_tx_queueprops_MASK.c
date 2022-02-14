
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath5k_txq_info {int dummy; } ;
struct ath5k_hw {int * ah_txq; } ;


 int FUNC_0 (struct ath5k_txq_info*,int *,int) ;

int
FUNC_1(struct ath5k_hw *VAR_0, int VAR_1,
  struct ath5k_txq_info *VAR_2)
{
 FUNC_0(VAR_2, &VAR_0->ah_txq[VAR_1], sizeof(struct ath5k_txq_info));
 return 0;
}
