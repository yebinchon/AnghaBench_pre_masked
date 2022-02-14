
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_io_tree {int dummy; } ;
struct btrfs_root {int dummy; } ;


 int FUNC_0 (struct btrfs_root*,struct extent_io_tree*,int) ;
 int FUNC_1 (struct btrfs_root*,struct extent_io_tree*,int) ;

int FUNC_2(struct btrfs_root *VAR_0,
    struct extent_io_tree *VAR_1, int VAR_2)
{
 int VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);

 if (VAR_3)
  return VAR_3;
 if (VAR_4)
  return VAR_4;
 return 0;
}
