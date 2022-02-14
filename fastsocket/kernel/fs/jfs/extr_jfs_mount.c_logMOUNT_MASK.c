
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {TYPE_1__* s_bdev; } ;
struct lrd {int aggregate; scalar_t__ length; int type; scalar_t__ backchain; scalar_t__ logtid; } ;
struct jfs_log {int dummy; } ;
struct TYPE_4__ {struct jfs_log* log; } ;
struct TYPE_3__ {int bd_dev; } ;


 TYPE_2__* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct jfs_log*,int *,struct lrd*,int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct super_block *VAR_1)
{
 struct jfs_log *VAR_2 = FUNC_0(VAR_1)->log;
 struct lrd VAR_3;

 VAR_3.logtid = 0;
 VAR_3.backchain = 0;
 VAR_3.type = FUNC_1(VAR_0);
 VAR_3.length = 0;
 VAR_3.aggregate = FUNC_2(FUNC_4(VAR_1->s_bdev->bd_dev));
 FUNC_3(VAR_2, ((void*)0), &VAR_3, ((void*)0));

 return 0;
}
