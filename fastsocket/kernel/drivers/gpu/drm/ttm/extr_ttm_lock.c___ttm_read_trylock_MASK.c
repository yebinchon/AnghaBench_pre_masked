
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_lock {scalar_t__ rw; scalar_t__ flags; int lock; int signal; int kill_takers; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static bool FUNC_4(struct ttm_lock *VAR_1, bool *VAR_2)
{
 bool VAR_3 = 1;

 *VAR_2 = 0;

 FUNC_1(&VAR_1->lock);
 if (FUNC_3(VAR_1->kill_takers)) {
  FUNC_0(VAR_1->signal, VAR_0, 0);
  FUNC_2(&VAR_1->lock);
  return 0;
 }
 if (VAR_1->rw >= 0 && VAR_1->flags == 0) {
  ++VAR_1->rw;
  VAR_3 = 0;
  *VAR_2 = 1;
 } else if (VAR_1->flags == 0) {
  VAR_3 = 0;
 }
 FUNC_2(&VAR_1->lock);

 return !VAR_3;
}
