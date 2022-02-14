
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct btrfs_free_space_ctl {int free_space; } ;
struct btrfs_free_space {int dummy; } ;


 int FUNC_0 (struct btrfs_free_space_ctl*,struct btrfs_free_space*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct btrfs_free_space_ctl *VAR_0,
         struct btrfs_free_space *VAR_1, u64 VAR_2,
         u64 VAR_3)
{
 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 VAR_0->free_space -= VAR_3;
}
