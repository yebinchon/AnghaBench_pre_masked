
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vxfs_inode_info {int dummy; } ;
struct super_block {int dummy; } ;
typedef int ino_t ;
struct TYPE_2__ {int vsi_stilist; } ;


 scalar_t__ FUNC_0 (struct vxfs_inode_info*) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 struct vxfs_inode_info* FUNC_2 (int ,int ) ;

struct vxfs_inode_info *
FUNC_3(struct super_block *VAR_0, ino_t VAR_1)
{
 struct vxfs_inode_info *VAR_2;

 VAR_2 = FUNC_2(VAR_1, FUNC_1(VAR_0)->vsi_stilist);
 return FUNC_0(VAR_2) ? ((void*)0) : VAR_2;
}
