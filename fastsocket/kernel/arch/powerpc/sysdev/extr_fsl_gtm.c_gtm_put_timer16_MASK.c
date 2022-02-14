
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gtm_timer {int requested; TYPE_1__* gtm; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (struct gtm_timer*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct gtm_timer *VAR_0)
{
 FUNC_0(VAR_0);

 FUNC_1(&VAR_0->gtm->lock);
 VAR_0->requested = 0;
 FUNC_2(&VAR_0->gtm->lock);
}
