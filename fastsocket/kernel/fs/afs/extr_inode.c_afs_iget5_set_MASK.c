
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_version; int i_ino; } ;
struct TYPE_2__ {int unique; int vnode; } ;
struct afs_vnode {int volume; TYPE_1__ fid; } ;
struct afs_iget_data {int volume; TYPE_1__ fid; } ;


 struct afs_vnode* FUNC_0 (struct inode*) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_0, void *VAR_1)
{
 struct afs_iget_data *VAR_2 = VAR_1;
 struct afs_vnode *VAR_3 = FUNC_0(VAR_0);

 VAR_0->i_ino = VAR_2->fid.vnode;
 VAR_0->i_version = VAR_2->fid.unique;
 VAR_3->fid = VAR_2->fid;
 VAR_3->volume = VAR_2->volume;

 return 0;
}
