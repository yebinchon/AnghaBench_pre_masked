
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct page {TYPE_3__* mapping; } ;
struct io_failure_record {scalar_t__ start; int len; int this_mirror; int in_validation; int logical; int failed_mirror; scalar_t__ bio_flags; } ;
struct inode {int dummy; } ;
struct extent_state {scalar_t__ start; } ;
struct extent_map_tree {int lock; } ;
struct extent_map {scalar_t__ start; scalar_t__ len; scalar_t__ block_start; int compress_type; int flags; } ;
struct extent_io_tree {TYPE_2__* ops; int lock; } ;
struct bio {int bi_rw; int bi_vcnt; int bi_sector; scalar_t__ bi_size; int bi_bdev; int bi_end_io; struct extent_state* bi_private; } ;
struct TYPE_12__ {TYPE_5__* root; struct extent_map_tree extent_tree; struct extent_io_tree io_tree; struct extent_io_tree io_failure_tree; } ;
struct TYPE_11__ {TYPE_4__* fs_info; } ;
struct TYPE_10__ {TYPE_1__* fs_devices; int mapping_tree; } ;
struct TYPE_9__ {struct inode* host; } ;
struct TYPE_8__ {int (* submit_bio_hook ) (struct inode*,int,struct bio*,scalar_t__,scalar_t__,int ) ;} ;
struct TYPE_7__ {int latest_bdev; } ;


 TYPE_6__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (struct extent_map*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct bio*,struct page*,int,scalar_t__) ;
 struct bio* FUNC_4 (int ,int) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (scalar_t__*,int ) ;
 struct extent_state* FUNC_7 (struct extent_io_tree*,scalar_t__,int) ;
 int FUNC_8 (struct extent_map*) ;
 int FUNC_9 (struct inode*,struct io_failure_record*,int ) ;
 int FUNC_10 (struct extent_io_tree*,scalar_t__,scalar_t__*) ;
 int FUNC_11 (struct io_failure_record*) ;
 struct io_failure_record* FUNC_12 (int,int ) ;
 struct extent_map* FUNC_13 (struct extent_map_tree*,scalar_t__,int) ;
 scalar_t__ FUNC_14 (struct page*) ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct extent_io_tree*,scalar_t__,scalar_t__,int,int ) ;
 int FUNC_19 (struct extent_io_tree*,scalar_t__,scalar_t__) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (struct inode*,int,struct bio*,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_23 (int ,int *) ;

__attribute__((used)) static int FUNC_24(struct bio *VAR_11, struct page *VAR_12,
    u64 VAR_13, u64 VAR_14, int VAR_15,
    struct extent_state *VAR_16)
{
 struct io_failure_record *VAR_17 = ((void*)0);
 u64 VAR_18;
 struct extent_map *VAR_19;
 struct inode *VAR_20 = VAR_12->mapping->host;
 struct extent_io_tree *VAR_21 = &FUNC_0(VAR_20)->io_failure_tree;
 struct extent_io_tree *VAR_22 = &FUNC_0(VAR_20)->io_tree;
 struct extent_map_tree *VAR_23 = &FUNC_0(VAR_20)->extent_tree;
 struct bio *VAR_24;
 int VAR_25;
 int VAR_26;
 int VAR_27;
 u64 VAR_28;

 FUNC_1(VAR_11->bi_rw & VAR_10);

 VAR_26 = FUNC_10(VAR_21, VAR_13, &VAR_18);
 if (VAR_26) {
  VAR_17 = FUNC_12(sizeof(*VAR_17), VAR_7);
  if (!VAR_17)
   return -VAR_1;
  VAR_17->start = VAR_13;
  VAR_17->len = VAR_14 - VAR_13 + 1;
  VAR_17->this_mirror = 0;
  VAR_17->bio_flags = 0;
  VAR_17->in_validation = 0;

  FUNC_16(&VAR_23->lock);
  VAR_19 = FUNC_13(VAR_23, VAR_13, VAR_17->len);
  if (!VAR_19) {
   FUNC_17(&VAR_23->lock);
   FUNC_11(VAR_17);
   return -VAR_0;
  }

  if (VAR_19->start > VAR_13 || VAR_19->start + VAR_19->len < VAR_13) {
   FUNC_8(VAR_19);
   VAR_19 = ((void*)0);
  }
  FUNC_17(&VAR_23->lock);

  if (!VAR_19 || FUNC_2(VAR_19)) {
   FUNC_11(VAR_17);
   return -VAR_0;
  }
  VAR_28 = VAR_13 - VAR_19->start;
  VAR_28 = VAR_19->block_start + VAR_28;
  if (FUNC_23(VAR_5, &VAR_19->flags)) {
   VAR_28 = VAR_19->block_start;
   VAR_17->bio_flags = VAR_2;
   FUNC_6(&VAR_17->bio_flags,
       VAR_19->compress_type);
  }
  FUNC_15("bio_readpage_error: (new) logical=%llu, start=%llu, "
    "len=%llu\n", VAR_28, VAR_13, VAR_17->len);
  VAR_17->logical = VAR_28;
  FUNC_8(VAR_19);


  VAR_26 = FUNC_18(VAR_21, VAR_13, VAR_14,
     VAR_6 | VAR_4, VAR_7);
  if (VAR_26 >= 0)
   VAR_26 = FUNC_19(VAR_21, VAR_13,
      (u64)(unsigned long)VAR_17);

  if (VAR_26 >= 0)
   VAR_26 = FUNC_18(VAR_22, VAR_13, VAR_14, VAR_3,
      VAR_7);
  if (VAR_26 < 0) {
   FUNC_11(VAR_17);
   return VAR_26;
  }
 } else {
  VAR_17 = (struct io_failure_record *)(unsigned long)VAR_18;
  FUNC_15("bio_readpage_error: (found) logical=%llu, "
    "start=%llu, len=%llu, validation=%d\n",
    VAR_17->logical, VAR_17->start, VAR_17->len,
    VAR_17->in_validation);





 }
 VAR_25 = FUNC_5(
         &FUNC_0(VAR_20)->root->fs_info->mapping_tree,
         VAR_17->logical, VAR_17->len);
 if (VAR_25 == 1) {





  FUNC_15("bio_readpage_error: cannot repair, num_copies == 1. "
    "state=%p, num_copies=%d, next_mirror %d, "
    "failed_mirror %d\n", VAR_16, VAR_25,
    VAR_17->this_mirror, VAR_15);
  FUNC_9(VAR_20, VAR_17, 0);
  return -VAR_0;
 }

 if (!VAR_16) {
  FUNC_20(&VAR_22->lock);
  VAR_16 = FUNC_7(VAR_22, VAR_17->start,
          VAR_6);
  if (VAR_16 && VAR_16->start != VAR_17->start)
   VAR_16 = ((void*)0);
  FUNC_21(&VAR_22->lock);
 }






 if (VAR_11->bi_vcnt > 1) {
  FUNC_1(VAR_17->in_validation);
  VAR_17->in_validation = 1;
  VAR_17->this_mirror = VAR_15;
  VAR_27 = VAR_8 | VAR_9;
 } else {





  if (VAR_17->in_validation) {
   FUNC_1(VAR_17->this_mirror != VAR_15);
   VAR_17->in_validation = 0;
   VAR_17->this_mirror = 0;
  }
  VAR_17->failed_mirror = VAR_15;
  VAR_17->this_mirror++;
  if (VAR_17->this_mirror == VAR_15)
   VAR_17->this_mirror++;
  VAR_27 = VAR_8;
 }

 if (!VAR_16 || VAR_17->this_mirror > VAR_25) {
  FUNC_15("bio_readpage_error: (fail) state=%p, num_copies=%d, "
    "next_mirror %d, failed_mirror %d\n", VAR_16,
    VAR_25, VAR_17->this_mirror, VAR_15);
  FUNC_9(VAR_20, VAR_17, 0);
  return -VAR_0;
 }

 VAR_24 = FUNC_4(VAR_7, 1);
 if (!VAR_24) {
  FUNC_9(VAR_20, VAR_17, 0);
  return -VAR_0;
 }
 VAR_24->bi_private = VAR_16;
 VAR_24->bi_end_io = VAR_11->bi_end_io;
 VAR_24->bi_sector = VAR_17->logical >> 9;
 VAR_24->bi_bdev = FUNC_0(VAR_20)->root->fs_info->fs_devices->latest_bdev;
 VAR_24->bi_size = 0;

 FUNC_3(VAR_24, VAR_12, VAR_17->len, VAR_13 - FUNC_14(VAR_12));

 FUNC_15("bio_readpage_error: submitting new read[%#x] to "
   "this_mirror=%d, num_copies=%d, in_validation=%d\n", VAR_27,
   VAR_17->this_mirror, VAR_25, VAR_17->in_validation);

 VAR_26 = VAR_22->ops->submit_bio_hook(VAR_20, VAR_27, VAR_24,
      VAR_17->this_mirror,
      VAR_17->bio_flags, 0);
 return VAR_26;
}
