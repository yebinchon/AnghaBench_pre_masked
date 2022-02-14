
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {scalar_t__ ro; int in_sync; scalar_t__ flags; int safemode_timer; int recovery; scalar_t__ sync_thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mddev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mddev*) ;
 int FUNC_3 (struct mddev*) ;
 int FUNC_4 (struct mddev*,int) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct mddev *VAR_2)
{
 FUNC_5(VAR_0, &VAR_2->recovery);
 if (VAR_2->sync_thread) {
  FUNC_5(VAR_1, &VAR_2->recovery);
  FUNC_2(VAR_2);
 }

 FUNC_1(&VAR_2->safemode_timer);

 FUNC_0(VAR_2);
 FUNC_3(VAR_2);

 if (VAR_2->ro == 0 &&
     (!VAR_2->in_sync || VAR_2->flags)) {

  VAR_2->in_sync = 1;
  FUNC_4(VAR_2, 1);
 }
}
