
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int i_mode; int * i_fop; int * i_op; int i_ino; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct inode* FUNC_0 (struct super_block*) ;

int FUNC_1(struct inode **VAR_4, struct super_block *VAR_5)
{
 int VAR_6 = -VAR_1;

 *VAR_4 = FUNC_0(VAR_5);
 if (*VAR_4) {
  (*VAR_4)->i_ino = VAR_0;
  (*VAR_4)->i_op = &VAR_2;
  (*VAR_4)->i_fop = &VAR_3;
  (*VAR_4)->i_mode = 0444;
  VAR_6 = 0;
 }

 return VAR_6;
}
