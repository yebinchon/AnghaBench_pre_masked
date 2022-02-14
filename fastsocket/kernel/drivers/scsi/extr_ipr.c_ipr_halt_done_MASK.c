
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipr_cmnd {TYPE_1__* hrrq; int queue; } ;
struct TYPE_2__ {int hrrq_free_q; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct ipr_cmnd *VAR_0)
{
 FUNC_0(&VAR_0->queue, &VAR_0->hrrq->hrrq_free_q);
}
