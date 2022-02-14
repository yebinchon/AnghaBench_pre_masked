
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_eflags; int if_start_flags; scalar_t__ if_start_thread; scalar_t__ if_start_delay_qlen; scalar_t__ if_start_delayed; int if_start_lock; int if_snd; int if_start_active; int if_start_req; } ;
typedef int caddr_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct ifnet *VAR_4, boolean_t VAR_5)
{
 if (!(VAR_4->if_eflags & VAR_1))
  return;







 FUNC_1(&VAR_4->if_start_lock);
 if (VAR_5) {
  VAR_4->if_start_flags &= ~VAR_2;
 } else if (VAR_4->if_start_flags & VAR_2) {
  FUNC_2(&VAR_4->if_start_lock);
  return;
 }
 VAR_4->if_start_req++;
 if (!VAR_4->if_start_active && VAR_4->if_start_thread != VAR_3 &&
     (VAR_5 || !(VAR_4->if_eflags & VAR_0) ||
     FUNC_0(&VAR_4->if_snd) >= VAR_4->if_start_delay_qlen ||
     VAR_4->if_start_delayed == 0)) {
  (void) FUNC_3((caddr_t)&VAR_4->if_start_thread,
      VAR_4->if_start_thread);
 }
 FUNC_2(&VAR_4->if_start_lock);
}
