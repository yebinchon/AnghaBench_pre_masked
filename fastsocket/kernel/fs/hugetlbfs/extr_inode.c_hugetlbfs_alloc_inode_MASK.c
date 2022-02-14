
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct hugetlbfs_sb_info {int dummy; } ;
struct hugetlbfs_inode_info {struct inode vfs_inode; } ;


 int VAR_0 ;
 struct hugetlbfs_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct hugetlbfs_sb_info*) ;
 int FUNC_2 (struct hugetlbfs_sb_info*) ;
 int VAR_1 ;
 struct hugetlbfs_inode_info* FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static struct inode *FUNC_5(struct super_block *VAR_2)
{
 struct hugetlbfs_sb_info *VAR_3 = FUNC_0(VAR_2);
 struct hugetlbfs_inode_info *VAR_4;

 if (FUNC_4(!FUNC_1(VAR_3)))
  return ((void*)0);
 VAR_4 = FUNC_3(VAR_1, VAR_0);
 if (FUNC_4(!VAR_4)) {
  FUNC_2(VAR_3);
  return ((void*)0);
 }
 return &VAR_4->vfs_inode;
}
