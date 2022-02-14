
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_key {int dummy; } ;
struct btrfs_disk_key {int dummy; } ;


 int FUNC_0 (struct btrfs_key*,struct btrfs_key*) ;
 int FUNC_1 (struct btrfs_key*,struct btrfs_disk_key*) ;

__attribute__((used)) static int FUNC_2(struct btrfs_disk_key *VAR_0, struct btrfs_key *VAR_1)
{
 struct btrfs_key VAR_2;

 FUNC_1(&VAR_2, VAR_0);

 return FUNC_0(&VAR_2, VAR_1);
}
