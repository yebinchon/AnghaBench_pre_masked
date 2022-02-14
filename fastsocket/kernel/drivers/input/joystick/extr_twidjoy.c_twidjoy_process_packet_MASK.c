
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twidjoy_button_spec {int bitmask; int bitshift; int * buttons; } ;
struct twidjoy {unsigned char* data; struct input_dev* dev; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct input_dev*,int ,int) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*) ;
 struct twidjoy_button_spec* VAR_2 ;

__attribute__((used)) static void FUNC_3(struct twidjoy *VAR_3)
{
 struct input_dev *VAR_4 = VAR_3->dev;
 unsigned char *VAR_5 = VAR_3->data;
 struct twidjoy_button_spec *VAR_6;
 int VAR_7, VAR_8, VAR_9;

 VAR_7 = ((VAR_5[1] & 0x7f) << 7) | (VAR_5[0] & 0x7f);

 for (VAR_6 = VAR_2; VAR_6->bitmask; VAR_6++) {
  int VAR_10 = (VAR_7 & (VAR_6->bitmask << VAR_6->bitshift)) >> VAR_6->bitshift;
  int VAR_11;

  for (VAR_11 = 0; VAR_11 < VAR_6->bitmask; VAR_11++)
   FUNC_1(VAR_4, VAR_6->buttons[VAR_11], VAR_11+1 == VAR_10);
 }

 VAR_8 = ((VAR_5[4] & 0x07) << 5) | ((VAR_5[3] & 0x7C) >> 2);
 if (VAR_5[4] & 0x08) VAR_8 -= 256;

 VAR_9 = ((VAR_5[3] & 0x01) << 7) | ((VAR_5[2] & 0x7F) >> 0);
 if (VAR_5[3] & 0x02) VAR_9 -= 256;

 FUNC_0(VAR_4, VAR_0, -VAR_8);
 FUNC_0(VAR_4, VAR_1, +VAR_9);

 FUNC_2(VAR_4);
}
