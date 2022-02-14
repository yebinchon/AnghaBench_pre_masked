
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef void* u32 ;
struct extent_buffer {int dummy; } ;
struct btrfs_trans_handle {int transid; } ;
struct btrfs_key {scalar_t__ objectid; scalar_t__ type; scalar_t__ offset; } ;
struct TYPE_4__ {scalar_t__ objectid; scalar_t__ type; scalar_t__ offset; } ;
struct btrfs_root {scalar_t__ ref_cows; int defrag_trans_start; struct btrfs_key defrag_progress; TYPE_2__ defrag_max; int node; TYPE_1__* fs_info; } ;
struct btrfs_path {int keep_locks; struct extent_buffer** nodes; void** slots; } ;
typedef int key ;
struct TYPE_3__ {struct btrfs_root* extent_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 struct btrfs_path* FUNC_1 () ;
 int FUNC_2 (struct btrfs_root*,struct btrfs_path*,struct btrfs_key*,int,int,int ) ;
 int FUNC_3 (struct btrfs_path*) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (struct extent_buffer*) ;
 struct extent_buffer* FUNC_6 (struct btrfs_root*) ;
 int FUNC_7 (struct extent_buffer*,TYPE_2__*,void*) ;
 int FUNC_8 (struct btrfs_trans_handle*,struct btrfs_root*,struct extent_buffer*,int ,int,int *,struct btrfs_key*) ;
 int FUNC_9 (struct btrfs_path*) ;
 int FUNC_10 (struct btrfs_root*,struct btrfs_key*,int *,struct btrfs_path*,int,int ) ;
 int FUNC_11 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int ,int) ;
 int FUNC_12 (struct extent_buffer*) ;
 scalar_t__ FUNC_13 (struct btrfs_root*,int ) ;
 int FUNC_14 (struct extent_buffer*) ;
 int FUNC_15 (struct extent_buffer*) ;
 int FUNC_16 (struct btrfs_key*,struct btrfs_key*,int) ;
 int FUNC_17 (struct btrfs_key*,int ,int) ;

int FUNC_18(struct btrfs_trans_handle *VAR_3,
   struct btrfs_root *VAR_4, int VAR_5)
{
 struct btrfs_path *VAR_6 = ((void*)0);
 struct btrfs_key VAR_7;
 int VAR_8 = 0;
 int VAR_9;
 int VAR_10;
 int VAR_11 = 0;
 int VAR_12 = 0;
 u64 VAR_13 = 0;
 u64 VAR_14 = 0;

 if (VAR_5)
  goto out;

 if (VAR_4->fs_info->extent_root == VAR_4) {




  goto out;
 }

 if (VAR_4->ref_cows == 0 && !VAR_11)
  goto out;

 if (FUNC_13(VAR_4, VAR_2))
  goto out;

 VAR_6 = FUNC_1();
 if (!VAR_6)
  return -VAR_1;

 VAR_10 = FUNC_4(VAR_4->node);

 if (VAR_10 == 0)
  goto out;

 if (VAR_4->defrag_progress.objectid == 0) {
  struct extent_buffer *VAR_15;
  u32 VAR_16;

  VAR_15 = FUNC_6(VAR_4);
  FUNC_12(VAR_15);
  VAR_16 = FUNC_5(VAR_15);
  VAR_4->defrag_max.objectid = 0;

  FUNC_7(VAR_15, &VAR_4->defrag_max,
          VAR_16 - 1);
  FUNC_14(VAR_15);
  FUNC_15(VAR_15);
  FUNC_17(&VAR_7, 0, sizeof(VAR_7));
 } else {
  FUNC_16(&VAR_7, &VAR_4->defrag_progress, sizeof(VAR_7));
 }

 VAR_6->keep_locks = 1;
 if (VAR_5)
  VAR_14 = VAR_4->defrag_trans_start;

 VAR_8 = FUNC_10(VAR_4, &VAR_7, ((void*)0), VAR_6,
       VAR_5, VAR_14);
 if (VAR_8 < 0)
  goto out;
 if (VAR_8 > 0) {
  VAR_8 = 0;
  goto out;
 }
 FUNC_9(VAR_6);
 VAR_9 = FUNC_11(VAR_3, VAR_4, &VAR_7, VAR_6, 0, 1);

 if (VAR_9 < 0) {
  VAR_8 = VAR_9;
  goto out;
 }
 if (!VAR_6->nodes[1]) {
  VAR_8 = 0;
  goto out;
 }
 VAR_6->slots[1] = FUNC_5(VAR_6->nodes[1]);
 VAR_12 = FUNC_2(VAR_4, VAR_6, &VAR_7, 1, VAR_5,
        VAR_14);
 VAR_8 = FUNC_8(VAR_3, VAR_4,
     VAR_6->nodes[1], 0,
     VAR_5, &VAR_13,
     &VAR_4->defrag_progress);
 if (VAR_8) {
  FUNC_0(VAR_8 == -VAR_0);
  goto out;
 }
 if (VAR_12 == 0) {
  FUNC_16(&VAR_4->defrag_progress, &VAR_7, sizeof(VAR_7));
  VAR_8 = -VAR_0;
 }
out:
 if (VAR_6)
  FUNC_3(VAR_6);
 if (VAR_8 == -VAR_0) {
  if (VAR_4->defrag_max.objectid > VAR_4->defrag_progress.objectid)
   goto done;
  if (VAR_4->defrag_max.type > VAR_4->defrag_progress.type)
   goto done;
  if (VAR_4->defrag_max.offset > VAR_4->defrag_progress.offset)
   goto done;
  VAR_8 = 0;
 }
done:
 if (VAR_8 != -VAR_0) {
  FUNC_17(&VAR_4->defrag_progress, 0,
         sizeof(VAR_4->defrag_progress));
  VAR_4->defrag_trans_start = VAR_3->transid;
 }
 return VAR_8;
}
