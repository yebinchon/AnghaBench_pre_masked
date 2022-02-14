
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct vfsmount {int dummy; } ;
struct kstat {int blocks; int blksize; int dev; } ;
struct inode {TYPE_1__* i_sb; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_8__ {int delalloc_bytes; TYPE_3__* root; } ;
struct TYPE_6__ {int s_dev; } ;
struct TYPE_7__ {TYPE_2__ anon_super; } ;
struct TYPE_5__ {int s_blocksize; } ;


 int FUNC_0 (int ,int ) ;
 TYPE_4__* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int FUNC_2 (struct inode*,struct kstat*) ;
 int FUNC_3 (struct inode*) ;

__attribute__((used)) static int FUNC_4(struct vfsmount *VAR_1,
    struct dentry *VAR_2, struct kstat *VAR_3)
{
 struct inode *VAR_4 = VAR_2->d_inode;
 u32 VAR_5 = VAR_4->i_sb->s_blocksize;

 FUNC_2(VAR_4, VAR_3);
 VAR_3->dev = FUNC_1(VAR_4)->root->anon_super.s_dev;
 VAR_3->blksize = VAR_0;
 VAR_3->blocks = (FUNC_0(FUNC_3(VAR_4), VAR_5) +
  FUNC_0(FUNC_1(VAR_4)->delalloc_bytes, VAR_5)) >> 9;
 return 0;
}
