
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct key {int dummy; } ;
struct inode {int dummy; } ;
struct file {struct key* private_data; } ;
struct TYPE_3__ {int vnode; int vid; } ;
struct afs_vnode {TYPE_2__* volume; TYPE_1__ fid; } ;
struct TYPE_4__ {int cell; } ;


 struct afs_vnode* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct key*) ;
 int FUNC_2 (struct key*) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (char*,...) ;
 struct key* FUNC_5 (int ) ;
 int FUNC_6 (struct afs_vnode*,struct key*) ;

int FUNC_7(struct inode *VAR_0, struct file *VAR_1)
{
 struct afs_vnode *VAR_2 = FUNC_0(VAR_0);
 struct key *VAR_3;
 int VAR_4;

 FUNC_3("{%x:%u},", VAR_2->fid.vid, VAR_2->fid.vnode);

 VAR_3 = FUNC_5(VAR_2->volume->cell);
 if (FUNC_1(VAR_3)) {
  FUNC_4(" = %ld [key]", FUNC_2(VAR_3));
  return FUNC_2(VAR_3);
 }

 VAR_4 = FUNC_6(VAR_2, VAR_3);
 if (VAR_4 < 0) {
  FUNC_4(" = %d [val]", VAR_4);
  return VAR_4;
 }

 VAR_1->private_data = VAR_3;
 FUNC_4(" = 0");
 return 0;
}
