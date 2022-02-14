
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct coda_inode_info {struct inode vfs_inode; scalar_t__ c_cached_perm; scalar_t__ c_uid; scalar_t__ c_flags; int c_fid; } ;
struct CodaFid {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static struct inode *FUNC_2(struct super_block *VAR_2)
{
 struct coda_inode_info *VAR_3;
 VAR_3 = (struct coda_inode_info *)FUNC_0(VAR_1, VAR_0);
 if (!VAR_3)
  return ((void*)0);
 FUNC_1(&VAR_3->c_fid, 0, sizeof(struct CodaFid));
 VAR_3->c_flags = 0;
 VAR_3->c_uid = 0;
 VAR_3->c_cached_perm = 0;
 return &VAR_3->vfs_inode;
}
