
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {scalar_t__ s_fs_info; } ;
struct ecryptfs_sb_info {struct super_block* wsi_sb; } ;



__attribute__((used)) static inline void
FUNC_0(struct super_block *VAR_0,
         struct super_block *VAR_1)
{
 ((struct ecryptfs_sb_info *)VAR_0->s_fs_info)->wsi_sb = VAR_1;
}
