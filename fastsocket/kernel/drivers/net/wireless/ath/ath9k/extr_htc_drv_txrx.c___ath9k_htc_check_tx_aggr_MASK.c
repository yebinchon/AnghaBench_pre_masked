
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct ath9k_htc_sta {scalar_t__* tid_state; } ;
struct TYPE_2__ {int tx_lock; } ;
struct ath9k_htc_priv {TYPE_1__ tx; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline bool FUNC_2(struct ath9k_htc_priv *VAR_2,
          struct ath9k_htc_sta *VAR_3, u8 VAR_4)
{
 bool VAR_5 = 0;

 FUNC_0(&VAR_2->tx.tx_lock);
 if ((VAR_4 < VAR_1) && (VAR_3->tid_state[VAR_4] == VAR_0))
  VAR_5 = 1;
 FUNC_1(&VAR_2->tx.tx_lock);

 return VAR_5;
}
