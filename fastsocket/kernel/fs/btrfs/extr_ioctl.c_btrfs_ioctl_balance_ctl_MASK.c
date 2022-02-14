
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_root {int fs_info; } ;




 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long FUNC_0 (int ) ;
 long FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static long FUNC_3(struct btrfs_root *VAR_3, int VAR_4)
{
 if (!FUNC_2(VAR_0))
  return -VAR_2;

 switch (VAR_4) {
 case 128:
  return FUNC_1(VAR_3->fs_info);
 case 129:
  return FUNC_0(VAR_3->fs_info);
 }

 return -VAR_1;
}
