
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfq_queue {scalar_t__ ref; int* allocated; struct cfq_group* orig_cfqg; struct cfq_group* cfqg; int sort_list; struct cfq_data* cfqd; } ;
struct cfq_group {int dummy; } ;
struct cfq_data {struct cfq_queue* active_queue; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (struct cfq_data*,struct cfq_queue*,int ) ;
 int FUNC_2 (struct cfq_queue*) ;
 int FUNC_3 (struct cfq_data*,struct cfq_queue*,char*) ;
 int VAR_2 ;
 int FUNC_4 (struct cfq_group*) ;
 int FUNC_5 (struct cfq_data*) ;
 int FUNC_6 (int ,struct cfq_queue*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct cfq_queue *VAR_3)
{
 struct cfq_data *VAR_4 = VAR_3->cfqd;
 struct cfq_group *VAR_5, *VAR_6;

 FUNC_0(VAR_3->ref <= 0);

 VAR_3->ref--;
 if (VAR_3->ref)
  return;

 FUNC_3(VAR_4, VAR_3, "put_queue");
 FUNC_0(FUNC_7(&VAR_3->sort_list));
 FUNC_0(VAR_3->allocated[VAR_0] + VAR_3->allocated[VAR_1]);
 VAR_5 = VAR_3->cfqg;
 VAR_6 = VAR_3->orig_cfqg;

 if (FUNC_8(VAR_4->active_queue == VAR_3)) {
  FUNC_1(VAR_4, VAR_3, 0);
  FUNC_5(VAR_4);
 }

 FUNC_0(FUNC_2(VAR_3));
 FUNC_6(VAR_2, VAR_3);
 FUNC_4(VAR_5);
 if (VAR_6)
  FUNC_4(VAR_6);
}
