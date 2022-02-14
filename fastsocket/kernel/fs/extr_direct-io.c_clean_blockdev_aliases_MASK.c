
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dio {TYPE_1__* inode; } ;
struct buffer_head {unsigned int b_size; scalar_t__ b_blocknr; int b_bdev; } ;
struct TYPE_2__ {unsigned int i_blkbits; } ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct dio *VAR_0, struct buffer_head *VAR_1)
{
 unsigned VAR_2;
 unsigned VAR_3;

 VAR_3 = VAR_1->b_size >> VAR_0->inode->i_blkbits;

 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  FUNC_0(VAR_1->b_bdev,
       VAR_1->b_blocknr + VAR_2);
 }
}
