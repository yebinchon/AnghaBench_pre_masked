
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_0, int VAR_1,
          int VAR_2)
{
 int VAR_3;


 if (VAR_2) {






  VAR_3 = VAR_1 / FUNC_0(VAR_0->i_sb);
  return VAR_3 + 3;
 }





 VAR_3 = VAR_1 * 2 + 1;
 return VAR_3;
}
