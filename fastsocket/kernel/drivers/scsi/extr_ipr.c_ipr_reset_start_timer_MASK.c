
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned long data; void (* function ) (unsigned long) ;scalar_t__ expires; } ;
struct ipr_cmnd {TYPE_2__ timer; int done; TYPE_1__* hrrq; int queue; } ;
struct TYPE_3__ {int hrrq_pending_q; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct ipr_cmnd *VAR_4,
      unsigned long VAR_5)
{

 VAR_0;
 FUNC_1(&VAR_4->queue, &VAR_4->hrrq->hrrq_pending_q);
 VAR_4->done = VAR_1;

 VAR_4->timer.data = (unsigned long) VAR_4;
 VAR_4->timer.expires = VAR_3 + VAR_5;
 VAR_4->timer.function = (void (*)(unsigned long))VAR_2;
 FUNC_0(&VAR_4->timer);
}
