
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;


 unsigned int VAR_0 ;


 int FUNC_0 (unsigned int,int) ;

__attribute__((used)) static int FUNC_1(struct input_dev *VAR_1, unsigned int VAR_2, unsigned int VAR_3, int VAR_4)
{
 unsigned int VAR_5 = 0;

 if (VAR_2 != VAR_0)
  return -1;

 switch (VAR_3) {
  case 129: if (VAR_4) VAR_4 = 1000;
  case 128: break;
  default: return -1;
 }

 if (VAR_4 > 20 && VAR_4 < 32767)
  VAR_5 = 1193182 / VAR_4;

 FUNC_0(VAR_5, -1);

 return 0;
}
