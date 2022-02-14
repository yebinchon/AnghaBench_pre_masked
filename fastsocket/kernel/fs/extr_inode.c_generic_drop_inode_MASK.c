
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_nlink; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;

void FUNC_2(struct inode *VAR_0)
{
 if (!VAR_0->i_nlink)
  FUNC_0(VAR_0);
 else
  FUNC_1(VAR_0);
}
