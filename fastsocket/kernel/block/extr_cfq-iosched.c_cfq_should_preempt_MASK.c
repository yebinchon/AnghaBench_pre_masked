
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int cmd_flags; } ;
struct cfq_queue {scalar_t__ cfqg; int meta_pending; int sort_list; TYPE_1__* service_tree; } ;
struct cfq_data {scalar_t__ serving_type; int active_cic; struct cfq_queue* active_queue; } ;
struct TYPE_2__ {int count; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct cfq_queue*) ;
 int FUNC_2 (struct cfq_queue*) ;
 scalar_t__ FUNC_3 (struct cfq_queue*) ;
 scalar_t__ FUNC_4 (struct cfq_queue*) ;
 scalar_t__ FUNC_5 (struct cfq_data*,struct cfq_queue*,struct request*) ;
 scalar_t__ FUNC_6 (struct cfq_queue*) ;
 scalar_t__ FUNC_7 (struct cfq_queue*) ;
 scalar_t__ FUNC_8 (struct request*) ;

__attribute__((used)) static bool
FUNC_9(struct cfq_data *VAR_2, struct cfq_queue *VAR_3,
     struct request *VAR_4)
{
 struct cfq_queue *VAR_5;

 VAR_5 = VAR_2->active_queue;
 if (!VAR_5)
  return 0;

 if (FUNC_3(VAR_3))
  return 0;

 if (FUNC_3(VAR_5))
  return 1;





 if (FUNC_8(VAR_4) && !FUNC_1(VAR_5))
  return 1;

 if (VAR_3->cfqg != VAR_5->cfqg)
  return 0;

 if (FUNC_6(VAR_5))
  return 1;


 if (VAR_2->serving_type == VAR_1 &&
     FUNC_7(VAR_3) == VAR_1 &&
     VAR_3->service_tree->count == 2 &&
     FUNC_0(&VAR_5->sort_list))
  return 1;





 if ((VAR_4->cmd_flags & VAR_0) && !VAR_5->meta_pending)
  return 1;




 if (FUNC_4(VAR_3) && !FUNC_4(VAR_5))
  return 1;

 if (!VAR_2->active_cic || !FUNC_2(VAR_5))
  return 0;





 if (FUNC_5(VAR_2, VAR_5, VAR_4))
  return 1;

 return 0;
}
