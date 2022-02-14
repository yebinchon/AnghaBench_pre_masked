
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_control_block {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,int,int) ;

__attribute__((used)) static int FUNC_1(struct file_control_block *VAR_1, int VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0((unsigned long) VAR_1, VAR_2, 0xfff);
 switch (VAR_3) {
 case 0:
  return 0;
 default:
  return -VAR_0;
 }
}
