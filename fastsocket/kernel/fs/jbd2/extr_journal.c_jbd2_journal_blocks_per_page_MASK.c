
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; } ;
struct TYPE_2__ {int s_blocksize_bits; } ;


 int VAR_0 ;

int FUNC_0(struct inode *VAR_1)
{
 return 1 << (VAR_0 - VAR_1->i_sb->s_blocksize_bits);
}
