
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct btrfs_free_space_ctl {int unit; } ;
struct btrfs_free_space {scalar_t__ offset; } ;


 int VAR_0 ;
 int FUNC_0 (struct btrfs_free_space_ctl*,struct btrfs_free_space*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static u64 FUNC_2(struct btrfs_free_space_ctl *VAR_1,
          struct btrfs_free_space *VAR_2, u64 VAR_3,
          u64 VAR_4)
{
 u64 VAR_5 = 0;
 u64 VAR_6;

 VAR_6 = VAR_2->offset + (u64)(VAR_0 * VAR_1->unit);

 VAR_5 = FUNC_1(VAR_6 - VAR_3, VAR_4);

 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_5);

 return VAR_5;

}
