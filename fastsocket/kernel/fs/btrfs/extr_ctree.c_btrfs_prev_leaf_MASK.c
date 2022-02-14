
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_root {int dummy; } ;
struct btrfs_path {int * nodes; } ;
struct btrfs_key {scalar_t__ offset; scalar_t__ type; scalar_t__ objectid; } ;
struct btrfs_disk_key {int dummy; } ;


 int FUNC_0 (int ,struct btrfs_disk_key*,int ) ;
 int FUNC_1 (int ,struct btrfs_key*,int ) ;
 int FUNC_2 (struct btrfs_path*) ;
 int FUNC_3 (int *,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int ,int ) ;
 int FUNC_4 (struct btrfs_disk_key*,struct btrfs_key*) ;

int FUNC_5(struct btrfs_root *VAR_0, struct btrfs_path *VAR_1)
{
 struct btrfs_key VAR_2;
 struct btrfs_disk_key VAR_3;
 int VAR_4;

 FUNC_1(VAR_1->nodes[0], &VAR_2, 0);

 if (VAR_2.offset > 0)
  VAR_2.offset--;
 else if (VAR_2.type > 0)
  VAR_2.type--;
 else if (VAR_2.objectid > 0)
  VAR_2.objectid--;
 else
  return 1;

 FUNC_2(VAR_1);
 VAR_4 = FUNC_3(((void*)0), VAR_0, &VAR_2, VAR_1, 0, 0);
 if (VAR_4 < 0)
  return VAR_4;
 FUNC_0(VAR_1->nodes[0], &VAR_3, 0);
 VAR_4 = FUNC_4(&VAR_3, &VAR_2);
 if (VAR_4 < 0)
  return 0;
 return 1;
}
