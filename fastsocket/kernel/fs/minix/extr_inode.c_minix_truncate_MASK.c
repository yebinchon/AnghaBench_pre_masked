
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;

void FUNC_6(struct inode * VAR_1)
{
 if (!(FUNC_3(VAR_1->i_mode) || FUNC_1(VAR_1->i_mode) || FUNC_2(VAR_1->i_mode)))
  return;
 if (FUNC_0(VAR_1) == VAR_0)
  FUNC_4(VAR_1);
 else
  FUNC_5(VAR_1);
}
