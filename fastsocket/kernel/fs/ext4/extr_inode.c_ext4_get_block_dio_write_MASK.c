
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {unsigned int i_blkbits; int i_ino; } ;
struct buffer_head {unsigned int b_size; } ;
typedef int sector_t ;
typedef int handle_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct inode*,unsigned int) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (int *,struct inode*,int ,unsigned int,struct buffer_head*,int) ;
 int * FUNC_5 (struct inode*,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_2, sector_t VAR_3,
     struct buffer_head *VAR_4, int VAR_5)
{
 handle_t *VAR_6 = ((void*)0);
 int VAR_7 = 0;
 unsigned VAR_8 = VAR_4->b_size >> VAR_2->i_blkbits;
 int VAR_9;

 FUNC_3("ext4_get_block_dio_write: inode %lu, create flag %d\n",
     VAR_2->i_ino, VAR_5);
 VAR_5 = VAR_1;

 if (VAR_8 > VAR_0)
  VAR_8 = VAR_0;
 VAR_9 = FUNC_2(VAR_2, VAR_8);
 VAR_6 = FUNC_5(VAR_2, VAR_9);
 if (FUNC_0(VAR_6)) {
  VAR_7 = FUNC_1(VAR_6);
  goto out;
 }
 VAR_7 = FUNC_4(VAR_6, VAR_2, VAR_3, VAR_8, VAR_4,
         VAR_5);
 if (VAR_7 > 0) {
  VAR_4->b_size = (VAR_7 << VAR_2->i_blkbits);
  VAR_7 = 0;
 }
 FUNC_6(VAR_6);
out:
 return VAR_7;
}
