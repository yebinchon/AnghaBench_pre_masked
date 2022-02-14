
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned long u64 ;
struct page {int * mapping; } ;
struct inode {int * i_mapping; } ;
struct extent_io_tree {TYPE_2__* ops; } ;
struct compressed_bio {unsigned long start; unsigned long len; unsigned long compressed_len; unsigned long nr_pages; int pending_bios; int * orig_bio; struct page** compressed_pages; scalar_t__ mirror_num; struct inode* inode; scalar_t__ errors; } ;
struct btrfs_root {TYPE_3__* fs_info; } ;
struct block_device {int dummy; } ;
struct bio {void* bi_end_io; struct compressed_bio* bi_private; scalar_t__ bi_size; } ;
struct TYPE_8__ {int flags; struct btrfs_root* root; struct extent_io_tree io_tree; } ;
struct TYPE_7__ {TYPE_1__* fs_devices; } ;
struct TYPE_6__ {int (* merge_bio_hook ) (struct page*,int ,unsigned long,struct bio*,int ) ;} ;
struct TYPE_5__ {struct block_device* latest_bdev; } ;


 TYPE_4__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_2 (unsigned long) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 unsigned long FUNC_5 (struct bio*,struct page*,unsigned long,int ) ;
 int FUNC_6 (struct bio*) ;
 int FUNC_7 (struct bio*) ;
 int FUNC_8 (TYPE_3__*,struct bio*,int ) ;
 int FUNC_9 (struct btrfs_root*,struct inode*,struct bio*,unsigned long,int) ;
 int FUNC_10 (struct btrfs_root*,int ,struct bio*,int ,int) ;
 struct bio* FUNC_11 (struct block_device*,unsigned long,int ) ;
 int FUNC_12 (struct btrfs_root*,unsigned long) ;
 int FUNC_13 () ;
 void* VAR_5 ;
 int FUNC_14 (struct compressed_bio*) ;
 struct compressed_bio* FUNC_15 (int ,int ) ;
 int FUNC_16 (char*,unsigned long,unsigned long,int) ;
 int FUNC_17 (struct page*,int ,unsigned long,struct bio*,int ) ;

int FUNC_18(struct inode *VAR_6, u64 VAR_7,
     unsigned long VAR_8, u64 VAR_9,
     unsigned long VAR_10,
     struct page **VAR_11,
     unsigned long VAR_12)
{
 struct bio *VAR_13 = ((void*)0);
 struct btrfs_root *VAR_14 = FUNC_0(VAR_6)->root;
 struct compressed_bio *VAR_15;
 unsigned long VAR_16;
 struct extent_io_tree *VAR_17 = &FUNC_0(VAR_6)->io_tree;
 int VAR_18 = 0;
 struct page *VAR_19;
 u64 VAR_20 = VAR_9;
 struct block_device *VAR_21;
 int VAR_22;
 int VAR_23 = FUNC_0(VAR_6)->flags & VAR_0;

 FUNC_2(VAR_7 & ((u64)VAR_3 - 1));
 VAR_15 = FUNC_15(FUNC_12(VAR_14, VAR_10), VAR_2);
 if (!VAR_15)
  return -VAR_1;
 FUNC_4(&VAR_15->pending_bios, 0);
 VAR_15->errors = 0;
 VAR_15->inode = VAR_6;
 VAR_15->start = VAR_7;
 VAR_15->len = VAR_8;
 VAR_15->mirror_num = 0;
 VAR_15->compressed_pages = VAR_11;
 VAR_15->compressed_len = VAR_10;
 VAR_15->orig_bio = ((void*)0);
 VAR_15->nr_pages = VAR_12;

 VAR_21 = FUNC_0(VAR_6)->root->fs_info->fs_devices->latest_bdev;

 VAR_13 = FUNC_11(VAR_21, VAR_20, VAR_2);
 if(!VAR_13) {
  FUNC_14(VAR_15);
  return -VAR_1;
 }
 VAR_13->bi_private = VAR_15;
 VAR_13->bi_end_io = VAR_5;
 FUNC_3(&VAR_15->pending_bios);


 VAR_16 = VAR_10;
 for (VAR_18 = 0; VAR_18 < VAR_15->nr_pages; VAR_18++) {
  VAR_19 = VAR_11[VAR_18];
  VAR_19->mapping = VAR_6->i_mapping;
  if (VAR_13->bi_size)
   VAR_22 = VAR_17->ops->merge_bio_hook(VAR_19, 0,
          VAR_3,
          VAR_13, 0);
  else
   VAR_22 = 0;

  VAR_19->mapping = ((void*)0);
  if (VAR_22 || FUNC_5(VAR_13, VAR_19, VAR_3, 0) <
      VAR_3) {
   FUNC_6(VAR_13);







   FUNC_3(&VAR_15->pending_bios);
   VAR_22 = FUNC_8(VAR_14->fs_info, VAR_13, 0);
   FUNC_1(VAR_22);

   if (!VAR_23) {
    VAR_22 = FUNC_9(VAR_14, VAR_6, VAR_13,
        VAR_7, 1);
    FUNC_1(VAR_22);
   }

   VAR_22 = FUNC_10(VAR_14, VAR_4, VAR_13, 0, 1);
   FUNC_1(VAR_22);

   FUNC_7(VAR_13);

   VAR_13 = FUNC_11(VAR_21, VAR_20, VAR_2);
   FUNC_1(!VAR_13);
   VAR_13->bi_private = VAR_15;
   VAR_13->bi_end_io = VAR_5;
   FUNC_5(VAR_13, VAR_19, VAR_3, 0);
  }
  if (VAR_16 < VAR_3) {
   FUNC_16("bytes left %lu compress len %lu nr %lu\n",
          VAR_16, VAR_15->compressed_len, VAR_15->nr_pages);
  }
  VAR_16 -= VAR_3;
  VAR_20 += VAR_3;
  FUNC_13();
 }
 FUNC_6(VAR_13);

 VAR_22 = FUNC_8(VAR_14->fs_info, VAR_13, 0);
 FUNC_1(VAR_22);

 if (!VAR_23) {
  VAR_22 = FUNC_9(VAR_14, VAR_6, VAR_13, VAR_7, 1);
  FUNC_1(VAR_22);
 }

 VAR_22 = FUNC_10(VAR_14, VAR_4, VAR_13, 0, 1);
 FUNC_1(VAR_22);

 FUNC_7(VAR_13);
 return 0;
}
