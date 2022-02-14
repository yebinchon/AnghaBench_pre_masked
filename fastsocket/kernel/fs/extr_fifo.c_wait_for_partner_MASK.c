
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_pipe; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct inode* VAR_1, unsigned int *VAR_2)
{
 int VAR_3 = *VAR_2;

 while (VAR_3 == *VAR_2) {
  FUNC_0(VAR_1->i_pipe);
  if (FUNC_1(VAR_0))
   break;
 }
}
