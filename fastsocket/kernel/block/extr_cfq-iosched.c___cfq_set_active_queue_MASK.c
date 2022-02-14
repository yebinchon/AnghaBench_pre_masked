
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cfq_queue {scalar_t__ nr_sectors; scalar_t__ slice_dispatch; scalar_t__ slice_end; scalar_t__ allocated_slice; int dispatch_start; scalar_t__ slice_start; TYPE_1__* cfqg; } ;
struct cfq_data {struct cfq_queue* active_queue; int serving_type; int serving_prio; } ;
struct TYPE_2__ {int blkg; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct cfq_queue*) ;
 int FUNC_2 (struct cfq_queue*) ;
 int FUNC_3 (struct cfq_queue*) ;
 int FUNC_4 (struct cfq_queue*) ;
 int FUNC_5 (struct cfq_data*,struct cfq_queue*) ;
 int FUNC_6 (struct cfq_data*,struct cfq_queue*,char*,int ,int ) ;
 int FUNC_7 (struct cfq_queue*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_8(struct cfq_data *VAR_1,
       struct cfq_queue *VAR_2)
{
 if (VAR_2) {
  FUNC_6(VAR_1, VAR_2, "set_active wl_prio:%d wl_type:%d",
    VAR_1->serving_prio, VAR_1->serving_type);
  FUNC_0(&VAR_2->cfqg->blkg);
  VAR_2->slice_start = 0;
  VAR_2->dispatch_start = VAR_0;
  VAR_2->allocated_slice = 0;
  VAR_2->slice_end = 0;
  VAR_2->slice_dispatch = 0;
  VAR_2->nr_sectors = 0;

  FUNC_4(VAR_2);
  FUNC_3(VAR_2);
  FUNC_2(VAR_2);
  FUNC_1(VAR_2);
  FUNC_7(VAR_2);

  FUNC_5(VAR_1, VAR_2);
 }

 VAR_1->active_queue = VAR_2;
}
