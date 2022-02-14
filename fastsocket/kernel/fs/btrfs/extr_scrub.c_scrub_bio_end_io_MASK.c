
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scrub_dev {TYPE_2__* dev; } ;
struct scrub_bio {int err; int work; struct bio* bio; struct scrub_dev* sdev; } ;
struct btrfs_fs_info {int scrub_workers; } ;
struct bio {struct scrub_bio* bi_private; } ;
struct TYPE_4__ {TYPE_1__* dev_root; } ;
struct TYPE_3__ {struct btrfs_fs_info* fs_info; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct bio *VAR_0, int VAR_1)
{
 struct scrub_bio *VAR_2 = VAR_0->bi_private;
 struct scrub_dev *VAR_3 = VAR_2->sdev;
 struct btrfs_fs_info *VAR_4 = VAR_3->dev->dev_root->fs_info;

 VAR_2->err = VAR_1;
 VAR_2->bio = VAR_0;

 FUNC_0(&VAR_4->scrub_workers, &VAR_2->work);
}
