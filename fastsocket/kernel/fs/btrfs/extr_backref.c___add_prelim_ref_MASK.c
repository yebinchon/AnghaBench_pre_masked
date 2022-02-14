
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct list_head {int dummy; } ;
struct btrfs_key {int dummy; } ;
struct __prelim_ref {int level; int count; int list; void* wanted_disk_byte; void* parent; int * inode_list; struct btrfs_key key_for_search; void* root_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct __prelim_ref* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,struct list_head*) ;
 int FUNC_2 (struct btrfs_key*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct list_head *VAR_2, u64 VAR_3,
       struct btrfs_key *VAR_4, int VAR_5,
       u64 VAR_6, u64 VAR_7, int VAR_8)
{
 struct __prelim_ref *VAR_9;


 VAR_9 = FUNC_0(sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->root_id = VAR_3;
 if (VAR_4)
  VAR_9->key_for_search = *VAR_4;
 else
  FUNC_2(&VAR_9->key_for_search, 0, sizeof(VAR_9->key_for_search));

 VAR_9->inode_list = ((void*)0);
 VAR_9->level = VAR_5;
 VAR_9->count = VAR_8;
 VAR_9->parent = VAR_6;
 VAR_9->wanted_disk_byte = VAR_7;
 FUNC_1(&VAR_9->list, VAR_2);

 return 0;
}
