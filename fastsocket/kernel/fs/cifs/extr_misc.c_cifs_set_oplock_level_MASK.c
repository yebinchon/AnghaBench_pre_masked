
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifsInodeInfo {int clientCanCacheAll; int clientCanCacheRead; int vfs_inode; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int *) ;

void FUNC_1(struct cifsInodeInfo *VAR_2, __u32 VAR_3)
{
 VAR_3 &= 0xF;

 if (VAR_3 == VAR_0) {
  VAR_2->clientCanCacheAll = 1;
  VAR_2->clientCanCacheRead = 1;
  FUNC_0(1, "Exclusive Oplock granted on inode %p",
       &VAR_2->vfs_inode);
 } else if (VAR_3 == VAR_1) {
  VAR_2->clientCanCacheAll = 0;
  VAR_2->clientCanCacheRead = 1;
  FUNC_0(1, "Level II Oplock granted on inode %p",
      &VAR_2->vfs_inode);
 } else {
  VAR_2->clientCanCacheAll = 0;
  VAR_2->clientCanCacheRead = 0;
 }
}
