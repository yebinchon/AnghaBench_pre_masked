
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct inode*) ;

int FUNC_6(struct inode *VAR_0)
{
 if (FUNC_0(VAR_0) || FUNC_1(VAR_0))
  return 0;
 if (FUNC_4(VAR_0->i_mode))
  return 1;
 if (FUNC_2(VAR_0->i_mode))
  return 1;
 if (FUNC_3(VAR_0->i_mode))
  return !FUNC_5(VAR_0);
 return 0;
}
