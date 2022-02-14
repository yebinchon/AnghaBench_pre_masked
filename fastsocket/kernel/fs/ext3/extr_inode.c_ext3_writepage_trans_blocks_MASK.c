
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_1);
 int VAR_3 = (VAR_0 % VAR_2) ? 5 : 3;
 int VAR_4;

 if (FUNC_2(VAR_1))
  VAR_4 = 3 * (VAR_2 + VAR_3) + 2;
 else
  VAR_4 = 2 * (VAR_2 + VAR_3) + 2;







 return VAR_4;
}
