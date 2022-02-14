
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct jfs_log {int syncwait; int flag; } ;
struct TYPE_6__ {struct jfs_log* log; } ;
struct TYPE_5__ {scalar_t__ tlocksInUse; int lowlockwait; } ;
struct TYPE_4__ {int txBeginAnon_lockslow; int txBeginAnon_barrier; int txBeginAnon; } ;


 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (struct super_block*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 TYPE_2__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int ,int *) ;

void FUNC_6(struct super_block *VAR_5)
{
 struct jfs_log *VAR_6;

 VAR_6 = FUNC_1(VAR_5)->log;

 FUNC_2();
 FUNC_0(VAR_2.txBeginAnon);

      retry:



 if (FUNC_5(VAR_4, &VAR_6->flag) ||
     FUNC_5(VAR_3, &VAR_6->flag)) {
  FUNC_0(VAR_2.txBeginAnon_barrier);
  FUNC_3(&VAR_6->syncwait);
  goto retry;
 }




 if (VAR_0.tlocksInUse > VAR_1) {
  FUNC_0(VAR_2.txBeginAnon_lockslow);
  FUNC_3(&VAR_0.lowlockwait);
  goto retry;
 }
 FUNC_4();
}
