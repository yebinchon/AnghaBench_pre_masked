
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {TYPE_1__* d_inode; } ;
struct c4iw_dev {int debugfs_root; } ;
struct TYPE_2__ {int i_size; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (char*,int ,int ,void*,int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct c4iw_dev *VAR_3)
{
 struct dentry *VAR_4;

 if (!VAR_3->debugfs_root)
  return -1;

 VAR_4 = FUNC_0("qps", VAR_0, VAR_3->debugfs_root,
     (void *)VAR_3, &VAR_1);
 if (VAR_4 && VAR_4->d_inode)
  VAR_4->d_inode->i_size = 4096;

 VAR_4 = FUNC_0("stags", VAR_0, VAR_3->debugfs_root,
     (void *)VAR_3, &VAR_2);
 if (VAR_4 && VAR_4->d_inode)
  VAR_4->d_inode->i_size = 4096;
 return 0;
}
