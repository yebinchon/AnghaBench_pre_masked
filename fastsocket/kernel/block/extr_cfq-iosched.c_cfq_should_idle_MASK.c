
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfq_rb_root {int count; } ;
struct cfq_queue {struct cfq_rb_root* service_tree; } ;
struct cfq_data {scalar_t__ cfq_slice_idle; scalar_t__ hw_tag; int queue; } ;
typedef enum wl_prio_t { ____Placeholder_wl_prio_t } wl_prio_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct cfq_queue*) ;
 scalar_t__ FUNC_3 (struct cfq_queue*) ;
 int FUNC_4 (struct cfq_data*,struct cfq_queue*,char*,int) ;
 int FUNC_5 (struct cfq_queue*) ;

__attribute__((used)) static bool FUNC_6(struct cfq_data *VAR_1, struct cfq_queue *VAR_2)
{
 enum wl_prio_t VAR_3 = FUNC_5(VAR_2);
 struct cfq_rb_root *VAR_4 = VAR_2->service_tree;

 FUNC_0(!VAR_4);
 FUNC_0(!VAR_4->count);


 if (VAR_3 == VAR_0)
  return 0;


 if (VAR_1->cfq_slice_idle == 0)
  return 0;


 if (FUNC_2(VAR_2) &&
    !(FUNC_1(VAR_1->queue) && VAR_1->hw_tag))
  return 1;





 if (VAR_4->count == 1 && FUNC_3(VAR_2))
  return 1;
 FUNC_4(VAR_1, VAR_2, "Not idling. st->count:%d",
   VAR_4->count);
 return 0;
}
