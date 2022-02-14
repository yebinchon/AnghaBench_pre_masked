
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u32 ;
struct super_block {int dummy; } ;
struct page {int index; TYPE_1__* mapping; } ;
struct inode {scalar_t__ i_ino; struct super_block* i_sb; } ;
struct file {int dummy; } ;
struct buffer_head {int dummy; } ;
struct TYPE_4__ {unsigned int s_data_blksize; } ;
struct TYPE_3__ {struct inode* host; } ;


 unsigned int FUNC_0 (struct buffer_head*) ;
 TYPE_2__* FUNC_1 (struct super_block*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct buffer_head*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_4 (struct buffer_head*) ;
 struct buffer_head* FUNC_5 (struct inode*,unsigned int,int ) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (char*,unsigned int,unsigned int) ;
 unsigned int FUNC_11 (unsigned int,unsigned int) ;
 char* FUNC_12 (struct page*) ;
 int FUNC_13 (char*,unsigned int,int,unsigned int,unsigned int) ;

__attribute__((used)) static int
FUNC_14(struct file *VAR_2, struct page *VAR_3, unsigned VAR_4, unsigned VAR_5)
{
 struct inode *VAR_6 = VAR_3->mapping->host;
 struct super_block *VAR_7 = VAR_6->i_sb;
 struct buffer_head *VAR_8;
 char *VAR_9;
 u32 VAR_10, VAR_11, VAR_12;
 u32 VAR_13;

 FUNC_13("AFFS: read_page(%u, %ld, %d, %d)\n", (u32)VAR_6->i_ino, VAR_3->index, VAR_4, VAR_5);
 FUNC_2(VAR_4 > VAR_5 || VAR_5 > VAR_1);
 FUNC_8(VAR_3);
 VAR_9 = FUNC_12(VAR_3);
 VAR_12 = FUNC_1(VAR_7)->s_data_blksize;
 VAR_13 = (VAR_3->index << VAR_0) + VAR_4;
 VAR_10 = VAR_13 / VAR_12;
 VAR_11 = VAR_13 % VAR_12;

 while (VAR_4 < VAR_5) {
  VAR_8 = FUNC_5(VAR_6, VAR_10, 0);
  if (FUNC_3(VAR_8))
   return FUNC_4(VAR_8);
  VAR_13 = FUNC_11(VAR_12 - VAR_11, VAR_5 - VAR_4);
  FUNC_2(VAR_4 + VAR_13 > VAR_5 || VAR_13 > VAR_12);
  FUNC_10(VAR_9 + VAR_4, FUNC_0(VAR_8) + VAR_11, VAR_13);
  FUNC_6(VAR_8);
  VAR_10++;
  VAR_4 += VAR_13;
  VAR_11 = 0;
 }
 FUNC_7(VAR_3);
 FUNC_9(VAR_3);
 return 0;
}
