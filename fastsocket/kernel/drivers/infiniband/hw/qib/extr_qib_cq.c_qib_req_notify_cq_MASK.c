
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qib_cq {int notify; int lock; TYPE_1__* queue; } ;
struct ib_cq {int dummy; } ;
typedef enum ib_cq_notify_flags { ____Placeholder_ib_cq_notify_flags } ib_cq_notify_flags ;
struct TYPE_2__ {scalar_t__ head; scalar_t__ tail; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct qib_cq* FUNC_2 (struct ib_cq*) ;

int FUNC_3(struct ib_cq *VAR_3, enum ib_cq_notify_flags VAR_4)
{
 struct qib_cq *VAR_5 = FUNC_2(VAR_3);
 unsigned long VAR_6;
 int VAR_7 = 0;

 FUNC_0(&VAR_5->lock, VAR_6);




 if (VAR_5->notify != VAR_0)
  VAR_5->notify = VAR_4 & VAR_2;

 if ((VAR_4 & VAR_1) &&
     VAR_5->queue->head != VAR_5->queue->tail)
  VAR_7 = 1;

 FUNC_1(&VAR_5->lock, VAR_6);

 return VAR_7;
}
