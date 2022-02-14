
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int seq; scalar_t__ flags; } ;
struct tree_mod_elem {TYPE_1__ elem; } ;
struct btrfs_fs_info {int tree_mod_seq_lock; int tree_mod_seq_list; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (struct btrfs_fs_info*,TYPE_1__*) ;
 int FUNC_1 (struct tree_mod_elem*) ;
 struct tree_mod_elem* FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct btrfs_fs_info*,int *) ;

__attribute__((used)) static inline int FUNC_7(struct btrfs_fs_info *VAR_1, gfp_t VAR_2,
     struct tree_mod_elem **VAR_3)
{
 struct tree_mod_elem *VAR_4;
 int VAR_5;

 if (FUNC_6(VAR_1, ((void*)0)))
  return 0;

 VAR_4 = *VAR_3 = FUNC_2(sizeof(*VAR_4), VAR_2);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->elem.flags = 0;
 FUNC_4(&VAR_1->tree_mod_seq_lock);
 if (FUNC_3(&VAR_1->tree_mod_seq_list)) {






  FUNC_1(VAR_4);
  VAR_5 = 0;
  FUNC_5(&VAR_1->tree_mod_seq_lock);
 } else {
  FUNC_0(VAR_1, &VAR_4->elem);
  VAR_5 = VAR_4->elem.seq;
 }

 return VAR_5;
}
