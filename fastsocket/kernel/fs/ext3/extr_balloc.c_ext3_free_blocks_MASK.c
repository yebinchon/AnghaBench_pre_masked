
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
typedef int handle_t ;
typedef int ext3_fsblk_t ;


 int FUNC_0 (int *,struct super_block*,int ,unsigned long,unsigned long*) ;
 int FUNC_1 (struct inode*,int ,unsigned long) ;
 int FUNC_2 (struct inode*,unsigned long) ;

void FUNC_3(handle_t *VAR_0, struct inode *VAR_1,
   ext3_fsblk_t VAR_2, unsigned long VAR_3)
{
 struct super_block *VAR_4 = VAR_1->i_sb;
 unsigned long VAR_5;

 FUNC_1(VAR_1, VAR_2, VAR_3);
 FUNC_0(VAR_0, VAR_4, VAR_2, VAR_3, &VAR_5);
 if (VAR_5)
  FUNC_2(VAR_1, VAR_5);
 return;
}
