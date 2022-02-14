
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u64 ;
struct inode {int i_mode; } ;
struct extent_buffer {int dummy; } ;
struct btrfs_trans_handle {int transid; } ;
struct btrfs_root {struct btrfs_root* log_root; } ;
struct btrfs_path {int keep_locks; int* slots; struct extent_buffer** nodes; } ;
struct btrfs_key {scalar_t__ objectid; scalar_t__ type; scalar_t__ offset; } ;
struct TYPE_2__ {int log_mutex; int logged_trans; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 struct btrfs_path* FUNC_3 () ;
 int FUNC_4 (struct btrfs_trans_handle*,struct inode*) ;
 int FUNC_5 (struct btrfs_path*) ;
 int FUNC_6 (struct extent_buffer*) ;
 scalar_t__ FUNC_7 (struct inode*) ;
 int FUNC_8 (struct extent_buffer*,struct btrfs_key*,int) ;
 int FUNC_9 (struct btrfs_path*) ;
 int FUNC_10 (struct btrfs_root*,struct btrfs_key*,struct btrfs_key*,struct btrfs_path*,int ,int ) ;
 int FUNC_11 (struct btrfs_trans_handle*,struct btrfs_root*,struct inode*,int ,int ) ;
 int FUNC_12 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,struct extent_buffer*,int,int,int) ;
 int FUNC_13 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,scalar_t__,int) ;
 int FUNC_14 (struct btrfs_trans_handle*,struct btrfs_root*,struct inode*,struct btrfs_path*,struct btrfs_path*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(struct btrfs_trans_handle *VAR_6,
        struct btrfs_root *VAR_7, struct inode *VAR_8,
        int VAR_9)
{
 struct btrfs_path *VAR_10;
 struct btrfs_path *VAR_11;
 struct btrfs_key VAR_12;
 struct btrfs_key VAR_13;
 struct btrfs_root *VAR_14 = VAR_7->log_root;
 struct extent_buffer *VAR_15 = ((void*)0);
 int VAR_16 = 0;
 int VAR_17;
 int VAR_18;
 int VAR_19 = 0;
 int VAR_20;
 u64 VAR_21 = FUNC_7(VAR_8);

 VAR_14 = VAR_7->log_root;

 VAR_10 = FUNC_3();
 if (!VAR_10)
  return -VAR_3;
 VAR_11 = FUNC_3();
 if (!VAR_11) {
  FUNC_5(VAR_10);
  return -VAR_3;
 }

 VAR_12.objectid = VAR_21;
 VAR_12.type = VAR_1;
 VAR_12.offset = 0;

 VAR_13.objectid = VAR_21;


 if (!FUNC_1(VAR_8->i_mode))
     VAR_9 = VAR_4;

 if (VAR_9 == VAR_5 || FUNC_1(VAR_8->i_mode))
  VAR_13.type = VAR_2;
 else
  VAR_13.type = (u8)-1;
 VAR_13.offset = (u64)-1;

 VAR_17 = FUNC_4(VAR_6, VAR_8);
 if (VAR_17) {
  FUNC_5(VAR_10);
  FUNC_5(VAR_11);
  return VAR_17;
 }

 FUNC_15(&FUNC_0(VAR_8)->log_mutex);





 if (FUNC_1(VAR_8->i_mode)) {
  int VAR_22 = VAR_0;

  if (VAR_9 == VAR_5)
   VAR_22 = VAR_2;
  VAR_17 = FUNC_13(VAR_6, VAR_14, VAR_10, VAR_21, VAR_22);
 } else {
  VAR_17 = FUNC_11(VAR_6, VAR_14, VAR_8, 0, 0);
 }
 if (VAR_17) {
  VAR_16 = VAR_17;
  goto out_unlock;
 }
 VAR_10->keep_locks = 1;

 while (1) {
  VAR_20 = 0;
  VAR_17 = FUNC_10(VAR_7, &VAR_12, &VAR_13,
        VAR_10, 0, VAR_6->transid);
  if (VAR_17 != 0)
   break;
again:

  if (VAR_12.objectid != VAR_21)
   break;
  if (VAR_12.type > VAR_13.type)
   break;

  VAR_15 = VAR_10->nodes[0];
  if (VAR_20 && VAR_19 + VAR_20 == VAR_10->slots[0]) {
   VAR_20++;
   goto next_slot;
  } else if (!VAR_20) {
   VAR_19 = VAR_10->slots[0];
   VAR_20 = 1;
   goto next_slot;
  }

  VAR_17 = FUNC_12(VAR_6, VAR_14, VAR_11, VAR_15, VAR_19,
     VAR_20, VAR_9);
  if (VAR_17) {
   VAR_16 = VAR_17;
   goto out_unlock;
  }
  VAR_20 = 1;
  VAR_19 = VAR_10->slots[0];
next_slot:

  VAR_18 = FUNC_6(VAR_10->nodes[0]);
  VAR_10->slots[0]++;
  if (VAR_10->slots[0] < VAR_18) {
   FUNC_8(VAR_10->nodes[0], &VAR_12,
           VAR_10->slots[0]);
   goto again;
  }
  if (VAR_20) {
   VAR_17 = FUNC_12(VAR_6, VAR_14, VAR_11, VAR_15,
      VAR_19,
      VAR_20, VAR_9);
   if (VAR_17) {
    VAR_16 = VAR_17;
    goto out_unlock;
   }
   VAR_20 = 0;
  }
  FUNC_9(VAR_10);

  if (VAR_12.offset < (u64)-1)
   VAR_12.offset++;
  else if (VAR_12.type < (u8)-1)
   VAR_12.type++;
  else if (VAR_12.objectid < (u64)-1)
   VAR_12.objectid++;
  else
   break;
 }
 if (VAR_20) {
  VAR_17 = FUNC_12(VAR_6, VAR_14, VAR_11, VAR_15,
     VAR_19,
     VAR_20, VAR_9);
  if (VAR_17) {
   VAR_16 = VAR_17;
   goto out_unlock;
  }
  VAR_20 = 0;
 }
 FUNC_2(VAR_20);
 if (VAR_9 == VAR_4 && FUNC_1(VAR_8->i_mode)) {
  FUNC_9(VAR_10);
  FUNC_9(VAR_11);
  VAR_17 = FUNC_14(VAR_6, VAR_7, VAR_8, VAR_10, VAR_11);
  if (VAR_17) {
   VAR_16 = VAR_17;
   goto out_unlock;
  }
 }
 FUNC_0(VAR_8)->logged_trans = VAR_6->transid;
out_unlock:
 FUNC_16(&FUNC_0(VAR_8)->log_mutex);

 FUNC_5(VAR_10);
 FUNC_5(VAR_11);
 return VAR_16;
}
