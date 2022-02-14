
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct btrfs_free_space_ctl {TYPE_1__* op; int total_bitmaps; } ;
struct btrfs_free_space {int list; scalar_t__ bytes; int offset; } ;
struct TYPE_2__ {int (* recalc_thresholds ) (struct btrfs_free_space_ctl*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct btrfs_free_space_ctl*,struct btrfs_free_space*) ;
 int FUNC_2 (struct btrfs_free_space_ctl*,int ) ;
 int FUNC_3 (struct btrfs_free_space_ctl*) ;

__attribute__((used)) static void FUNC_4(struct btrfs_free_space_ctl *VAR_0,
      struct btrfs_free_space *VAR_1, u64 VAR_2)
{
 VAR_1->offset = FUNC_2(VAR_0, VAR_2);
 VAR_1->bytes = 0;
 FUNC_0(&VAR_1->list);
 FUNC_1(VAR_0, VAR_1);
 VAR_0->total_bitmaps++;

 VAR_0->op->recalc_thresholds(VAR_0);
}
