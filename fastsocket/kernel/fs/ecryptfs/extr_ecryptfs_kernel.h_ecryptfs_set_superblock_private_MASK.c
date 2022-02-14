
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {struct ecryptfs_sb_info* s_fs_info; } ;
struct ecryptfs_sb_info {int dummy; } ;



__attribute__((used)) static inline void
FUNC_0(struct super_block *VAR_0,
    struct ecryptfs_sb_info *VAR_1)
{
 VAR_0->s_fs_info = VAR_1;
}
