
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;


 scalar_t__ FUNC_0 (struct input_dev*) ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct input_dev *VAR_2, unsigned int VAR_3, unsigned int VAR_4, int VAR_5)
{
 unsigned int VAR_6 = (unsigned int) FUNC_0(VAR_2);
 unsigned int VAR_7 = 0;

 if (VAR_3 != VAR_0)
  return -1;

 switch (VAR_4) {
  case 129:
   if (VAR_5)
    VAR_5 = 1000;
  case 128:
   break;
  default:
   return -1;
 }

 if (VAR_5 > 20 && VAR_5 < 32767)

  VAR_7 = (FUNC_1() / (VAR_5 * 4)) - 1;




 FUNC_2(VAR_6, VAR_7);

 return 0;
}
