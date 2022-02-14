
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vxfs_inode_info {int dummy; } ;
struct super_block {int dummy; } ;
struct inode {TYPE_1__* i_mapping; } ;
struct TYPE_2__ {int * a_ops; } ;


 struct inode* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*,struct vxfs_inode_info*) ;

struct inode *
FUNC_2(struct super_block *VAR_1, struct vxfs_inode_info *VAR_2)
{
 struct inode *VAR_3 = ((void*)0);

 if ((VAR_3 = FUNC_0(VAR_1))) {
  FUNC_1(VAR_3, VAR_2);
  VAR_3->i_mapping->a_ops = &VAR_0;
 }
 return (VAR_3);
}
