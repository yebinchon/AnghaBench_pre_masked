
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct jfs_log {int syncwait; int flag; } ;
struct TYPE_2__ {struct jfs_log* log; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int VAR_0 ;

void FUNC_3(struct super_block *VAR_1)
{
 struct jfs_log *VAR_2 = FUNC_0(VAR_1)->log;

 FUNC_2(VAR_0, &VAR_2->flag);
 FUNC_1(&VAR_2->syncwait);
}
