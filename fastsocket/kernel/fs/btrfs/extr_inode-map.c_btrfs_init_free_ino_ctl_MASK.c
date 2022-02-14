
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_root {struct btrfs_free_space_ctl* free_ino_pinned; struct btrfs_free_space_ctl* free_ino_ctl; } ;
struct btrfs_free_space_ctl {int unit; int * op; scalar_t__ extents_thresh; int * private; scalar_t__ start; int tree_lock; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct btrfs_root *VAR_3)
{
 struct btrfs_free_space_ctl *VAR_4 = VAR_3->free_ino_ctl;
 struct btrfs_free_space_ctl *VAR_5 = VAR_3->free_ino_pinned;

 FUNC_0(&VAR_4->tree_lock);
 VAR_4->unit = 1;
 VAR_4->start = 0;
 VAR_4->private = ((void*)0);
 VAR_4->op = &VAR_1;






 VAR_4->extents_thresh = VAR_0;

 FUNC_0(&VAR_5->tree_lock);
 VAR_5->unit = 1;
 VAR_5->start = 0;
 VAR_5->private = ((void*)0);
 VAR_5->extents_thresh = 0;
 VAR_5->op = &VAR_2;
}
