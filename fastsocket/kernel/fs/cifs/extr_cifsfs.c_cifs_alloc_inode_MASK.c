
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int i_blkbits; } ;
struct cifsInodeInfo {int cifsAttrs; int delete_pending; int invalid_mapping; struct inode vfs_inode; int openFileList; scalar_t__ server_eof; scalar_t__ time; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct cifsInodeInfo*,int ) ;
 struct cifsInodeInfo* FUNC_2 (int ,int ) ;

__attribute__((used)) static struct inode *
FUNC_3(struct super_block *VAR_2)
{
 struct cifsInodeInfo *VAR_3;
 VAR_3 = FUNC_2(VAR_1, VAR_0);
 if (!VAR_3)
  return ((void*)0);
 VAR_3->cifsAttrs = 0x20;
 VAR_3->time = 0;



 FUNC_1(VAR_3, 0);
 VAR_3->delete_pending = 0;
 VAR_3->invalid_mapping = 0;
 VAR_3->vfs_inode.i_blkbits = 14;
 VAR_3->server_eof = 0;




 FUNC_0(&VAR_3->openFileList);
 return &VAR_3->vfs_inode;
}
