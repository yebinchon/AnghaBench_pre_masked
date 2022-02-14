
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct nfs_inode {scalar_t__ fscache; } ;
struct inode {struct super_block* i_sb; } ;
struct TYPE_2__ {int options; int fscache; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 struct nfs_inode* FUNC_1 (struct inode*) ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (struct super_block*) ;
 int FUNC_3 (int ,char*,struct super_block*,struct nfs_inode*,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int *,struct nfs_inode*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(struct inode *VAR_3)
{
 struct super_block *VAR_4 = VAR_3->i_sb;
 struct nfs_inode *VAR_5 = FUNC_1(VAR_3);

 if (VAR_5->fscache || !FUNC_0(VAR_3))
  return;

 if ((FUNC_2(VAR_4)->options & VAR_1)) {
  VAR_5->fscache = FUNC_4(
   FUNC_2(VAR_4)->fscache,
   &VAR_2,
   VAR_5);

  FUNC_3(VAR_0, "NFS: get FH cookie (0x%p/0x%p/0x%p)\n",
    VAR_4, VAR_5, VAR_5->fscache);
 }
}
