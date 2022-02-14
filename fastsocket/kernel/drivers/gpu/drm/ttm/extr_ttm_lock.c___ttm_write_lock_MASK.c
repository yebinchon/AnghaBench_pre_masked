
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_lock {int rw; int flags; int lock; int signal; int kill_takers; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static bool FUNC_4(struct ttm_lock *VAR_2)
{
 bool VAR_3 = 0;

 FUNC_1(&VAR_2->lock);
 if (FUNC_3(VAR_2->kill_takers)) {
  FUNC_0(VAR_2->signal, VAR_1, 0);
  FUNC_2(&VAR_2->lock);
  return 0;
 }
 if (VAR_2->rw == 0 && ((VAR_2->flags & ~VAR_0) == 0)) {
  VAR_2->rw = -1;
  VAR_2->flags &= ~VAR_0;
  VAR_3 = 1;
 } else {
  VAR_2->flags |= VAR_0;
 }
 FUNC_2(&VAR_2->lock);
 return VAR_3;
}
