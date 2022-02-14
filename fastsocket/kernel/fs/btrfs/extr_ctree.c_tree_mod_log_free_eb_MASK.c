
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct extent_buffer {int dummy; } ;
struct btrfs_fs_info {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct extent_buffer*) ;
 scalar_t__ FUNC_2 (struct btrfs_fs_info*,struct extent_buffer*) ;
 int FUNC_3 (struct btrfs_fs_info*,struct extent_buffer*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct btrfs_fs_info *VAR_1,
     struct extent_buffer *VAR_2)
{
 int VAR_3;
 int VAR_4;
 u32 VAR_5;

 if (FUNC_2(VAR_1, VAR_2))
  return;

 VAR_5 = FUNC_1(VAR_2);
 for (VAR_3 = VAR_5 - 1; VAR_3 >= 0; VAR_3--) {
  VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_3,
           VAR_0);
  FUNC_0(VAR_4 < 0);
 }
}
