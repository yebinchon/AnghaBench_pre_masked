
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {unsigned int i_blkbits; } ;
struct buffer_head {unsigned int b_size; } ;
typedef int sector_t ;


 int FUNC_0 (struct inode*,int ,unsigned int,struct buffer_head*,int) ;

int FUNC_1(struct inode *VAR_0, sector_t VAR_1, struct buffer_head *VAR_2, int VAR_3)
{
 unsigned VAR_4 = VAR_2->b_size >> VAR_0->i_blkbits;
 int VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_4,
         VAR_2, VAR_3);
 if (VAR_5 > 0) {
  VAR_2->b_size = (VAR_5 << VAR_0->i_blkbits);
  VAR_5 = 0;
 }
 return VAR_5;

}
