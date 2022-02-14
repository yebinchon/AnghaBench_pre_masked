
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_buffer {int dummy; } ;
struct btrfs_fs_info {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct btrfs_fs_info*,struct extent_buffer*,int,int,int,int ) ;

__attribute__((used)) static inline void
FUNC_2(struct btrfs_fs_info *VAR_1, struct extent_buffer *VAR_2,
       int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6;
 VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4,
           VAR_5, VAR_0);
 FUNC_0(VAR_6 < 0);
}
