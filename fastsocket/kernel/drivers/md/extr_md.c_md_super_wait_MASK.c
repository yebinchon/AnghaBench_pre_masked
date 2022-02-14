
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int sb_wait; int pending_writes; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 () ;
 int VAR_1 ;

void FUNC_5(struct mddev *VAR_2)
{

 FUNC_0(VAR_1);
 for(;;) {
  FUNC_3(&VAR_2->sb_wait, &VAR_1, VAR_0);
  if (FUNC_1(&VAR_2->pending_writes)==0)
   break;
  FUNC_4();
 }
 FUNC_2(&VAR_2->sb_wait, &VAR_1);
}
