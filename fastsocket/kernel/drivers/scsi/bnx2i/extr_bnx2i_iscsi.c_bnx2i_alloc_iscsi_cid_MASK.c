
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int cid_q_cons_idx; int cid_q_max_idx; int* cid_que; int cid_free_cnt; } ;
struct bnx2i_hba {TYPE_1__ cid_que; } ;



__attribute__((used)) static u32 FUNC_0(struct bnx2i_hba *VAR_0)
{
 int VAR_1;

 if (!VAR_0->cid_que.cid_free_cnt)
  return -1;

 VAR_1 = VAR_0->cid_que.cid_q_cons_idx;
 VAR_0->cid_que.cid_q_cons_idx++;
 if (VAR_0->cid_que.cid_q_cons_idx == VAR_0->cid_que.cid_q_max_idx)
  VAR_0->cid_que.cid_q_cons_idx = 0;

 VAR_0->cid_que.cid_free_cnt--;
 return VAR_0->cid_que.cid_que[VAR_1];
}
