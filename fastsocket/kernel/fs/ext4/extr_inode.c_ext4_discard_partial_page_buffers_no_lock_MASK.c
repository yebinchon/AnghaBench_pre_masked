
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int index; } ;
struct inode {TYPE_1__* i_sb; } ;
struct buffer_head {struct buffer_head* b_this_page; int * b_bdev; } ;
typedef int loff_t ;
typedef int handle_t ;
typedef int ext4_lblk_t ;
typedef int ext4_fsblk_t ;
struct TYPE_2__ {unsigned int s_blocksize; int s_blocksize_bits; } ;


 int FUNC_0 (struct buffer_head*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (struct buffer_head*) ;
 int FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (struct buffer_head*) ;
 int FUNC_11 (struct page*,unsigned int,int ) ;
 int FUNC_12 (struct inode*,int,struct buffer_head*,int ) ;
 int FUNC_13 (int *,struct inode*,struct buffer_head*) ;
 int FUNC_14 (int *,struct buffer_head*) ;
 scalar_t__ FUNC_15 (struct inode*) ;
 int FUNC_16 (int ,int,struct buffer_head**) ;
 int FUNC_17 (struct buffer_head*) ;
 struct buffer_head* FUNC_18 (struct page*) ;
 int FUNC_19 (struct page*) ;
 int FUNC_20 (struct buffer_head*) ;
 int FUNC_21 (struct buffer_head*) ;
 int FUNC_22 (struct page*,unsigned int,unsigned int) ;

int FUNC_23(handle_t *VAR_6,
  struct inode *VAR_7, struct page *VAR_8, loff_t VAR_9,
  loff_t VAR_10, int VAR_11)
{
 ext4_fsblk_t VAR_12 = VAR_9 >> VAR_3;
 unsigned int VAR_13 = VAR_9 & (VAR_4-1);
 unsigned int VAR_14, VAR_15, VAR_16;
 ext4_lblk_t VAR_17;
 struct buffer_head *VAR_18;
 int VAR_19 = 0;

 VAR_14 = VAR_7->i_sb->s_blocksize;
 VAR_15 = VAR_4 - VAR_13;

 if (VAR_12 != VAR_8->index)
  return -VAR_0;





 if (VAR_10 > VAR_15 || VAR_10 < 0)
  VAR_10 = VAR_15;

 VAR_17 = VAR_12 << (VAR_3 - VAR_7->i_sb->s_blocksize_bits);

 if (!FUNC_19(VAR_8))
  FUNC_11(VAR_8, VAR_14, 0);


 VAR_18 = FUNC_18(VAR_8);
 VAR_16 = VAR_14;
 while (VAR_13 >= VAR_16) {
  VAR_18 = VAR_18->b_this_page;
  VAR_17++;
  VAR_16 += VAR_14;
 }

 VAR_16 = VAR_13;
 while (VAR_16 < VAR_13 + VAR_10) {
  unsigned int VAR_20, VAR_21;

  VAR_19 = 0;


  VAR_21 = VAR_13 + VAR_10 - VAR_16;


  VAR_20 = VAR_14 - (VAR_16 & (VAR_14-1));





  if (VAR_21 > VAR_20)
   VAR_21 = VAR_20;






  if (VAR_11 & VAR_2 &&
   FUNC_2(VAR_18))
    goto next;


  if (VAR_21 == VAR_14) {
   FUNC_5(VAR_18);
   VAR_18->b_bdev = ((void*)0);
   FUNC_6(VAR_18);
   FUNC_8(VAR_18);
   FUNC_7(VAR_18);
   FUNC_4(VAR_18);
   FUNC_9(VAR_18);
   FUNC_10(VAR_18);
   FUNC_22(VAR_8, VAR_16, VAR_21);
   FUNC_0(VAR_18, "Buffer discarded");
   goto next;
  }
  if (!FUNC_2(VAR_18)) {




   FUNC_0(VAR_18, "unmapped");
   FUNC_12(VAR_7, VAR_17, VAR_18, 0);

   if (!FUNC_2(VAR_18)) {
    FUNC_0(VAR_18, "still unmapped");
    goto next;
   }
  }


  if (FUNC_1(VAR_8))
   FUNC_20(VAR_18);

  if (!FUNC_3(VAR_18)) {
   VAR_19 = -VAR_1;
   FUNC_16(VAR_5, 1, &VAR_18);
   FUNC_21(VAR_18);

   if (!FUNC_3(VAR_18))
    goto next;
  }

  if (FUNC_15(VAR_7)) {
   FUNC_0(VAR_18, "get write access");
   VAR_19 = FUNC_14(VAR_6, VAR_18);
   if (VAR_19)
    goto next;
  }

  FUNC_22(VAR_8, VAR_16, VAR_21);

  VAR_19 = 0;
  if (FUNC_15(VAR_7)) {
   VAR_19 = FUNC_13(VAR_6, VAR_7, VAR_18);
  } else
   FUNC_17(VAR_18);

  FUNC_0(VAR_18, "Partial buffer zeroed");
next:
  VAR_18 = VAR_18->b_this_page;
  VAR_17++;
  VAR_16 += VAR_21;
 }

 return VAR_19;
}
