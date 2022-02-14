
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;





 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(struct inode *VAR_1, struct file *VAR_2, unsigned int VAR_3, unsigned long VAR_4)
{
 int VAR_5 = 0;

 switch (VAR_3) {
 case 129:
  FUNC_3(FUNC_1() & ~0x0020);
  break;
 case 128:
  FUNC_3(FUNC_1() | 0x0020);
  FUNC_4(FUNC_2() | 0x0080);
  break;
 case 130:
  FUNC_4(FUNC_2() | 0x0080);
  break;
 default:
  VAR_5 = -VAR_0;
  break;
 }

 FUNC_0();

 return VAR_5;
}
