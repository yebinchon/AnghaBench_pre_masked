
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gtm_timer {int requested; } ;
struct gtm {int lock; struct gtm_timer* timers; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gtm_timer* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

struct gtm_timer *FUNC_3(struct gtm *VAR_2,
        unsigned int VAR_3)
{
 struct gtm_timer *VAR_4 = FUNC_0(-VAR_0);

 if (VAR_3 > 3)
  return FUNC_0(-VAR_1);

 FUNC_1(&VAR_2->lock);

 if (VAR_2->timers[VAR_3].requested)
  goto out;

 VAR_4 = &VAR_2->timers[VAR_3];
 VAR_4->requested = 1;

out:
 FUNC_2(&VAR_2->lock);
 return VAR_4;
}
