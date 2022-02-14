
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mddev {int sync_thread; int thread; int recovery; TYPE_1__* pers; int sb_wait; scalar_t__ suspended; } ;
struct TYPE_2__ {int (* quiesce ) (struct mddev*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct mddev*,int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct mddev *VAR_1)
{
 VAR_1->suspended = 0;
 FUNC_3(&VAR_1->sb_wait);
 VAR_1->pers->quiesce(VAR_1, 0);

 FUNC_1(VAR_0, &VAR_1->recovery);
 FUNC_0(VAR_1->thread);
 FUNC_0(VAR_1->sync_thread);
}
