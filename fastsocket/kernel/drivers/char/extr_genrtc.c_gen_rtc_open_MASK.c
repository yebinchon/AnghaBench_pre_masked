
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_5, struct file *VAR_6)
{
 FUNC_0();
 if (VAR_3 & VAR_1) {
  FUNC_1();
  return -VAR_0;
 }

 VAR_3 |= VAR_1;
 VAR_2 = 0;
 VAR_4 = 0;
 FUNC_1();

 return 0;
}
