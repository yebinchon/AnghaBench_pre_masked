
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_object_file {int dummy; } ;
struct ttm_lock {struct ttm_object_file* vt_holder; int base; int queue; int lock; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct ttm_lock*) ;
 int FUNC_1 (struct ttm_lock*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ttm_object_file*,int *,int,int ,int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct ttm_lock *VAR_3,
  bool VAR_4,
  struct ttm_object_file *VAR_5)
{
 int VAR_6 = 0;

 if (VAR_4) {
  VAR_6 = FUNC_7(VAR_3->queue,
            FUNC_0(VAR_3));
  if (FUNC_5(VAR_6 != 0)) {
   FUNC_2(&VAR_3->lock);
   VAR_3->flags &= ~VAR_0;
   FUNC_8(&VAR_3->queue);
   FUNC_3(&VAR_3->lock);
   return VAR_6;
  }
 } else
  FUNC_6(VAR_3->queue, FUNC_0(VAR_3));







 VAR_6 = FUNC_4(VAR_5, &VAR_3->base, 0,
       VAR_1, &VAR_2, ((void*)0));
 if (VAR_6)
  (void)FUNC_1(VAR_3);
 else
  VAR_3->vt_holder = VAR_5;

 return VAR_6;
}
