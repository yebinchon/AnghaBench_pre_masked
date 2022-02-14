
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ulist_node {int val; } ;
struct ulist_iterator {int dummy; } ;
struct ulist {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_fs_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ulist_iterator*) ;
 int FUNC_1 (struct btrfs_trans_handle*,struct btrfs_fs_info*,int ,int ,int ,struct ulist*,struct ulist*,int *) ;
 struct ulist* FUNC_2 (int ) ;
 int FUNC_3 (struct ulist*) ;
 struct ulist_node* FUNC_4 (struct ulist*,struct ulist_iterator*) ;

int FUNC_5(struct btrfs_trans_handle *VAR_3,
    struct btrfs_fs_info *VAR_4, u64 VAR_5,
    u64 VAR_6, u64 VAR_7,
    struct ulist **VAR_8)
{
 struct ulist *VAR_9;
 struct ulist_node *VAR_10 = ((void*)0);
 struct ulist_iterator VAR_11;
 int VAR_12;

 VAR_9 = FUNC_2(VAR_2);
 if (!VAR_9)
  return -VAR_1;
 *VAR_8 = FUNC_2(VAR_2);
 if (!*VAR_8) {
  FUNC_3(VAR_9);
  return -VAR_1;
 }

 FUNC_0(&VAR_11);
 while (1) {
  VAR_12 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6,
     VAR_7, VAR_9, *VAR_8, ((void*)0));
  if (VAR_12 < 0 && VAR_12 != -VAR_0) {
   FUNC_3(VAR_9);
   FUNC_3(*VAR_8);
   return VAR_12;
  }
  VAR_10 = FUNC_4(VAR_9, &VAR_11);
  if (!VAR_10)
   break;
  VAR_5 = VAR_10->val;
 }

 FUNC_3(VAR_9);
 return 0;
}
