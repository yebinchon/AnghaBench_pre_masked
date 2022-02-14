
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {TYPE_1__* i_sb; } ;
struct gfs2_inode {int i_gl; } ;
struct buffer_head {struct buffer_head* b_this_page; } ;
struct address_space {struct inode* host; } ;
typedef int loff_t ;
struct TYPE_2__ {unsigned int s_blocksize; int s_blocksize_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gfs2_inode* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int VAR_4 ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct page*,unsigned int,int ) ;
 struct page* FUNC_5 (struct address_space*,unsigned long,int ) ;
 int FUNC_6 (struct inode*,unsigned int,struct buffer_head*,int ) ;
 int FUNC_7 (struct gfs2_inode*) ;
 int FUNC_8 (int ,struct buffer_head*) ;
 int FUNC_9 (int ,int,struct buffer_head**) ;
 int FUNC_10 (struct buffer_head*) ;
 struct buffer_head* FUNC_11 (struct page*) ;
 int FUNC_12 (struct page*) ;
 int FUNC_13 (struct page*) ;
 int FUNC_14 (struct buffer_head*) ;
 int FUNC_15 (struct page*) ;
 int FUNC_16 (struct buffer_head*) ;
 int FUNC_17 (struct page*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_18(struct address_space *VAR_5, loff_t VAR_6)
{
 struct inode *VAR_7 = VAR_5->host;
 struct gfs2_inode *VAR_8 = FUNC_0(VAR_7);
 unsigned long VAR_9 = VAR_6 >> VAR_2;
 unsigned VAR_10 = VAR_6 & (VAR_3-1);
 unsigned VAR_11, VAR_12, VAR_13, VAR_14;
 struct buffer_head *VAR_15;
 struct page *VAR_16;
 int VAR_17;

 VAR_16 = FUNC_5(VAR_5, VAR_9, VAR_1);
 if (!VAR_16)
  return 0;

 VAR_11 = VAR_7->i_sb->s_blocksize;
 VAR_13 = VAR_11 - (VAR_10 & (VAR_11 - 1));
 VAR_12 = VAR_9 << (VAR_2 - VAR_7->i_sb->s_blocksize_bits);

 if (!FUNC_13(VAR_16))
  FUNC_4(VAR_16, VAR_11, 0);


 VAR_15 = FUNC_11(VAR_16);
 VAR_14 = VAR_11;
 while (VAR_10 >= VAR_14) {
  VAR_15 = VAR_15->b_this_page;
  VAR_12++;
  VAR_14 += VAR_11;
 }

 VAR_17 = 0;

 if (!FUNC_2(VAR_15)) {
  FUNC_6(VAR_7, VAR_12, VAR_15, 0);

  if (!FUNC_2(VAR_15))
   goto unlock;
 }


 if (FUNC_1(VAR_16))
  FUNC_14(VAR_15);

 if (!FUNC_3(VAR_15)) {
  VAR_17 = -VAR_0;
  FUNC_9(VAR_4, 1, &VAR_15);
  FUNC_16(VAR_15);

  if (!FUNC_3(VAR_15))
   goto unlock;
  VAR_17 = 0;
 }

 if (!FUNC_7(VAR_8))
  FUNC_8(VAR_8->i_gl, VAR_15);

 FUNC_17(VAR_16, VAR_10, VAR_13);
 FUNC_10(VAR_15);
unlock:
 FUNC_15(VAR_16);
 FUNC_12(VAR_16);
 return VAR_17;
}
