
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct key {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_5__ {int vnode; } ;
struct TYPE_4__ {int parent; } ;
struct TYPE_6__ {int i_sb; int i_mode; } ;
struct afs_vnode {TYPE_2__ fid; TYPE_1__ status; TYPE_3__ vfs_inode; } ;


 struct afs_vnode* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 struct afs_vnode* FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int ) ;
 struct inode* FUNC_7 (int ,struct key*,int *,int *,int *) ;
 struct inode* FUNC_8 (TYPE_3__*) ;

__attribute__((used)) static struct afs_vnode *FUNC_9(struct afs_vnode *VAR_0,
         struct key *VAR_1)
{
 struct afs_vnode *VAR_2;
 struct inode *VAR_3;

 FUNC_5("");

 if (FUNC_4(VAR_0->vfs_inode.i_mode)) {
  VAR_3 = FUNC_8(&VAR_0->vfs_inode);
  FUNC_1(VAR_3 != ((void*)0));
 } else {
  VAR_3 = FUNC_7(VAR_0->vfs_inode.i_sb, VAR_1,
          &VAR_0->status.parent, ((void*)0), ((void*)0));
  if (FUNC_3(VAR_3))
   return FUNC_2(VAR_3);
 }

 VAR_2 = FUNC_0(VAR_3);
 FUNC_6(" = {%x}", VAR_2->fid.vnode);
 return VAR_2;
}
