
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ulist {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_fs_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct btrfs_trans_handle*,struct btrfs_fs_info*,int ,int ,int ,struct ulist*,struct ulist*,int const*) ;
 int FUNC_1 (struct ulist*) ;
 struct ulist* FUNC_2 (int ) ;
 int FUNC_3 (struct ulist*) ;

__attribute__((used)) static int FUNC_4(struct btrfs_trans_handle *VAR_3,
    struct btrfs_fs_info *VAR_4, u64 VAR_5,
    u64 VAR_6, u64 VAR_7,
    struct ulist **VAR_8,
    const u64 *VAR_9)
{
 struct ulist *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_2(VAR_2);
 if (!VAR_10)
  return -VAR_1;
 *VAR_8 = FUNC_2(VAR_2);
 if (!*VAR_8) {
  FUNC_3(VAR_10);
  return -VAR_1;
 }

 VAR_11 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6,
    VAR_7, *VAR_8, VAR_10, VAR_9);
 FUNC_3(VAR_10);

 if (VAR_11 < 0 && VAR_11 != -VAR_0) {
  FUNC_1(*VAR_8);
  return VAR_11;
 }

 return 0;
}
