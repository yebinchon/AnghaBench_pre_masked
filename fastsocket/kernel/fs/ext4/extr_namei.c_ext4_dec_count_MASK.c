
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_nlink; int i_mode; } ;
typedef int handle_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;

__attribute__((used)) static void FUNC_3(handle_t *VAR_0, struct inode *VAR_1)
{
 FUNC_1(VAR_1);
 if (FUNC_0(VAR_1->i_mode) && VAR_1->i_nlink == 0)
  FUNC_2(VAR_1);
}
