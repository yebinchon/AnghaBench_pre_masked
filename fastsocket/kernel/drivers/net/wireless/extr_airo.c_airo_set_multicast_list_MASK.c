
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; scalar_t__ mc_count; struct airo_info* ml_priv; } ;
struct airo_info {int flags; int thr_wait; int jobs; int sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct airo_info*) ;
 int FUNC_1 (int ,int*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_4) {
 struct airo_info *VAR_5 = VAR_4->ml_priv;

 if ((VAR_4->flags ^ VAR_5->flags) & VAR_2) {
  FUNC_1(VAR_0, &VAR_5->flags);
  if (FUNC_2(&VAR_5->sem) != 0) {
   FUNC_3(VAR_3, &VAR_5->jobs);
   FUNC_4(&VAR_5->thr_wait);
  } else
   FUNC_0(VAR_5);
 }

 if ((VAR_4->flags&VAR_1)||VAR_4->mc_count>0) {

 }
}
