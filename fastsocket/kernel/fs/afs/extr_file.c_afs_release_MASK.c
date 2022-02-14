
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int private_data; } ;
struct TYPE_2__ {int vnode; int vid; } ;
struct afs_vnode {TYPE_1__ fid; } ;


 struct afs_vnode* FUNC_0 (struct inode*) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct inode *VAR_0, struct file *VAR_1)
{
 struct afs_vnode *VAR_2 = FUNC_0(VAR_0);

 FUNC_1("{%x:%u},", VAR_2->fid.vid, VAR_2->fid.vnode);

 FUNC_3(VAR_1->private_data);
 FUNC_2(" = 0");
 return 0;
}
