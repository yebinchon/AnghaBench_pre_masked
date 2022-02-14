
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_lock_data {scalar_t__ kernel_waiters; int idle_has_lock; int lock_queue; int spinlock; TYPE_1__* hw_lock; } ;
struct TYPE_2__ {unsigned int lock; } ;


 int FUNC_0 (char*,unsigned int,unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (unsigned int volatile*,unsigned int,unsigned int) ;
 int FUNC_4 (struct drm_lock_data*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct drm_lock_data *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2, VAR_3, VAR_4;
 volatile unsigned int *VAR_5 = &VAR_0->hw_lock->lock;

 FUNC_5(&VAR_0->spinlock);
 if (VAR_0->kernel_waiters != 0) {
  FUNC_4(VAR_0, 0);
  VAR_0->idle_has_lock = 1;
  FUNC_6(&VAR_0->spinlock);
  return 1;
 }
 FUNC_6(&VAR_0->spinlock);

 do {
  VAR_2 = *VAR_5;
  VAR_3 = FUNC_1(VAR_2);
  VAR_4 = FUNC_3(VAR_5, VAR_2, VAR_3);
 } while (VAR_4 != VAR_2);

 if (FUNC_2(VAR_2) && FUNC_1(VAR_2) != VAR_1) {
  FUNC_0("%d freed heavyweight lock held by %d\n",
     VAR_1, FUNC_1(VAR_2));
  return 1;
 }
 FUNC_7(&VAR_0->lock_queue);
 return 0;
}
