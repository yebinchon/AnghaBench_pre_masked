
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct inode {int i_sb; } ;
struct btrfs_fs_info {int dummy; } ;


 int FUNC_0 (struct btrfs_fs_info*,int,char*,unsigned long long) ;
 struct btrfs_fs_info* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct inode *VAR_0, int VAR_1,
            u64 VAR_2)
{
 struct btrfs_fs_info *VAR_3 = FUNC_1(VAR_0->i_sb);
 FUNC_0(VAR_3, VAR_1, "Inconsistency in ordered tree at offset "
      "%llu\n", (unsigned long long)VAR_2);
}
