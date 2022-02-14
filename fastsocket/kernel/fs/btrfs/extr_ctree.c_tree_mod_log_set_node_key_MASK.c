
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_buffer {int dummy; } ;
struct btrfs_fs_info {int dummy; } ;
struct btrfs_disk_key {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct btrfs_fs_info*,struct extent_buffer*,int,int ,int ) ;

__attribute__((used)) static inline void
FUNC_2(struct btrfs_fs_info *VAR_3,
     struct extent_buffer *VAR_4,
     struct btrfs_disk_key *VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_6,
        VAR_2,
        VAR_7 ? VAR_0 : VAR_1);
 FUNC_0(VAR_8 < 0);
}
