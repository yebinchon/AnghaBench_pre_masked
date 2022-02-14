
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int absbit; } ;
 int FUNC_0 (struct input_dev*,short,int,int,int,int) ;
 int FUNC_1 (short,int ) ;

__attribute__((used)) static void FUNC_2(struct input_dev *VAR_0, signed short VAR_1)
{
 FUNC_1(VAR_1, VAR_0->absbit);

 switch (VAR_1) {
 case 130:
 case 129:
 case 133:
 case 132:
  FUNC_0(VAR_0, VAR_1, -32768, 32767, 16, 128);
  break;
 case 128:
 case 131:
  FUNC_0(VAR_0, VAR_1, 0, 255, 0, 0);
  break;
 case 135:
 case 134:
  FUNC_0(VAR_0, VAR_1, -1, 1, 0, 0);
  break;
 }
}
