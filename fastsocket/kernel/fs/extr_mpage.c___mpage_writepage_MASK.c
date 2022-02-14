
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct writeback_control {int dummy; } ;
struct page {unsigned long index; struct address_space* mapping; } ;
struct mpage_data {scalar_t__ last_block_in_bio; struct bio* bio; scalar_t__ use_writepage; scalar_t__ (* get_block ) (struct inode*,scalar_t__,struct buffer_head*,int) ;} ;
struct inode {unsigned int i_blkbits; } ;
struct buffer_head {scalar_t__ b_blocknr; int b_size; struct buffer_head* b_this_page; struct block_device* b_bdev; scalar_t__ b_state; struct page* b_page; } ;
struct block_device {int dummy; } ;
struct bio {int dummy; } ;
struct address_space {TYPE_1__* a_ops; struct inode* host; } ;
typedef scalar_t__ sector_t ;
typedef int loff_t ;
struct TYPE_2__ {int (* writepage ) (struct page*,struct writeback_control*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int const VAR_3 ;
 unsigned int const VAR_4 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct bio*,struct page*,int,int ) ;
 int FUNC_4 (struct block_device*) ;
 int FUNC_5 (struct buffer_head*) ;
 scalar_t__ FUNC_6 (struct buffer_head*) ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (struct buffer_head*) ;
 scalar_t__ FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (struct buffer_head*) ;
 int FUNC_11 (struct buffer_head*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct address_space*,int) ;
 struct bio* FUNC_14 (struct block_device*,scalar_t__,int ,int) ;
 struct bio* FUNC_15 (int ,struct bio*) ;
 struct buffer_head* FUNC_16 (struct page*) ;
 scalar_t__ FUNC_17 (struct page*) ;
 int FUNC_18 (struct page*) ;
 scalar_t__ FUNC_19 (struct inode*,scalar_t__,struct buffer_head*,int) ;
 int FUNC_20 (struct page*,struct writeback_control*) ;
 int FUNC_21 (struct page*) ;
 int FUNC_22 (struct page*) ;
 int FUNC_23 (struct block_device*,scalar_t__) ;
 int FUNC_24 (struct block_device*,scalar_t__,int) ;
 int FUNC_25 (struct page*,unsigned int,unsigned int const) ;

__attribute__((used)) static int FUNC_26(struct page *VAR_8, struct writeback_control *VAR_9,
        void *VAR_10)
{
 struct mpage_data *VAR_11 = VAR_10;
 struct bio *VAR_12 = VAR_11->bio;
 struct address_space *VAR_13 = VAR_8->mapping;
 struct inode *VAR_14 = VAR_8->mapping->host;
 const unsigned VAR_15 = VAR_14->i_blkbits;
 unsigned long VAR_16;
 const unsigned VAR_17 = VAR_4 >> VAR_15;
 sector_t VAR_18;
 sector_t VAR_19;
 sector_t VAR_20[VAR_2];
 unsigned VAR_21;
 unsigned VAR_22 = VAR_17;
 struct block_device *VAR_23 = ((void*)0);
 int VAR_24 = 0;
 sector_t VAR_25 = 0;
 struct block_device *VAR_26 = ((void*)0);
 int VAR_27;
 struct buffer_head VAR_28;
 loff_t VAR_29 = FUNC_12(VAR_14);
 int VAR_30 = 0;

 if (FUNC_17(VAR_8)) {
  struct buffer_head *VAR_31 = FUNC_16(VAR_8);
  struct buffer_head *VAR_32 = VAR_31;


  VAR_21 = 0;
  do {
   FUNC_0(FUNC_7(VAR_32));
   if (!FUNC_8(VAR_32)) {




    if (FUNC_6(VAR_32))
     goto confused;
    if (VAR_22 == VAR_17)
     VAR_22 = VAR_21;
    continue;
   }

   if (VAR_22 != VAR_17)
    goto confused;

   if (!FUNC_6(VAR_32) || !FUNC_10(VAR_32))
    goto confused;
   if (VAR_21) {
    if (VAR_32->b_blocknr != VAR_20[VAR_21-1] + 1)
     goto confused;
   }
   VAR_20[VAR_21++] = VAR_32->b_blocknr;
   VAR_24 = FUNC_5(VAR_32);
   if (VAR_24) {
    VAR_25 = VAR_32->b_blocknr;
    VAR_26 = VAR_32->b_bdev;
   }
   VAR_23 = VAR_32->b_bdev;
  } while ((VAR_32 = VAR_32->b_this_page) != VAR_31);

  if (VAR_22)
   goto page_is_mapped;







  goto confused;
 }




 FUNC_0(!FUNC_1(VAR_8));
 VAR_19 = (sector_t)VAR_8->index << (VAR_3 - VAR_15);
 VAR_18 = (VAR_29 - 1) >> VAR_15;
 VAR_28.b_page = VAR_8;
 for (VAR_21 = 0; VAR_21 < VAR_17; ) {

  VAR_28.b_state = 0;
  VAR_28.b_size = 1 << VAR_15;
  if (VAR_11->get_block(VAR_14, VAR_19, &VAR_28, 1))
   goto confused;
  if (FUNC_9(&VAR_28))
   FUNC_23(VAR_28.b_bdev,
      VAR_28.b_blocknr);
  if (FUNC_5(&VAR_28)) {
   VAR_25 = VAR_28.b_blocknr;
   VAR_26 = VAR_28.b_bdev;
  }
  if (VAR_21) {
   if (VAR_28.b_blocknr != VAR_20[VAR_21-1] + 1)
    goto confused;
  }
  VAR_20[VAR_21++] = VAR_28.b_blocknr;
  VAR_24 = FUNC_5(&VAR_28);
  VAR_23 = VAR_28.b_bdev;
  if (VAR_19 == VAR_18)
   break;
  VAR_19++;
 }
 FUNC_0(VAR_21 == 0);

 VAR_22 = VAR_21;

page_is_mapped:
 VAR_16 = VAR_29 >> VAR_3;
 if (VAR_8->index >= VAR_16) {
  unsigned VAR_33 = VAR_29 & (VAR_4 - 1);

  if (VAR_8->index > VAR_16 || !VAR_33)
   goto confused;
  FUNC_25(VAR_8, VAR_33, VAR_4);
 }




 if (VAR_12 && VAR_11->last_block_in_bio != VAR_20[0] - 1)
  VAR_12 = FUNC_15(VAR_5, VAR_12);

alloc_new:
 if (VAR_12 == ((void*)0)) {
  VAR_12 = FUNC_14(VAR_23, VAR_20[0] << (VAR_15 - 9),
    FUNC_4(VAR_23), VAR_1|VAR_6);
  if (VAR_12 == ((void*)0))
   goto confused;
 }






 VAR_27 = VAR_22 << VAR_15;
 if (FUNC_3(VAR_12, VAR_8, VAR_27, 0) < VAR_27) {
  VAR_12 = FUNC_15(VAR_5, VAR_12);
  goto alloc_new;
 }





 if (FUNC_17(VAR_8)) {
  struct buffer_head *VAR_34 = FUNC_16(VAR_8);
  struct buffer_head *VAR_35 = VAR_34;
  unsigned VAR_36 = 0;

  do {
   if (VAR_36++ == VAR_22)
    break;
   FUNC_11(VAR_35);
   VAR_35 = VAR_35->b_this_page;
  } while (VAR_35 != VAR_34);






  if (VAR_7 && FUNC_1(VAR_8))
   FUNC_21(VAR_8);
 }

 FUNC_0(FUNC_2(VAR_8));
 FUNC_18(VAR_8);
 FUNC_22(VAR_8);
 if (VAR_24 || (VAR_22 != VAR_17)) {
  VAR_12 = FUNC_15(VAR_5, VAR_12);
  if (VAR_25) {
   FUNC_24(VAR_26,
     VAR_25, 1 << VAR_15);
  }
 } else {
  VAR_11->last_block_in_bio = VAR_20[VAR_17 - 1];
 }
 goto out;

confused:
 if (VAR_12)
  VAR_12 = FUNC_15(VAR_5, VAR_12);

 if (VAR_11->use_writepage) {
  VAR_30 = VAR_13->a_ops->writepage(VAR_8, VAR_9);
 } else {
  VAR_30 = -VAR_0;
  goto out;
 }



 FUNC_13(VAR_13, VAR_30);
out:
 VAR_11->bio = VAR_12;
 return VAR_30;
}
