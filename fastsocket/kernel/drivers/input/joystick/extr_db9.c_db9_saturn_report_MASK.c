
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 unsigned char* VAR_7 ;
 int FUNC_0 (struct input_dev*,int ,int) ;
 int FUNC_1 (struct input_dev*,int ,unsigned char) ;

__attribute__((used)) static int FUNC_2(unsigned char VAR_8, unsigned char VAR_9[60], struct input_dev *VAR_10[], int VAR_11, int VAR_12)
{
 struct input_dev *VAR_13;
 int VAR_14, VAR_15, VAR_16;

 VAR_14 = (VAR_8 == 0x41) ? 60 : 10;
 for (VAR_16 = 0; VAR_16 < VAR_14 && VAR_11 < VAR_12; VAR_16 += 10, VAR_11++) {
  VAR_13 = VAR_10[VAR_11];
  switch (VAR_9[VAR_16]) {
  case 0x16:
   FUNC_0(VAR_13, VAR_4[5], VAR_9[VAR_16 + 6]);
  case 0x15:
   FUNC_0(VAR_13, VAR_4[3], VAR_9[VAR_16 + 4]);
   FUNC_0(VAR_13, VAR_4[4], VAR_9[VAR_16 + 5]);
  case 0x13:
   FUNC_0(VAR_13, VAR_4[2], VAR_9[VAR_16 + 3]);
  case 0x34:
  case 0x02:
   FUNC_0(VAR_13, VAR_4[0], !(VAR_9[VAR_16 + 1] & 128) - !(VAR_9[VAR_16 + 1] & 64));
   FUNC_0(VAR_13, VAR_4[1], !(VAR_9[VAR_16 + 1] & 32) - !(VAR_9[VAR_16 + 1] & 16));
   for (VAR_15 = 0; VAR_15 < 9; VAR_15++)
    FUNC_1(VAR_13, VAR_5[VAR_15], ~VAR_9[VAR_16 + VAR_6[VAR_15]] & VAR_7[VAR_15]);
   break;
  case 0x19:
   FUNC_0(VAR_13, VAR_4[0], !(VAR_9[VAR_16 + 1] & 128) - !(VAR_9[VAR_16 + 1] & 64));
   FUNC_0(VAR_13, VAR_4[1], !(VAR_9[VAR_16 + 1] & 32) - !(VAR_9[VAR_16 + 1] & 16));
   for (VAR_15 = 0; VAR_15 < 9; VAR_15++)
    FUNC_1(VAR_13, VAR_5[VAR_15], ~VAR_9[VAR_16 + VAR_6[VAR_15]] & VAR_7[VAR_15]);
   FUNC_0(VAR_13, VAR_4[2], VAR_9[VAR_16 + 3]);
   FUNC_0(VAR_13, VAR_4[3], VAR_9[VAR_16 + 4]);
   FUNC_0(VAR_13, VAR_4[4], VAR_9[VAR_16 + 5]);




   FUNC_0(VAR_13, VAR_4[6], VAR_9[VAR_16 + 7]);
   FUNC_0(VAR_13, VAR_4[7], VAR_9[VAR_16 + 8]);
   FUNC_0(VAR_13, VAR_4[5], VAR_9[VAR_16 + 9]);
   break;
  case 0xd3:
   FUNC_1(VAR_13, VAR_0, VAR_9[VAR_16 + 3] & 0x80);
   FUNC_0(VAR_13, VAR_4[2], VAR_9[VAR_16 + 3] & 0x7f);
   break;
  case 0xe3:
   FUNC_1(VAR_13, VAR_3, VAR_9[VAR_16 + 1] & 0x08);
   FUNC_1(VAR_13, VAR_0, VAR_9[VAR_16 + 1] & 0x04);
   FUNC_1(VAR_13, VAR_2, VAR_9[VAR_16 + 1] & 0x02);
   FUNC_1(VAR_13, VAR_1, VAR_9[VAR_16 + 1] & 0x01);
   FUNC_0(VAR_13, VAR_4[2], VAR_9[VAR_16 + 2] ^ 0x80);
   FUNC_0(VAR_13, VAR_4[3], (0xff-(VAR_9[VAR_16 + 3] ^ 0x80))+1);
   break;
  case 0xff:
  default:
   FUNC_0(VAR_13, VAR_4[0], 0);
   FUNC_0(VAR_13, VAR_4[1], 0);
   for (VAR_15 = 0; VAR_15 < 9; VAR_15++)
    FUNC_1(VAR_13, VAR_5[VAR_15], 0);
   break;
  }
 }
 return VAR_11;
}
