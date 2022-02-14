
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize_bits; } ;
struct inode {int i_size; struct super_block* i_sb; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct super_block*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct inode*,int ) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_2)
{
 struct super_block *VAR_3 = VAR_2->i_sb;

 if (FUNC_0(VAR_2->i_sb,
       VAR_0) &&
     ((FUNC_1(VAR_2, VAR_1)) ||
      ((VAR_2->i_size >> VAR_3->s_blocksize_bits) == 1)))
  return 1;

 return 0;
}
