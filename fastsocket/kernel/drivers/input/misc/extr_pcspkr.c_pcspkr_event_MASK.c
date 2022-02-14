
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct input_dev *VAR_3, unsigned int VAR_4, unsigned int VAR_5, int VAR_6)
{
 unsigned int VAR_7 = 0;
 unsigned long VAR_8;

 if (VAR_4 != VAR_0)
  return -1;

 switch (VAR_5) {
  case 129: if (VAR_6) VAR_6 = 1000;
  case 128: break;
  default: return -1;
 }

 if (VAR_6 > 20 && VAR_6 < 32767)
  VAR_7 = VAR_1 / VAR_6;

 FUNC_3(&VAR_2, VAR_8);

 if (VAR_7) {

  FUNC_2(0xB6, 0x43);

  FUNC_2(VAR_7 & 0xff, 0x42);
  FUNC_1((VAR_7 >> 8) & 0xff, 0x42);

  FUNC_2(FUNC_0(0x61) | 3, 0x61);
 } else {

  FUNC_1(FUNC_0(0x61) & 0xFC, 0x61);
 }

 FUNC_4(&VAR_2, VAR_8);

 return 0;
}
