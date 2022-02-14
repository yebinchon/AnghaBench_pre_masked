
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {TYPE_1__* s_root; } ;
struct inode {int i_count; } ;
struct TYPE_2__ {int d_alias; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct super_block *VAR_2, struct inode *VAR_3)
{

 if (VAR_2->s_root == ((void*)0)) {
  VAR_2->s_root = FUNC_1(VAR_3);
  if (VAR_2->s_root == ((void*)0)) {
   FUNC_2(VAR_3);
   return -VAR_0;
  }

  FUNC_0(&VAR_3->i_count);
  FUNC_4(&VAR_1);
  FUNC_3(&VAR_2->s_root->d_alias);
  FUNC_5(&VAR_1);
 }
 return 0;
}
