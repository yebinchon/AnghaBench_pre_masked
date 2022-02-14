
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int i_mmap_nonlinear; int i_mmap; int private_lock; int private_list; int i_mmap_lock; int tree_lock; int page_tree; } ;
struct inode {int i_fsnotify_mark_entries; int inotify_mutex; int inotify_watches; TYPE_1__ i_data; int i_devices; int i_dentry; int i_hash; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct inode *VAR_1)
{
 FUNC_6(VAR_1, 0, sizeof(*VAR_1));
 FUNC_1(&VAR_1->i_hash);
 FUNC_2(&VAR_1->i_dentry);
 FUNC_2(&VAR_1->i_devices);
 FUNC_3(&VAR_1->i_data.page_tree, VAR_0);
 FUNC_8(&VAR_1->i_data.tree_lock);
 FUNC_8(&VAR_1->i_data.i_mmap_lock);
 FUNC_2(&VAR_1->i_data.private_list);
 FUNC_8(&VAR_1->i_data.private_lock);
 FUNC_4(&VAR_1->i_data.i_mmap);
 FUNC_2(&VAR_1->i_data.i_mmap_nonlinear);
 FUNC_5(VAR_1);







}
