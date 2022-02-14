
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_blkbits; TYPE_1__* i_sb; } ;
struct buffer_head {int b_size; scalar_t__ b_blocknr; } ;
struct block_device {int dummy; } ;
struct TYPE_2__ {struct block_device* s_bdev; } ;


 int FUNC_0 (struct block_device*,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct inode *VAR_0,
          struct buffer_head *VAR_1)
{
 struct block_device *VAR_2 = VAR_0->i_sb->s_bdev;
 int VAR_3, VAR_4;

 VAR_3 = VAR_1->b_size >> VAR_0->i_blkbits;
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  FUNC_0(VAR_2, VAR_1->b_blocknr + VAR_4);
}
