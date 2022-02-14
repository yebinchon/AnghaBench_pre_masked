
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cfq_queue {int slice_resid; int slice_end; TYPE_3__* cfqg; int sort_list; } ;
struct TYPE_4__ {int * active; } ;
struct cfq_data {TYPE_2__* active_cic; TYPE_1__ grp_service_tree; struct cfq_queue* active_queue; } ;
struct TYPE_6__ {int rb_node; } ;
struct TYPE_5__ {int ioc; } ;


 scalar_t__ FUNC_0 (struct cfq_queue*) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct cfq_queue*) ;
 scalar_t__ FUNC_3 (struct cfq_queue*) ;
 int FUNC_4 (struct cfq_queue*) ;
 scalar_t__ FUNC_5 (struct cfq_queue*) ;
 int FUNC_6 (struct cfq_queue*) ;
 int FUNC_7 (struct cfq_queue*) ;
 int FUNC_8 (struct cfq_data*,struct cfq_queue*) ;
 int FUNC_9 (struct cfq_data*,struct cfq_queue*) ;
 int FUNC_10 (struct cfq_data*,TYPE_3__*,struct cfq_queue*) ;
 int FUNC_11 (struct cfq_data*,struct cfq_queue*,char*,int) ;
 int FUNC_12 (struct cfq_queue*) ;
 int FUNC_13 (struct cfq_data*,struct cfq_queue*) ;
 int VAR_0 ;
 int FUNC_14 (int ) ;

__attribute__((used)) static void
FUNC_15(struct cfq_data *VAR_1, struct cfq_queue *VAR_2,
      bool VAR_3)
{
 FUNC_11(VAR_1, VAR_2, "slice expired t=%d", VAR_3);

 if (FUNC_5(VAR_2))
  FUNC_9(VAR_1, VAR_2);

 FUNC_7(VAR_2);
 FUNC_6(VAR_2);







 if (FUNC_2(VAR_2) && FUNC_0(VAR_2))
  FUNC_12(VAR_2);




 if (VAR_3 && !FUNC_4(VAR_2)) {
  VAR_2->slice_resid = VAR_2->slice_end - VAR_0;
  FUNC_11(VAR_1, VAR_2, "resid=%ld", VAR_2->slice_resid);
 }

 FUNC_10(VAR_1, VAR_2->cfqg, VAR_2);

 if (FUNC_3(VAR_2) && FUNC_1(&VAR_2->sort_list))
  FUNC_8(VAR_1, VAR_2);

 FUNC_13(VAR_1, VAR_2);

 if (VAR_2 == VAR_1->active_queue)
  VAR_1->active_queue = ((void*)0);

 if (&VAR_2->cfqg->rb_node == VAR_1->grp_service_tree.active)
  VAR_1->grp_service_tree.active = ((void*)0);

 if (VAR_1->active_cic) {
  FUNC_14(VAR_1->active_cic->ioc);
  VAR_1->active_cic = ((void*)0);
 }
}
