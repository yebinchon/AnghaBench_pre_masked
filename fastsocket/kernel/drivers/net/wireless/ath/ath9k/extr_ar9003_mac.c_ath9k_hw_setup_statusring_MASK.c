
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
typedef int u16 ;
struct ath_hw {int ts_size; struct ar9003_txs* ts_ring; void* ts_paddr_end; void* ts_paddr_start; } ;
struct ar9003_txs {int dummy; } ;


 int FUNC_0 (struct ath_hw*) ;

void FUNC_1(struct ath_hw *VAR_0, void *VAR_1,
          u32 VAR_2,
          u16 VAR_3)
{

 VAR_0->ts_paddr_start = VAR_2;
 VAR_0->ts_paddr_end = VAR_2 + (VAR_3 * sizeof(struct ar9003_txs));
 VAR_0->ts_size = VAR_3;
 VAR_0->ts_ring = (struct ar9003_txs *) VAR_1;

 FUNC_0(VAR_0);
}
