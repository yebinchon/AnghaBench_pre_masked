
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct page {TYPE_1__* mapping; int flags; scalar_t__ index; } ;
struct extent_state {scalar_t__ start; } ;
struct extent_io_tree {scalar_t__ track_uptodate; TYPE_2__* ops; int lock; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_device {int dummy; } ;
struct bio_vec {scalar_t__ bv_offset; scalar_t__ bv_len; struct page* bv_page; } ;
struct bio {int bi_vcnt; int bi_flags; scalar_t__ bi_bdev; int bi_idx; struct bio_vec* bi_io_vec; } ;
struct TYPE_6__ {struct btrfs_root* root; struct extent_io_tree io_tree; } ;
struct TYPE_5__ {int (* readpage_end_io_hook ) (struct page*,scalar_t__,scalar_t__,struct extent_state*,int) ;int (* readpage_io_failed_hook ) (struct page*,int) ;} ;
struct TYPE_4__ {int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (struct page*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct bio*) ;
 int FUNC_5 (struct bio*,struct page*,scalar_t__,scalar_t__,int,int *) ;
 int FUNC_6 (struct btrfs_device*,int ) ;
 struct btrfs_device* FUNC_7 (struct btrfs_root*,scalar_t__,int) ;
 int FUNC_8 (struct extent_state*,struct extent_state**) ;
 int FUNC_9 (struct extent_io_tree*,struct page*) ;
 int FUNC_10 (struct extent_io_tree*,struct page*) ;
 int FUNC_11 (scalar_t__,struct page*) ;
 struct extent_state* FUNC_12 (struct extent_io_tree*,scalar_t__,int ) ;
 int FUNC_13 (char*,int,int ,int,long) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct extent_io_tree*,scalar_t__,scalar_t__,struct extent_state**,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct page*,scalar_t__,scalar_t__,struct extent_state*,int) ;
 int FUNC_19 (struct page*,int) ;
 int FUNC_20 (int ,int *) ;
 int FUNC_21 (struct extent_state**) ;
 int FUNC_22 (struct extent_io_tree*,scalar_t__,scalar_t__,struct extent_state**,int ) ;
 int FUNC_23 (struct page*) ;

__attribute__((used)) static void FUNC_24(struct bio *VAR_6, int VAR_7)
{
 int VAR_8 = FUNC_20(VAR_0, &VAR_6->bi_flags);
 struct bio_vec *VAR_9 = VAR_6->bi_io_vec + VAR_6->bi_vcnt - 1;
 struct bio_vec *VAR_10 = VAR_6->bi_io_vec;
 struct extent_io_tree *VAR_11;
 u64 VAR_12;
 u64 VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;

 if (VAR_7)
  VAR_8 = 0;

 do {
  struct page *VAR_17 = VAR_10->bv_page;
  struct extent_state *VAR_18 = ((void*)0);
  struct extent_state *VAR_19;

  FUNC_13("end_bio_extent_readpage: bi_vcnt=%d, idx=%d, err=%d, "
    "mirror=%ld\n", VAR_6->bi_vcnt, VAR_6->bi_idx, VAR_7,
    (long int)VAR_6->bi_bdev);
  VAR_11 = &FUNC_0(VAR_17->mapping->host)->io_tree;

  VAR_12 = ((u64)VAR_17->index << VAR_4) +
   VAR_10->bv_offset;
  VAR_13 = VAR_12 + VAR_10->bv_len - 1;

  if (VAR_10->bv_offset == 0 && VAR_10->bv_len == VAR_5)
   VAR_14 = 1;
  else
   VAR_14 = 0;

  if (++VAR_10 <= VAR_9)
   FUNC_14(&VAR_10->bv_page->flags);

  FUNC_16(&VAR_11->lock);
  VAR_19 = FUNC_12(VAR_11, VAR_12, VAR_2);
  if (VAR_19 && VAR_19->start == VAR_12) {




   FUNC_8(VAR_19, &VAR_18);
  }
  FUNC_17(&VAR_11->lock);

  VAR_15 = (int)(unsigned long)VAR_6->bi_bdev;
  if (VAR_8 && VAR_11->ops && VAR_11->ops->readpage_end_io_hook) {
   VAR_16 = VAR_11->ops->readpage_end_io_hook(VAR_17, VAR_12, VAR_13,
             VAR_19, VAR_15);
   if (VAR_16) {



    struct btrfs_root *VAR_20 =
     FUNC_0(VAR_17->mapping->host)->root;
    struct btrfs_device *VAR_21;

    VAR_8 = 0;
    VAR_21 = FUNC_7(
      VAR_20, VAR_12, VAR_15);
    if (VAR_21)
     FUNC_6(VAR_21,
      VAR_1);
   } else {
    FUNC_11(VAR_12, VAR_17);
   }
  }

  if (!VAR_8 && VAR_11->ops && VAR_11->ops->readpage_io_failed_hook) {
   VAR_16 = VAR_11->ops->readpage_io_failed_hook(VAR_17, VAR_15);
   if (!VAR_16 && !VAR_7 &&
       FUNC_20(VAR_0, &VAR_6->bi_flags))
    VAR_8 = 1;
  } else if (!VAR_8) {
   VAR_16 = FUNC_5(VAR_6, VAR_17, VAR_12, VAR_13, VAR_15, ((void*)0));
   if (VAR_16 == 0) {
    VAR_8 =
     FUNC_20(VAR_0, &VAR_6->bi_flags);
    if (VAR_7)
     VAR_8 = 0;
    FUNC_21(&VAR_18);
    continue;
   }
  }

  if (VAR_8 && VAR_11->track_uptodate) {
   FUNC_15(VAR_11, VAR_12, VAR_13, &VAR_18,
         VAR_3);
  }
  FUNC_22(VAR_11, VAR_12, VAR_13, &VAR_18, VAR_3);

  if (VAR_14) {
   if (VAR_8) {
    FUNC_3(VAR_17);
   } else {
    FUNC_1(VAR_17);
    FUNC_2(VAR_17);
   }
   FUNC_23(VAR_17);
  } else {
   if (VAR_8) {
    FUNC_10(VAR_11, VAR_17);
   } else {
    FUNC_1(VAR_17);
    FUNC_2(VAR_17);
   }
   FUNC_9(VAR_11, VAR_17);
  }
 } while (VAR_10 <= VAR_9);

 FUNC_4(VAR_6);
}
