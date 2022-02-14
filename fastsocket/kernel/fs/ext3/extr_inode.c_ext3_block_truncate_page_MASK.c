
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {TYPE_1__* i_sb; } ;
struct buffer_head {struct buffer_head* b_this_page; } ;
struct address_space {struct inode* host; } ;
typedef int loff_t ;
typedef int handle_t ;
typedef int ext3_fsblk_t ;
struct TYPE_2__ {unsigned int s_blocksize; int s_blocksize_bits; } ;


 int FUNC_0 (struct buffer_head*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct page*,unsigned int,int ) ;
 int FUNC_6 (struct inode*,unsigned int,struct buffer_head*,int ) ;
 int FUNC_7 (int *,struct buffer_head*) ;
 int FUNC_8 (int *,struct buffer_head*) ;
 int FUNC_9 (int *,struct buffer_head*) ;
 scalar_t__ FUNC_10 (struct inode*) ;
 scalar_t__ FUNC_11 (struct inode*) ;
 scalar_t__ FUNC_12 (struct inode*) ;
 int FUNC_13 (int ,int,struct buffer_head**) ;
 int FUNC_14 (struct buffer_head*) ;
 struct buffer_head* FUNC_15 (struct page*) ;
 int FUNC_16 (struct page*) ;
 int FUNC_17 (struct page*) ;
 int FUNC_18 (struct buffer_head*) ;
 int FUNC_19 (struct page*) ;
 scalar_t__ FUNC_20 (TYPE_1__*,int ) ;
 int FUNC_21 (struct page*) ;
 int FUNC_22 (struct buffer_head*) ;
 int FUNC_23 (struct page*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_24(handle_t *VAR_5, struct page *VAR_6,
  struct address_space *VAR_7, loff_t VAR_8)
{
 ext3_fsblk_t VAR_9 = VAR_8 >> VAR_2;
 unsigned VAR_10 = VAR_8 & (VAR_3-1);
 unsigned VAR_11, VAR_12, VAR_13, VAR_14;
 struct inode *VAR_15 = VAR_7->host;
 struct buffer_head *VAR_16;
 int VAR_17 = 0;

 VAR_11 = VAR_15->i_sb->s_blocksize;
 VAR_13 = VAR_11 - (VAR_10 & (VAR_11 - 1));
 VAR_12 = VAR_9 << (VAR_2 - VAR_15->i_sb->s_blocksize_bits);





 if (!FUNC_17(VAR_6) && FUNC_20(VAR_15->i_sb, VAR_1) &&
      FUNC_12(VAR_15) && FUNC_1(VAR_6)) {
  FUNC_23(VAR_6, VAR_10, VAR_13);
  FUNC_19(VAR_6);
  goto unlock;
 }

 if (!FUNC_17(VAR_6))
  FUNC_5(VAR_6, VAR_11, 0);


 VAR_16 = FUNC_15(VAR_6);
 VAR_14 = VAR_11;
 while (VAR_10 >= VAR_14) {
  VAR_16 = VAR_16->b_this_page;
  VAR_12++;
  VAR_14 += VAR_11;
 }

 VAR_17 = 0;
 if (FUNC_2(VAR_16)) {
  FUNC_0(VAR_16, "freed: skip");
  goto unlock;
 }

 if (!FUNC_3(VAR_16)) {
  FUNC_0(VAR_16, "unmapped");
  FUNC_6(VAR_15, VAR_12, VAR_16, 0);

  if (!FUNC_3(VAR_16)) {
   FUNC_0(VAR_16, "still unmapped");
   goto unlock;
  }
 }


 if (FUNC_1(VAR_6))
  FUNC_18(VAR_16);

 if (!FUNC_4(VAR_16)) {
  VAR_17 = -VAR_0;
  FUNC_13(VAR_4, 1, &VAR_16);
  FUNC_22(VAR_16);

  if (!FUNC_4(VAR_16))
   goto unlock;
 }

 if (FUNC_10(VAR_15)) {
  FUNC_0(VAR_16, "get write access");
  VAR_17 = FUNC_9(VAR_5, VAR_16);
  if (VAR_17)
   goto unlock;
 }

 FUNC_23(VAR_6, VAR_10, VAR_13);
 FUNC_0(VAR_16, "zeroed end of block");

 VAR_17 = 0;
 if (FUNC_10(VAR_15)) {
  VAR_17 = FUNC_8(VAR_5, VAR_16);
 } else {
  if (FUNC_11(VAR_15))
   VAR_17 = FUNC_7(VAR_5, VAR_16);
  FUNC_14(VAR_16);
 }

unlock:
 FUNC_21(VAR_6);
 FUNC_16(VAR_6);
 return VAR_17;
}
