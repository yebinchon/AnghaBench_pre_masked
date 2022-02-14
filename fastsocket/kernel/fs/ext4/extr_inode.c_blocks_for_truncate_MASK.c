
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_blocks; TYPE_1__* i_sb; } ;
typedef int ext4_lblk_t ;
struct TYPE_2__ {int s_blocksize_bits; } ;


 unsigned long FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static unsigned long FUNC_1(struct inode *VAR_1)
{
 ext4_lblk_t VAR_2;

 VAR_2 = VAR_1->i_blocks >> (VAR_1->i_sb->s_blocksize_bits - 9);







 if (VAR_2 < 2)
  VAR_2 = 2;



 if (VAR_2 > VAR_0)
  VAR_2 = VAR_0;

 return FUNC_0(VAR_1->i_sb) + VAR_2;
}
