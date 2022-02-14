
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_bdev; TYPE_1__* s_op; int s_bdi; } ;
struct TYPE_2__ {int (* sync_fs ) (struct super_block*,int) ;} ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct super_block*,int) ;
 int FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct super_block*,int) ;
 int FUNC_4 (struct super_block*) ;
 int FUNC_5 (struct super_block*,int) ;

__attribute__((used)) static int FUNC_6(struct super_block *VAR_0, int VAR_1)
{




 if (!VAR_0->s_bdi)
  return 0;


 if (!VAR_1) {
  FUNC_5(VAR_0, -1);
  FUNC_4(VAR_0);
 } else {
  FUNC_3(VAR_0, -1);
  FUNC_2(VAR_0);
 }
 if (VAR_0->s_op->sync_fs)
  VAR_0->s_op->sync_fs(VAR_0, VAR_1);
 return FUNC_0(VAR_0->s_bdev, VAR_1);
}
