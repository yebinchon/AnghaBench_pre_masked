
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(int VAR_1, struct inode *VAR_2)
{




 if (FUNC_0(VAR_2->i_mode))
  return 0;
 return (VAR_1 & VAR_0);
}
