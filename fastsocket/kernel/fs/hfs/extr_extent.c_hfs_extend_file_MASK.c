
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct super_block {int s_dirt; } ;
struct inode {scalar_t__ i_ino; struct super_block* i_sb; } ;
typedef int hfs_extent_rec ;
struct TYPE_9__ {scalar_t__ alloc_blocks; scalar_t__ first_blocks; scalar_t__ clump_blocks; scalar_t__ cached_start; int flags; scalar_t__ cached_blocks; TYPE_1__* cached_extents; int extents_lock; TYPE_1__* first_extents; } ;
struct TYPE_8__ {int flags; } ;
struct TYPE_7__ {void* count; void* block; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_6__* FUNC_0 (struct inode*) ;
 TYPE_5__* FUNC_1 (struct super_block*) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (TYPE_1__*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct inode*,scalar_t__) ;
 int FUNC_8 (struct inode*) ;
 scalar_t__ FUNC_9 (struct super_block*,scalar_t__,scalar_t__*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (TYPE_1__*,int ,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int *) ;

int FUNC_15(struct inode *VAR_7)
{
 struct super_block *VAR_8 = VAR_7->i_sb;
 u32 VAR_9, VAR_10, VAR_11;
 int VAR_12;

 FUNC_12(&FUNC_0(VAR_7)->extents_lock);
 if (FUNC_0(VAR_7)->alloc_blocks == FUNC_0(VAR_7)->first_blocks)
  VAR_11 = FUNC_6(FUNC_0(VAR_7)->first_extents);
 else {
  VAR_12 = FUNC_7(VAR_7, FUNC_0(VAR_7)->alloc_blocks);
  if (VAR_12)
   goto out;
  VAR_11 = FUNC_6(FUNC_0(VAR_7)->cached_extents);
 }

 VAR_10 = FUNC_0(VAR_7)->clump_blocks;
 VAR_9 = FUNC_9(VAR_8, VAR_11, &VAR_10);
 if (!VAR_10) {
  VAR_12 = -VAR_1;
  goto out;
 }

 FUNC_3(VAR_0, "extend %lu: %u,%u\n", VAR_7->i_ino, VAR_9, VAR_10);
 if (FUNC_0(VAR_7)->alloc_blocks == FUNC_0(VAR_7)->first_blocks) {
  if (!FUNC_0(VAR_7)->first_blocks) {
   FUNC_3(VAR_0, "first extents\n");

   FUNC_0(VAR_7)->first_extents[0].block = FUNC_2(VAR_9);
   FUNC_0(VAR_7)->first_extents[0].count = FUNC_2(VAR_10);
   VAR_12 = 0;
  } else {

   VAR_12 = FUNC_4(FUNC_0(VAR_7)->first_extents,
          FUNC_0(VAR_7)->alloc_blocks,
          VAR_9, VAR_10);
   if (VAR_12 == -VAR_1)
    goto insert_extent;
  }
  if (!VAR_12) {
   FUNC_5(FUNC_0(VAR_7)->first_extents);
   FUNC_0(VAR_7)->first_blocks += VAR_10;
  }
 } else {
  VAR_12 = FUNC_4(FUNC_0(VAR_7)->cached_extents,
         FUNC_0(VAR_7)->alloc_blocks -
         FUNC_0(VAR_7)->cached_start,
         VAR_9, VAR_10);
  if (!VAR_12) {
   FUNC_5(FUNC_0(VAR_7)->cached_extents);
   FUNC_0(VAR_7)->flags |= VAR_4;
   FUNC_0(VAR_7)->cached_blocks += VAR_10;
  } else if (VAR_12 == -VAR_1)
   goto insert_extent;
 }
out:
 FUNC_13(&FUNC_0(VAR_7)->extents_lock);
 if (!VAR_12) {
  FUNC_0(VAR_7)->alloc_blocks += VAR_10;
  FUNC_10(VAR_7);
  if (VAR_7->i_ino < VAR_2)
   FUNC_14(VAR_3, &FUNC_1(VAR_8)->flags);
  FUNC_14(VAR_6, &FUNC_1(VAR_8)->flags);
  VAR_8->s_dirt = 1;
 }
 return VAR_12;

insert_extent:
 FUNC_3(VAR_0, "insert new extent\n");
 FUNC_8(VAR_7);

 FUNC_11(FUNC_0(VAR_7)->cached_extents, 0, sizeof(hfs_extent_rec));
 FUNC_0(VAR_7)->cached_extents[0].block = FUNC_2(VAR_9);
 FUNC_0(VAR_7)->cached_extents[0].count = FUNC_2(VAR_10);
 FUNC_5(FUNC_0(VAR_7)->cached_extents);
 FUNC_0(VAR_7)->flags |= VAR_4|VAR_5;
 FUNC_0(VAR_7)->cached_start = FUNC_0(VAR_7)->alloc_blocks;
 FUNC_0(VAR_7)->cached_blocks = VAR_10;

 VAR_12 = 0;
 goto out;
}
