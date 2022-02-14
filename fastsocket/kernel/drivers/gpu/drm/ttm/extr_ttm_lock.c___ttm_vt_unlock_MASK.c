
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_lock {int flags; int lock; int queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct ttm_lock *VAR_2)
{
 int VAR_3 = 0;

 FUNC_0(&VAR_2->lock);
 if (FUNC_2(!(VAR_2->flags & VAR_1)))
  VAR_3 = -VAR_0;
 VAR_2->flags &= ~VAR_1;
 FUNC_3(&VAR_2->queue);
 FUNC_1(&VAR_2->lock);

 return VAR_3;
}
