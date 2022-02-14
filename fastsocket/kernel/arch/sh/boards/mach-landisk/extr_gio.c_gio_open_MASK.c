
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_rdev; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_4, struct file *VAR_5)
{
 int VAR_6;
 int VAR_7 = -VAR_2;

 FUNC_1();
 VAR_6 = FUNC_0(VAR_4->i_rdev);
 if (VAR_6 < VAR_0) {
  if (VAR_3 > 0) {
   VAR_7 = -VAR_1;
  } else {
   VAR_3++;
   VAR_7 = 0;
  }
 }
 FUNC_2();
 return VAR_7;
}
