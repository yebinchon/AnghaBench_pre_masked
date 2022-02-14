
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rx_ring {scalar_t__ cnsmr_idx; scalar_t__ cq_len; scalar_t__ cq_base; scalar_t__ curr_entry; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct rx_ring *VAR_0)
{
 VAR_0->cnsmr_idx++;
 VAR_0->curr_entry++;
 if (FUNC_0(VAR_0->cnsmr_idx == VAR_0->cq_len)) {
  VAR_0->cnsmr_idx = 0;
  VAR_0->curr_entry = VAR_0->cq_base;
 }
}
