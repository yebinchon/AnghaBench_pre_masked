
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block_device {int bd_fsfreeze_mutex; int bd_holder_list; int bd_list; int bd_inodes; int bd_mutex; } ;
struct bdev_inode {int vfs_inode; struct block_device bdev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct block_device*,int ,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
 struct bdev_inode *VAR_1 = (struct bdev_inode *) VAR_0;
 struct block_device *VAR_2 = &VAR_1->bdev;

 FUNC_2(VAR_2, 0, sizeof(*VAR_2));
 FUNC_3(&VAR_2->bd_mutex);
 FUNC_0(&VAR_2->bd_inodes);
 FUNC_0(&VAR_2->bd_list);



 FUNC_1(&VAR_1->vfs_inode);

 FUNC_3(&VAR_2->bd_fsfreeze_mutex);
}
