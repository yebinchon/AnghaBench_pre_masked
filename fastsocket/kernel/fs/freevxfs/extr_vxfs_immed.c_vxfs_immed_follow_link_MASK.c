
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vi_immed; } ;
struct vxfs_inode_info {TYPE_1__ vii_immed; } ;
struct nameidata {int dummy; } ;
struct dentry {int d_inode; } ;


 struct vxfs_inode_info* FUNC_0 (int ) ;
 int FUNC_1 (struct nameidata*,int ) ;

__attribute__((used)) static void *
FUNC_2(struct dentry *VAR_0, struct nameidata *VAR_1)
{
 struct vxfs_inode_info *VAR_2 = FUNC_0(VAR_0->d_inode);
 FUNC_1(VAR_1, VAR_2->vii_immed.vi_immed);
 return ((void*)0);
}
