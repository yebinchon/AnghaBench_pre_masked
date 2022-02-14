
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mpage_da_data {int b_size; scalar_t__ b_blocknr; unsigned long b_state; TYPE_2__* inode; } ;
typedef scalar_t__ sector_t ;
struct TYPE_4__ {int i_blkbits; TYPE_1__* i_sb; } ;
struct TYPE_3__ {int s_blocksize; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (struct mpage_da_data*) ;

__attribute__((used)) static void FUNC_2(struct mpage_da_data *VAR_3,
       sector_t VAR_4, size_t VAR_5,
       unsigned long VAR_6)
{
 sector_t VAR_7;
 int VAR_8 = VAR_3->b_size >> VAR_3->inode->i_blkbits;







 if (VAR_8 >= 8*1024*1024/VAR_3->inode->i_sb->s_blocksize)
  goto flush_it;


 if (!(FUNC_0(VAR_3->inode, VAR_1))) {
  if (VAR_8 >= VAR_2) {






   goto flush_it;
  } else if ((VAR_8 + (VAR_5 >> VAR_3->inode->i_blkbits)) >
    VAR_2) {





   VAR_5 = (VAR_2 - VAR_8) <<
      VAR_3->inode->i_blkbits;

  }
 }



 if (VAR_3->b_size == 0) {
  VAR_3->b_blocknr = VAR_4;
  VAR_3->b_size = VAR_5;
  VAR_3->b_state = VAR_6 & VAR_0;
  return;
 }

 VAR_7 = VAR_3->b_blocknr + VAR_8;



 if (VAR_4 == VAR_7 && (VAR_6 & VAR_0) == VAR_3->b_state) {
  VAR_3->b_size += VAR_5;
  return;
 }

flush_it:




 FUNC_1(VAR_3);
 return;
}
