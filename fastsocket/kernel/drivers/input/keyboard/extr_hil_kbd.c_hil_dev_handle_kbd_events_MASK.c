
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct hil_dev {int idx4; int* data; struct input_dev* dev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;


 int VAR_6 ;






 unsigned int* VAR_7 ;
 unsigned int* VAR_8 ;
 int FUNC_0 (struct input_dev*,unsigned int,int) ;
 int FUNC_1 (struct input_dev*) ;

__attribute__((used)) static void FUNC_2(struct hil_dev *VAR_9)
{
 struct input_dev *VAR_10 = VAR_9->dev;
 int VAR_11 = VAR_9->idx4 / 4;
 int VAR_12;

 switch (VAR_9->data[0] & VAR_6) {
 case 133:
  return;

 case 135:
  for (VAR_12 = 1; VAR_12 < VAR_11 - 1; VAR_12++)
   FUNC_0(VAR_10, VAR_9->data[VAR_12] & 0x7f, 1);
  break;

 case 132:
 case 131:
 case 134:
  for (VAR_12 = 1; VAR_12 < VAR_11 - 1; VAR_12++)
   FUNC_0(VAR_10, VAR_9->data[VAR_12], 1);
  break;

 case 130:
  for (VAR_12 = 1; VAR_12 < VAR_11 - 1; VAR_12++) {
   unsigned int VAR_13 = VAR_9->data[VAR_12];
   int VAR_14 = VAR_13 & VAR_1;

   VAR_13 &= (~VAR_1 & 0xff);
   VAR_13 = VAR_7[VAR_13 >> VAR_0];
   FUNC_0(VAR_10, VAR_13, !VAR_14);
  }
  break;

 case 129:
  for (VAR_12 = 1; VAR_12 < VAR_11 - 1; VAR_12++) {
   unsigned int VAR_15 = VAR_9->data[VAR_12];
   int VAR_16 = VAR_15 & VAR_3;

   VAR_15 &= (~VAR_1 & 0xff);
   VAR_15 = VAR_15 >> VAR_2;
   FUNC_0(VAR_10, VAR_15, !VAR_16);
  }
  break;

 case 128:
  for (VAR_12 = 1; VAR_12 < VAR_11 - 1; VAR_12++) {
   unsigned int VAR_17 = VAR_9->data[VAR_12];
   int VAR_18 = VAR_17 & VAR_5;

   VAR_17 &= (~VAR_1 & 0xff);
   VAR_17 = VAR_8[VAR_17 >> VAR_4];
   FUNC_0(VAR_10, VAR_17, !VAR_18);
  }
  break;
 }

 FUNC_1(VAR_10);
}
