
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int io_context; } ;
struct request {int dummy; } ;
struct cfq_queue {int sort_list; } ;
struct cfq_io_context {int dummy; } ;
struct cfq_data {int dummy; } ;
struct bio {scalar_t__ bi_sector; } ;
typedef scalar_t__ sector_t ;


 scalar_t__ FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*) ;
 struct cfq_io_context* FUNC_2 (struct cfq_data*,int ) ;
 struct cfq_queue* FUNC_3 (struct cfq_io_context*,int ) ;
 struct task_struct* VAR_0 ;
 struct request* FUNC_4 (int *,scalar_t__) ;

__attribute__((used)) static struct request *
FUNC_5(struct cfq_data *VAR_1, struct bio *VAR_2)
{
 struct task_struct *VAR_3 = VAR_0;
 struct cfq_io_context *VAR_4;
 struct cfq_queue *VAR_5;

 VAR_4 = FUNC_2(VAR_1, VAR_3->io_context);
 if (!VAR_4)
  return ((void*)0);

 VAR_5 = FUNC_3(VAR_4, FUNC_1(VAR_2));
 if (VAR_5) {
  sector_t VAR_6 = VAR_2->bi_sector + FUNC_0(VAR_2);

  return FUNC_4(&VAR_5->sort_list, VAR_6);
 }

 return ((void*)0);
}
