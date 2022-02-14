
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rx_ring {size_t sbq_curr_idx; size_t sbq_len; int sbq_free_cnt; struct bq_desc* sbq; } ;
struct bq_desc {int dummy; } ;



__attribute__((used)) static struct bq_desc *FUNC_0(struct rx_ring *VAR_0)
{
 struct bq_desc *VAR_1 = &VAR_0->sbq[VAR_0->sbq_curr_idx];
 VAR_0->sbq_curr_idx++;
 if (VAR_0->sbq_curr_idx == VAR_0->sbq_len)
  VAR_0->sbq_curr_idx = 0;
 VAR_0->sbq_free_cnt++;
 return VAR_1;
}
