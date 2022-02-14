
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct block_device {unsigned int bd_block_size; TYPE_1__* bd_inode; } ;
typedef unsigned int loff_t ;
struct TYPE_2__ {unsigned int i_size; int i_blkbits; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (struct block_device*) ;
 int FUNC_1 (unsigned int) ;

void FUNC_2(struct block_device *VAR_1, loff_t VAR_2)
{
 unsigned VAR_3 = FUNC_0(VAR_1);

 VAR_1->bd_inode->i_size = VAR_2;
 while (VAR_3 < VAR_0) {
  if (VAR_2 & VAR_3)
   break;
  VAR_3 <<= 1;
 }
 VAR_1->bd_block_size = VAR_3;
 VAR_1->bd_inode->i_blkbits = FUNC_1(VAR_3);
}
