
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int queue_lock; } ;
struct io_context {int dummy; } ;
struct cfq_io_context {struct cfq_data* key; } ;
struct cfq_data {struct request_queue* queue; } ;


 int FUNC_0 (struct cfq_data*,struct cfq_io_context*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct io_context *VAR_0,
           struct cfq_io_context *VAR_1)
{
 struct cfq_data *VAR_2 = VAR_1->key;

 if (VAR_2) {
  struct request_queue *VAR_3 = VAR_2->queue;
  unsigned long VAR_4;

  FUNC_2(VAR_3->queue_lock, VAR_4);





  FUNC_1();
  if (VAR_1->key)
   FUNC_0(VAR_2, VAR_1);

  FUNC_3(VAR_3->queue_lock, VAR_4);
 }
}
