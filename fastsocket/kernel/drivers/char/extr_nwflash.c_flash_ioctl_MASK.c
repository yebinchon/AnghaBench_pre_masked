
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct inode *VAR_3, struct file *VAR_4, unsigned int VAR_5, unsigned long VAR_6)
{
 switch (VAR_5) {
 case 129:
  VAR_1 = 0;
  VAR_2 = 0;
  break;

 case 128:
  VAR_2 = 1;
  break;

 case 130:
  VAR_1 = 1;
  break;

 default:
  VAR_1 = 0;
  VAR_2 = 0;
  return -VAR_0;
 }
 return 0;
}
