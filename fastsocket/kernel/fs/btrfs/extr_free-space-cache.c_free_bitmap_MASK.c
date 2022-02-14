
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btrfs_free_space_ctl {TYPE_1__* op; int total_bitmaps; } ;
struct btrfs_free_space {int bitmap; } ;
struct TYPE_2__ {int (* recalc_thresholds ) (struct btrfs_free_space_ctl*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct btrfs_free_space*) ;
 int FUNC_2 (struct btrfs_free_space_ctl*) ;
 int FUNC_3 (struct btrfs_free_space_ctl*,struct btrfs_free_space*) ;

__attribute__((used)) static void FUNC_4(struct btrfs_free_space_ctl *VAR_1,
   struct btrfs_free_space *VAR_2)
{
 FUNC_3(VAR_1, VAR_2);
 FUNC_0(VAR_2->bitmap);
 FUNC_1(VAR_0, VAR_2);
 VAR_1->total_bitmaps--;
 VAR_1->op->recalc_thresholds(VAR_1);
}
