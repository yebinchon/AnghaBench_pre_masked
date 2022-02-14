
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {unsigned long data; void (* function ) (unsigned long) ;scalar_t__ expires; } ;
struct ipr_cmnd {void (* done ) (struct ipr_cmnd*) ;TYPE_2__ timer; TYPE_1__* hrrq; int queue; } ;
struct TYPE_3__ {int hrrq_pending_q; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct ipr_cmnd*) ;
 int FUNC_2 (struct ipr_cmnd*,int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(struct ipr_cmnd *VAR_2,
         void (*VAR_3) (struct ipr_cmnd *),
         void (*VAR_4) (struct ipr_cmnd *), u32 VAR_5)
{
 FUNC_3(&VAR_2->queue, &VAR_2->hrrq->hrrq_pending_q);

 VAR_2->done = VAR_3;

 VAR_2->timer.data = (unsigned long) VAR_2;
 VAR_2->timer.expires = VAR_1 + VAR_5;
 VAR_2->timer.function = (void (*)(unsigned long))VAR_4;

 FUNC_0(&VAR_2->timer);

 FUNC_2(VAR_2, VAR_0, 0);

 FUNC_1(VAR_2);
}
