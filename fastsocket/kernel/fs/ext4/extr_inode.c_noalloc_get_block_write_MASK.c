
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {unsigned int i_blkbits; TYPE_1__* i_sb; } ;
struct buffer_head {unsigned int b_size; } ;
typedef int sector_t ;
struct TYPE_2__ {unsigned int s_blocksize; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct inode*,int ,unsigned int,struct buffer_head*,int ) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, sector_t VAR_1,
       struct buffer_head *VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 unsigned VAR_5 = VAR_2->b_size >> VAR_0->i_blkbits;

 FUNC_0(VAR_2->b_size != VAR_0->i_sb->s_blocksize);





 VAR_4 = FUNC_1(((void*)0), VAR_0, VAR_1, VAR_5, VAR_2, 0);
 if (VAR_4 > 0) {
  VAR_2->b_size = (VAR_4 << VAR_0->i_blkbits);
  VAR_4 = 0;
 }
 return VAR_4;
}
