
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize; } ;
struct iovec {int dummy; } ;
struct inode {size_t i_size; struct super_block* i_sb; } ;
typedef size_t loff_t ;


 size_t FUNC_0 (struct iovec const*,unsigned long) ;

__attribute__((used)) static int
FUNC_1(struct inode *VAR_0, const struct iovec *VAR_1,
     unsigned long VAR_2, loff_t VAR_3)
{
 struct super_block *VAR_4 = VAR_0->i_sb;
 int VAR_5 = VAR_4->s_blocksize - 1;
 size_t VAR_6 = FUNC_0(VAR_1, VAR_2);
 loff_t VAR_7 = VAR_3 + VAR_6;

 if (VAR_3 >= VAR_0->i_size)
  return 0;

 if ((VAR_3 & VAR_5) || (VAR_7 & VAR_5))
  return 1;

 return 0;
}
