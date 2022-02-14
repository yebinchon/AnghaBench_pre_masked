
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
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct page*,unsigned int,int ) ;
 int FUNC_6 (struct inode*,int,struct buffer_head*,int ) ;
 int FUNC_7 (int *,struct inode*,struct buffer_head*) ;
 int FUNC_8 (int *,struct buffer_head*) ;
 scalar_t__ FUNC_9 (struct inode*) ;
 scalar_t__ FUNC_10 (struct inode*) ;
 struct page* FUNC_11 (struct address_space*,int,int) ;
 int FUNC_12 (int ,int,struct buffer_head**) ;
 int FUNC_13 (struct address_space*) ;
 int FUNC_14 (struct buffer_head*) ;
 struct buffer_head* FUNC_15 (struct page*) ;
 int FUNC_16 (struct page*) ;
 int FUNC_17 (struct page*) ;
 int FUNC_18 (struct buffer_head*) ;
 int FUNC_19 (struct page*) ;
 scalar_t__ FUNC_20 (TYPE_1__*,int ) ;
 int FUNC_21 (struct page*) ;
 int FUNC_22 (struct buffer_head*) ;
 int FUNC_23 (struct page*,unsigned int,int) ;

int FUNC_24(handle_t *VAR_7,
  struct address_space *VAR_8, loff_t VAR_9, loff_t VAR_10)
{
 ext4_fsblk_t VAR_11 = VAR_9 >> VAR_3;
 unsigned VAR_12 = VAR_9 & (VAR_4-1);
 unsigned VAR_13, VAR_14, VAR_15;
 ext4_lblk_t VAR_16;
 struct inode *VAR_17 = VAR_8->host;
 struct buffer_head *VAR_18;
 struct page *VAR_19;
 int VAR_20 = 0;

 VAR_19 = FUNC_11(VAR_8, VAR_9 >> VAR_3,
       FUNC_13(VAR_8) & ~VAR_6);
 if (!VAR_19)
  return -VAR_1;

 VAR_13 = VAR_17->i_sb->s_blocksize;
 VAR_14 = VAR_13 - (VAR_12 & (VAR_13 - 1));





 if (VAR_10 > VAR_14 || VAR_10 < 0)
  VAR_10 = VAR_14;

 VAR_16 = VAR_11 << (VAR_3 - VAR_17->i_sb->s_blocksize_bits);





 if (!FUNC_17(VAR_19) && FUNC_20(VAR_17->i_sb, VAR_2) &&
      FUNC_10(VAR_17) && FUNC_1(VAR_19)) {
  FUNC_23(VAR_19, VAR_12, VAR_10);
  FUNC_19(VAR_19);
  goto unlock;
 }

 if (!FUNC_17(VAR_19))
  FUNC_5(VAR_19, VAR_13, 0);


 VAR_18 = FUNC_15(VAR_19);
 VAR_15 = VAR_13;
 while (VAR_12 >= VAR_15) {
  VAR_18 = VAR_18->b_this_page;
  VAR_16++;
  VAR_15 += VAR_13;
 }

 VAR_20 = 0;
 if (FUNC_2(VAR_18)) {
  FUNC_0(VAR_18, "freed: skip");
  goto unlock;
 }

 if (!FUNC_3(VAR_18)) {
  FUNC_0(VAR_18, "unmapped");
  FUNC_6(VAR_17, VAR_16, VAR_18, 0);

  if (!FUNC_3(VAR_18)) {
   FUNC_0(VAR_18, "still unmapped");
   goto unlock;
  }
 }


 if (FUNC_1(VAR_19))
  FUNC_18(VAR_18);

 if (!FUNC_4(VAR_18)) {
  VAR_20 = -VAR_0;
  FUNC_12(VAR_5, 1, &VAR_18);
  FUNC_22(VAR_18);

  if (!FUNC_4(VAR_18))
   goto unlock;
 }

 if (FUNC_9(VAR_17)) {
  FUNC_0(VAR_18, "get write access");
  VAR_20 = FUNC_8(VAR_7, VAR_18);
  if (VAR_20)
   goto unlock;
 }

 FUNC_23(VAR_19, VAR_12, VAR_10);

 FUNC_0(VAR_18, "zeroed end of block");

 VAR_20 = 0;
 if (FUNC_9(VAR_17)) {
  VAR_20 = FUNC_7(VAR_7, VAR_17, VAR_18);
 } else
  FUNC_14(VAR_18);

unlock:
 FUNC_21(VAR_19);
 FUNC_16(VAR_19);
 return VAR_20;
}
