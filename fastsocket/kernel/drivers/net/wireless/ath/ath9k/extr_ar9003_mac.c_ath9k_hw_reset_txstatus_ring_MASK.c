
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int ts_size; int ts_paddr_end; int ts_paddr_start; scalar_t__ ts_ring; scalar_t__ ts_tail; } ;
struct ar9003_txs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath_hw*,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (int ,int ,char*,int ,int ,scalar_t__,int) ;
 int FUNC_3 (void*,int ,int) ;

void FUNC_4(struct ath_hw *VAR_3)
{
 VAR_3->ts_tail = 0;

 FUNC_3((void *) VAR_3->ts_ring, 0,
  VAR_3->ts_size * sizeof(struct ar9003_txs));

 FUNC_2(FUNC_1(VAR_3), VAR_2,
  "TS Start 0x%x End 0x%x Virt %p, Size %d\n",
  VAR_3->ts_paddr_start, VAR_3->ts_paddr_end,
  VAR_3->ts_ring, VAR_3->ts_size);

 FUNC_0(VAR_3, VAR_1, VAR_3->ts_paddr_start);
 FUNC_0(VAR_3, VAR_0, VAR_3->ts_paddr_end);
}
