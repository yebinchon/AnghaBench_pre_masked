
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath5k_hw {int tx_pending; int txtq; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct ath5k_hw *VAR_0)
{
 VAR_0->tx_pending = 1;
 FUNC_0(&VAR_0->txtq);
}
