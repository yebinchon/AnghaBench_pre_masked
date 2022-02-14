
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sge_txq {size_t size; unsigned int cntxt_id; int db_lock; int * desc; void* stat; scalar_t__ restarts; scalar_t__ stops; scalar_t__ pidx; scalar_t__ cidx; scalar_t__ in_use; } ;
struct TYPE_2__ {unsigned int egr_start; struct sge_txq** egr_map; } ;
struct adapter {TYPE_1__ sge; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct adapter *VAR_0, struct sge_txq *VAR_1, unsigned int VAR_2)
{
 VAR_1->in_use = 0;
 VAR_1->cidx = VAR_1->pidx = 0;
 VAR_1->stops = VAR_1->restarts = 0;
 VAR_1->stat = (void *)&VAR_1->desc[VAR_1->size];
 VAR_1->cntxt_id = VAR_2;
 FUNC_0(&VAR_1->db_lock);
 VAR_0->sge.egr_map[VAR_2 - VAR_0->sge.egr_start] = VAR_1;
}
