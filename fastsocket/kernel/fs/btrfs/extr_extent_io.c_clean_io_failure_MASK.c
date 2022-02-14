
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct page {TYPE_1__* mapping; } ;
struct io_failure_record {scalar_t__ start; int failed_mirror; int logical; int len; scalar_t__ in_validation; int this_mirror; } ;
struct inode {int dummy; } ;
struct extent_state {scalar_t__ start; } ;
struct btrfs_mapping_tree {int dummy; } ;
struct TYPE_9__ {int lock; } ;
struct TYPE_10__ {TYPE_3__* root; TYPE_4__ io_tree; int io_failure_tree; } ;
struct TYPE_8__ {TYPE_2__* fs_info; } ;
struct TYPE_7__ {struct btrfs_mapping_tree mapping_tree; } ;
struct TYPE_6__ {struct inode* host; } ;


 TYPE_5__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct btrfs_mapping_tree*,int ,int ) ;
 int FUNC_3 (int *,scalar_t__*,scalar_t__,int,int ,int ) ;
 struct extent_state* FUNC_4 (TYPE_4__*,scalar_t__,int ) ;
 int FUNC_5 (struct inode*,struct io_failure_record*,int) ;
 int FUNC_6 (int *,scalar_t__,scalar_t__*) ;
 int FUNC_7 (char*,scalar_t__) ;
 int FUNC_8 (struct btrfs_mapping_tree*,scalar_t__,int ,int ,struct page*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(u64 VAR_2, struct page *VAR_3)
{
 u64 VAR_4;
 u64 VAR_5;
 struct io_failure_record *VAR_6;
 struct btrfs_mapping_tree *VAR_7;
 struct extent_state *VAR_8;
 int VAR_9;
 int VAR_10 = 0;
 int VAR_11;
 struct inode *VAR_12 = VAR_3->mapping->host;

 VAR_4 = 0;
 VAR_11 = FUNC_3(&FUNC_0(VAR_12)->io_failure_tree, &VAR_4,
    (u64)-1, 1, VAR_0, 0);
 if (!VAR_11)
  return 0;

 VAR_11 = FUNC_6(&FUNC_0(VAR_12)->io_failure_tree, VAR_2,
    &VAR_5);
 if (VAR_11)
  return 0;

 VAR_6 = (struct io_failure_record *)(unsigned long) VAR_5;
 FUNC_1(!VAR_6->this_mirror);

 if (VAR_6->in_validation) {

  FUNC_7("clean_io_failure: freeing dummy error at %llu\n",
    VAR_6->start);
  VAR_10 = 1;
  goto out;
 }

 FUNC_9(&FUNC_0(VAR_12)->io_tree.lock);
 VAR_8 = FUNC_4(&FUNC_0(VAR_12)->io_tree,
         VAR_6->start,
         VAR_1);
 FUNC_10(&FUNC_0(VAR_12)->io_tree.lock);

 if (VAR_8 && VAR_8->start == VAR_6->start) {
  VAR_7 = &FUNC_0(VAR_12)->root->fs_info->mapping_tree;
  VAR_9 = FUNC_2(VAR_7, VAR_6->logical,
      VAR_6->len);
  if (VAR_9 > 1) {
   VAR_11 = FUNC_8(VAR_7, VAR_2, VAR_6->len,
      VAR_6->logical, VAR_3,
      VAR_6->failed_mirror);
   VAR_10 = !VAR_11;
  }
 }

out:
 if (!VAR_11)
  VAR_11 = FUNC_5(VAR_12, VAR_6, VAR_10);

 return VAR_11;
}
