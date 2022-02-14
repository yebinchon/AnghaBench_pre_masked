
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct dio_submit {unsigned int blkbits; unsigned int first_block_in_page; unsigned long block_in_file; unsigned long final_block_in_request; int blocks_available; int next_block_for_io; int blkfactor; int boundary; int start_zero_done; } ;
struct dio {int rw; int inode; } ;
struct buffer_head {int b_size; int b_blocknr; } ;
typedef scalar_t__ loff_t ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct page*) ;
 unsigned int const VAR_1 ;
 int FUNC_3 (struct page*) ;
 int VAR_2 ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 scalar_t__ FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct dio*,struct buffer_head*) ;
 struct page* FUNC_8 (struct dio*,struct dio_submit*) ;
 int FUNC_9 (struct dio*,struct dio_submit*,int ,struct buffer_head*) ;
 int FUNC_10 (struct dio*,struct dio_submit*,struct buffer_head*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct page*) ;
 int FUNC_13 (struct dio*,struct dio_submit*,struct page*,unsigned int,unsigned int,unsigned long,struct buffer_head*) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (struct page*,unsigned int,int) ;

__attribute__((used)) static int FUNC_16(struct dio *VAR_3, struct dio_submit *VAR_4,
   struct buffer_head *VAR_5)
{
 const unsigned VAR_6 = VAR_4->blkbits;
 const unsigned VAR_7 = VAR_1 >> VAR_6;
 struct page *VAR_8;
 unsigned VAR_9;
 int VAR_10 = 0;


 VAR_9 = VAR_4->first_block_in_page;

 while (VAR_4->block_in_file < VAR_4->final_block_in_request) {
  VAR_8 = FUNC_8(VAR_3, VAR_4);
  if (FUNC_2(VAR_8)) {
   VAR_10 = FUNC_3(VAR_8);
   goto out;
  }

  while (VAR_9 < VAR_7) {
   unsigned VAR_11 = VAR_9 << VAR_6;
   unsigned VAR_12;
   unsigned VAR_13;
   unsigned VAR_14;

   if (VAR_4->blocks_available == 0) {



    unsigned long VAR_15;
    unsigned long VAR_16;

    VAR_10 = FUNC_10(VAR_3, VAR_4, VAR_5);
    if (VAR_10) {
     FUNC_12(VAR_8);
     goto out;
    }
    if (!FUNC_5(VAR_5))
     goto do_holes;

    VAR_4->blocks_available =
      VAR_5->b_size >> VAR_4->blkbits;
    VAR_4->next_block_for_io =
     VAR_5->b_blocknr << VAR_4->blkfactor;
    if (FUNC_6(VAR_5))
     FUNC_7(VAR_3, VAR_5);

    if (!VAR_4->blkfactor)
     goto do_holes;

    VAR_15 = (1 << VAR_4->blkfactor) - 1;
    VAR_16 = (VAR_4->block_in_file & VAR_15);
    if (!FUNC_6(VAR_5))
     VAR_4->next_block_for_io += VAR_16;
    VAR_4->blocks_available -= VAR_16;
   }
do_holes:

   if (!FUNC_5(VAR_5)) {
    loff_t VAR_17;


    if (VAR_3->rw & VAR_2) {
     FUNC_12(VAR_8);
     return -VAR_0;
    }





    VAR_17 = FUNC_0(FUNC_11(VAR_3->inode),
       1 << VAR_6);
    if (VAR_4->block_in_file >=
      VAR_17 >> VAR_6) {

     FUNC_12(VAR_8);
     goto out;
    }
    FUNC_15(VAR_8, VAR_9 << VAR_6,
      1 << VAR_6);
    VAR_4->block_in_file++;
    VAR_9++;
    goto next_block;
   }






   if (FUNC_14(VAR_4->blkfactor && !VAR_4->start_zero_done))
    FUNC_9(VAR_3, VAR_4, 0, VAR_5);





   VAR_13 = VAR_4->blocks_available;
   VAR_14 = (VAR_1 - VAR_11) >> VAR_6;
   if (VAR_13 > VAR_14)
    VAR_13 = VAR_14;
   VAR_14 = VAR_4->final_block_in_request - VAR_4->block_in_file;
   if (VAR_13 > VAR_14)
    VAR_13 = VAR_14;
   VAR_12 = VAR_13 << VAR_6;
   FUNC_1(VAR_12 == 0);

   VAR_4->boundary = FUNC_4(VAR_5);
   VAR_10 = FUNC_13(VAR_3, VAR_4, VAR_8,
        VAR_11,
        VAR_12,
        VAR_4->next_block_for_io,
        VAR_5);
   if (VAR_10) {
    FUNC_12(VAR_8);
    goto out;
   }
   VAR_4->next_block_for_io += VAR_13;

   VAR_4->block_in_file += VAR_13;
   VAR_9 += VAR_13;
   VAR_4->blocks_available -= VAR_13;
next_block:
   FUNC_1(VAR_4->block_in_file > VAR_4->final_block_in_request);
   if (VAR_4->block_in_file == VAR_4->final_block_in_request)
    break;
  }


  FUNC_12(VAR_8);
  VAR_9 = 0;
 }
out:
 return VAR_10;
}
