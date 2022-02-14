
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct io_context {int dummy; } ;
struct cfq_queue {int dummy; } ;
struct cfq_io_context {struct cfq_queue** cfqq; int ioc; struct cfq_data* key; } ;
struct cfq_data {TYPE_1__* queue; } ;
struct TYPE_2__ {int queue_lock; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 struct cfq_queue* FUNC_0 (struct cfq_data*,size_t,int ,int ) ;
 int FUNC_1 (struct cfq_queue*) ;
 int FUNC_2 (struct cfq_queue*) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct io_context *VAR_3, struct cfq_io_context *VAR_4)
{
 struct cfq_data *VAR_5 = VAR_4->key;
 struct cfq_queue *VAR_6;
 unsigned long VAR_7;

 if (FUNC_5(!VAR_5))
  return;

 FUNC_3(VAR_5->queue->queue_lock, VAR_7);

 VAR_6 = VAR_4->cfqq[VAR_0];
 if (VAR_6) {
  struct cfq_queue *VAR_8;
  VAR_8 = FUNC_0(VAR_5, VAR_0, VAR_4->ioc,
      VAR_2);
  if (VAR_8) {
   VAR_4->cfqq[VAR_0] = VAR_8;
   FUNC_2(VAR_6);
  }
 }

 VAR_6 = VAR_4->cfqq[VAR_1];
 if (VAR_6)
  FUNC_1(VAR_6);

 FUNC_4(VAR_5->queue->queue_lock, VAR_7);
}
