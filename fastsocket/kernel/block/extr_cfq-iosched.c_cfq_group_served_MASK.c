
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cfq_rb_root {int min_vdisktime; } ;
struct cfq_queue {unsigned int slice_dispatch; unsigned int allocated_slice; int nr_sectors; int cfqd; } ;
struct TYPE_2__ {int count; } ;
struct cfq_group {int nr_cfqq; int blkg; int vdisktime; scalar_t__ saved_workload_slice; int saved_serving_prio; int saved_workload; TYPE_1__ service_tree_idle; } ;
struct cfq_data {int serving_prio; int serving_type; scalar_t__ workload_expires; struct cfq_rb_root grp_service_tree; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned int) ;
 unsigned int FUNC_3 (struct cfq_queue*) ;
 int FUNC_4 (struct cfq_queue*) ;
 int FUNC_5 (struct cfq_rb_root*,struct cfq_group*) ;
 int FUNC_6 (struct cfq_rb_root*,struct cfq_group*) ;
 int FUNC_7 (struct cfq_data*,struct cfq_group*,char*,int ,int ) ;
 int FUNC_8 (int ,struct cfq_queue*,char*,unsigned int,unsigned int,unsigned int,scalar_t__,int ) ;
 scalar_t__ FUNC_9 (unsigned int,struct cfq_group*) ;
 int FUNC_10 (struct cfq_data*,struct cfq_group*) ;
 scalar_t__ FUNC_11 (struct cfq_data*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_13(struct cfq_data *VAR_1, struct cfq_group *VAR_2,
    struct cfq_queue *VAR_3)
{
 struct cfq_rb_root *VAR_4 = &VAR_1->grp_service_tree;
 unsigned int VAR_5, VAR_6;
 int VAR_7 = VAR_2->nr_cfqq - FUNC_10(VAR_1, VAR_2)
   - VAR_2->service_tree_idle.count;

 FUNC_0(VAR_7 < 0);
 VAR_5 = VAR_6 = FUNC_3(VAR_3);

 if (FUNC_11(VAR_1))
  VAR_6 = VAR_3->slice_dispatch;
 else if (!FUNC_4(VAR_3) && !VAR_7)
  VAR_6 = VAR_3->allocated_slice;


 FUNC_6(VAR_4, VAR_2);
 VAR_2->vdisktime += FUNC_9(VAR_6, VAR_2);

 FUNC_5(VAR_4, VAR_2);


 if (FUNC_12(VAR_1->workload_expires, VAR_0)) {
  VAR_2->saved_workload_slice = VAR_1->workload_expires
      - VAR_0;
  VAR_2->saved_workload = VAR_1->serving_type;
  VAR_2->saved_serving_prio = VAR_1->serving_prio;
 } else
  VAR_2->saved_workload_slice = 0;

 FUNC_7(VAR_1, VAR_2, "served: vt=%llu min_vt=%llu", VAR_2->vdisktime,
     VAR_4->min_vdisktime);
 FUNC_8(VAR_3->cfqd, VAR_3, "sl_used=%u disp=%u charge=%u iops=%u"
   " sect=%u", VAR_5, VAR_3->slice_dispatch, VAR_6,
   FUNC_11(VAR_1), VAR_3->nr_sectors);
 FUNC_2(&VAR_2->blkg, VAR_5);
 FUNC_1(&VAR_2->blkg);
}
