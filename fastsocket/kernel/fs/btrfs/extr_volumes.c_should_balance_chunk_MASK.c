
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct extent_buffer {int dummy; } ;
struct btrfs_root {TYPE_1__* fs_info; } ;
struct btrfs_chunk {int dummy; } ;
struct btrfs_balance_args {int flags; } ;
struct btrfs_balance_control {int flags; int fs_info; struct btrfs_balance_args meta; struct btrfs_balance_args sys; struct btrfs_balance_args data; } ;
struct TYPE_2__ {struct btrfs_balance_control* balance_ctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct extent_buffer*,struct btrfs_chunk*) ;
 scalar_t__ FUNC_1 (struct extent_buffer*,struct btrfs_chunk*,struct btrfs_balance_args*) ;
 scalar_t__ FUNC_2 (struct extent_buffer*,struct btrfs_chunk*,int,struct btrfs_balance_args*) ;
 scalar_t__ FUNC_3 (int,struct btrfs_balance_args*) ;
 scalar_t__ FUNC_4 (int,struct btrfs_balance_args*) ;
 scalar_t__ FUNC_5 (int ,int,struct btrfs_balance_args*) ;
 scalar_t__ FUNC_6 (struct extent_buffer*,struct btrfs_chunk*,int,struct btrfs_balance_args*) ;

__attribute__((used)) static int FUNC_7(struct btrfs_root *VAR_11,
    struct extent_buffer *VAR_12,
    struct btrfs_chunk *VAR_13, u64 VAR_14)
{
 struct btrfs_balance_control *VAR_15 = VAR_11->fs_info->balance_ctl;
 struct btrfs_balance_args *VAR_16 = ((void*)0);
 u64 VAR_17 = FUNC_0(VAR_12, VAR_13);


 if (!((VAR_17 & VAR_10) &
       (VAR_15->flags & VAR_6))) {
  return 0;
 }

 if (VAR_17 & VAR_7)
  VAR_16 = &VAR_15->data;
 else if (VAR_17 & VAR_9)
  VAR_16 = &VAR_15->sys;
 else if (VAR_17 & VAR_8)
  VAR_16 = &VAR_15->meta;


 if ((VAR_16->flags & VAR_2) &&
     FUNC_3(VAR_17, VAR_16)) {
  return 0;
 }


 if ((VAR_16->flags & VAR_4) &&
     FUNC_5(VAR_15->fs_info, VAR_14, VAR_16)) {
  return 0;
 }


 if ((VAR_16->flags & VAR_0) &&
     FUNC_1(VAR_12, VAR_13, VAR_16)) {
  return 0;
 }


 if ((VAR_16->flags & VAR_1) &&
     FUNC_2(VAR_12, VAR_13, VAR_14, VAR_16)) {
  return 0;
 }


 if ((VAR_16->flags & VAR_5) &&
     FUNC_6(VAR_12, VAR_13, VAR_14, VAR_16)) {
  return 0;
 }


 if ((VAR_16->flags & VAR_3) &&
     FUNC_4(VAR_17, VAR_16)) {
  return 0;
 }

 return 1;
}
