
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef unsigned long u16 ;
struct extent_buffer {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {TYPE_2__* fs_info; } ;
struct btrfs_path {int leave_spinning; scalar_t__* slots; struct extent_buffer** nodes; } ;
struct btrfs_key {scalar_t__ objectid; int offset; scalar_t__ type; } ;
struct TYPE_4__ {struct btrfs_root* csum_root; TYPE_1__* sb; int super_copy; } ;
struct TYPE_3__ {int s_blocksize_bits; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct btrfs_trans_handle*,struct btrfs_root*,int) ;
 struct btrfs_path* FUNC_1 () ;
 int FUNC_2 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*) ;
 int FUNC_3 (struct btrfs_path*) ;
 int FUNC_4 (struct extent_buffer*,struct btrfs_key*,scalar_t__) ;
 unsigned long FUNC_5 (struct extent_buffer*,scalar_t__) ;
 unsigned long FUNC_6 (struct extent_buffer*,scalar_t__) ;
 int FUNC_7 (struct btrfs_path*) ;
 int FUNC_8 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int,int) ;
 int FUNC_9 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,struct btrfs_key*,unsigned long) ;
 unsigned long FUNC_10 (int ) ;
 int FUNC_11 (struct extent_buffer*,int ,unsigned long,unsigned long) ;
 int FUNC_12 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,struct btrfs_key*,int,int) ;

int FUNC_13(struct btrfs_trans_handle *VAR_4,
      struct btrfs_root *VAR_5, u64 VAR_6, u64 VAR_7)
{
 struct btrfs_path *VAR_8;
 struct btrfs_key VAR_9;
 u64 VAR_10 = VAR_6 + VAR_7;
 u64 VAR_11;
 struct extent_buffer *VAR_12;
 int VAR_13;
 u16 VAR_14 = FUNC_10(VAR_5->fs_info->super_copy);
 int VAR_15 = VAR_5->fs_info->sb->s_blocksize_bits;

 VAR_5 = VAR_5->fs_info->csum_root;

 VAR_8 = FUNC_1();
 if (!VAR_8)
  return -VAR_3;

 while (1) {
  VAR_9.objectid = VAR_1;
  VAR_9.offset = VAR_10 - 1;
  VAR_9.type = VAR_0;

  VAR_8->leave_spinning = 1;
  VAR_13 = FUNC_8(VAR_4, VAR_5, &VAR_9, VAR_8, -1, 1);
  if (VAR_13 > 0) {
   if (VAR_8->slots[0] == 0)
    break;
   VAR_8->slots[0]--;
  } else if (VAR_13 < 0) {
   break;
  }

  VAR_12 = VAR_8->nodes[0];
  FUNC_4(VAR_12, &VAR_9, VAR_8->slots[0]);

  if (VAR_9.objectid != VAR_1 ||
      VAR_9.type != VAR_0) {
   break;
  }

  if (VAR_9.offset >= VAR_10)
   break;

  VAR_11 = FUNC_6(VAR_12, VAR_8->slots[0]) / VAR_14;
  VAR_11 <<= VAR_15;
  VAR_11 += VAR_9.offset;


  if (VAR_11 <= VAR_6)
   break;


  if (VAR_9.offset >= VAR_6 && VAR_11 <= VAR_10) {
   VAR_13 = FUNC_2(VAR_4, VAR_5, VAR_8);
   if (VAR_13)
    goto out;
   if (VAR_9.offset == VAR_6)
    break;
  } else if (VAR_9.offset < VAR_6 && VAR_11 > VAR_10) {
   unsigned long VAR_16;
   unsigned long VAR_17;
   unsigned long VAR_18;
   VAR_16 = (VAR_6 - VAR_9.offset) >> VAR_15;
   VAR_16 *= VAR_14;

   VAR_17 = (VAR_7 >> VAR_15) * VAR_14;

   VAR_18 = FUNC_5(VAR_12,
           VAR_8->slots[0]);

   FUNC_11(VAR_12, 0, VAR_18 + VAR_16,
          VAR_17);
   VAR_9.offset = VAR_6;





   VAR_13 = FUNC_9(VAR_4, VAR_5, VAR_8, &VAR_9, VAR_16);
   if (VAR_13 && VAR_13 != -VAR_2) {
    FUNC_0(VAR_4, VAR_5, VAR_13);
    goto out;
   }

   VAR_9.offset = VAR_10 - 1;
  } else {
   FUNC_12(VAR_4, VAR_5, VAR_8, &VAR_9, VAR_6, VAR_7);
   if (VAR_9.offset < VAR_6)
    break;
  }
  FUNC_7(VAR_8);
 }
 VAR_13 = 0;
out:
 FUNC_3(VAR_8);
 return VAR_13;
}
