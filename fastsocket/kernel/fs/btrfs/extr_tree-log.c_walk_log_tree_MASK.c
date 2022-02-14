
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct walk_control {int (* process_func ) (struct btrfs_root*,struct extent_buffer*,struct walk_control*,int ) ;scalar_t__ free; } ;
struct extent_buffer {int len; int start; } ;
struct btrfs_trans_handle {int dummy; } ;
struct TYPE_2__ {scalar_t__ objectid; } ;
struct btrfs_root {TYPE_1__ root_key; struct extent_buffer* node; } ;
struct btrfs_path {struct extent_buffer** nodes; scalar_t__* slots; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 struct btrfs_path* FUNC_2 () ;
 int FUNC_3 (struct btrfs_root*,int ,int ) ;
 int FUNC_4 (struct btrfs_path*) ;
 int FUNC_5 (struct extent_buffer*) ;
 int FUNC_6 (struct extent_buffer*) ;
 int FUNC_7 (struct extent_buffer*) ;
 int FUNC_8 (struct extent_buffer*) ;
 int FUNC_9 (struct extent_buffer*) ;
 int FUNC_10 (struct extent_buffer*) ;
 int FUNC_11 (struct btrfs_trans_handle*,struct btrfs_root*,struct extent_buffer*) ;
 int FUNC_12 (struct extent_buffer*) ;
 int FUNC_13 (struct extent_buffer*) ;
 int FUNC_14 (struct btrfs_root*,struct extent_buffer*,struct walk_control*,int ) ;
 int FUNC_15 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,int*,struct walk_control*) ;
 int FUNC_16 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,int*,struct walk_control*) ;

__attribute__((used)) static int FUNC_17(struct btrfs_trans_handle *VAR_2,
    struct btrfs_root *VAR_3, struct walk_control *VAR_4)
{
 int VAR_5 = 0;
 int VAR_6;
 int VAR_7;
 struct btrfs_path *VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_8 = FUNC_2();
 if (!VAR_8)
  return -VAR_1;

 VAR_7 = FUNC_6(VAR_3->node);
 VAR_10 = VAR_7;
 VAR_8->nodes[VAR_7] = VAR_3->node;
 FUNC_12(VAR_3->node);
 VAR_8->slots[VAR_7] = 0;

 while (1) {
  VAR_6 = FUNC_15(VAR_2, VAR_3, VAR_8, &VAR_7, VAR_4);
  if (VAR_6 > 0)
   break;
  if (VAR_6 < 0) {
   VAR_5 = VAR_6;
   goto out;
  }

  VAR_6 = FUNC_16(VAR_2, VAR_3, VAR_8, &VAR_7, VAR_4);
  if (VAR_6 > 0)
   break;
  if (VAR_6 < 0) {
   VAR_5 = VAR_6;
   goto out;
  }
 }


 if (VAR_8->nodes[VAR_10]) {
  VAR_5 = VAR_4->process_func(VAR_3, VAR_8->nodes[VAR_10], VAR_4,
    FUNC_5(VAR_8->nodes[VAR_10]));
  if (VAR_5)
   goto out;
  if (VAR_4->free) {
   struct extent_buffer *VAR_11;

   VAR_11 = VAR_8->nodes[VAR_10];

   FUNC_8(VAR_11);
   FUNC_7(VAR_11);
   FUNC_11(VAR_2, VAR_3, VAR_11);
   FUNC_10(VAR_11);
   FUNC_9(VAR_11);

   FUNC_1(VAR_3->root_key.objectid !=
    VAR_0);
   VAR_5 = FUNC_3(VAR_3, VAR_11->start,
        VAR_11->len);
   FUNC_0(VAR_5);
  }
 }

out:
 for (VAR_9 = 0; VAR_9 <= VAR_10; VAR_9++) {
  if (VAR_8->nodes[VAR_9]) {
   FUNC_13(VAR_8->nodes[VAR_9]);
   VAR_8->nodes[VAR_9] = ((void*)0);
  }
 }
 FUNC_4(VAR_8);
 return VAR_5;
}
