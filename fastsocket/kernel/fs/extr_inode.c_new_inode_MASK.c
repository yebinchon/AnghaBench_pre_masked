
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {unsigned int i_ino; scalar_t__ i_state; } ;


 int FUNC_0 (struct super_block*,int *,struct inode*) ;
 struct inode* FUNC_1 (struct super_block*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

struct inode *FUNC_5(struct super_block *VAR_1)
{





 static unsigned int VAR_2;
 struct inode *VAR_3;

 FUNC_3(&VAR_0);

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3) {
  FUNC_2(&VAR_0);
  FUNC_0(VAR_1, ((void*)0), VAR_3);
  VAR_3->i_ino = ++VAR_2;
  VAR_3->i_state = 0;
  FUNC_4(&VAR_0);
 }
 return VAR_3;
}
