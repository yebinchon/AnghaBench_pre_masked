
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w9966_dev {int width; int height; unsigned char i2c_state; unsigned char brightness; unsigned char contrast; unsigned char color; unsigned char hue; } ;


 int FUNC_0 (char*,...) ;
 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int,int ,int ,int*,int*,unsigned char*) ;
 int FUNC_2 (struct w9966_dev*,unsigned int,unsigned char) ;
 int FUNC_3 (struct w9966_dev*,unsigned int,unsigned char) ;

__attribute__((used)) static int FUNC_4(struct w9966_dev* VAR_8, int VAR_9, int VAR_10, int VAR_11, int VAR_12, int VAR_13, int VAR_14)
{
 unsigned int VAR_15;
 unsigned int VAR_16, VAR_17;
 unsigned char VAR_18, VAR_19;
 unsigned char VAR_20[0x1c];
 unsigned char VAR_21[] = {
  0x21, 0x00, 0xd8, 0x23, 0x00, 0x80, 0x80, 0x00,
  0x88, 0x10, 0x80, 0x40, 0x40, 0x00, 0x01, 0x00,
  0x48, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x71, 0xe7, 0x00, 0x00, 0xc0
 };


 if (VAR_13*VAR_14*2 > VAR_1)
 {
  FUNC_0("capture window exceeds SRAM size!.\n");
  VAR_13 = 200; VAR_14 = 160;
 }

 VAR_13 &= ~0x1;
 if (VAR_13 < 2) VAR_13 = 2;
 if (VAR_14 < 1) VAR_14 = 1;
 if (VAR_13 > VAR_3) VAR_13 = VAR_3;
 if (VAR_14 > VAR_2) VAR_14 = VAR_2;

 VAR_8->width = VAR_13;
 VAR_8->height = VAR_14;

 VAR_16 = 0;
 VAR_17 = VAR_13*VAR_14*2;


 if (
  FUNC_1(VAR_13, VAR_6, VAR_4, &VAR_9, &VAR_11, &VAR_18) != 0 ||
  FUNC_1(VAR_14, VAR_7, VAR_5, &VAR_10, &VAR_12, &VAR_19) != 0
 ) return -1;

 FUNC_0(
  "%dx%d, x: %d<->%d, y: %d<->%d, sx: %d/64, sy: %d/64.\n",
  VAR_13, VAR_14, VAR_9, VAR_11, VAR_10, VAR_12, VAR_18&~0x80, VAR_19&~0x80
 );


 VAR_20[0x00] = 0x00;
 VAR_20[0x01] = 0x18;
 VAR_20[0x02] = VAR_19;
 VAR_20[0x03] = VAR_18;


 VAR_20[0x04] = (VAR_9 & 0x0ff);
 VAR_20[0x05] = (VAR_9 & 0x300)>>8;
 VAR_20[0x06] = (VAR_10 & 0x0ff);
 VAR_20[0x07] = (VAR_10 & 0x300)>>8;
 VAR_20[0x08] = (VAR_11 & 0x0ff);
 VAR_20[0x09] = (VAR_11 & 0x300)>>8;
 VAR_20[0x0a] = (VAR_12 & 0x0ff);

 VAR_20[0x0c] = VAR_0;


 VAR_20[0x0d] = (VAR_16& 0x000ff);
 VAR_20[0x0e] = (VAR_16& 0x0ff00)>>8;
 VAR_20[0x0f] = (VAR_16& 0x70000)>>16;
 VAR_20[0x10] = (VAR_17& 0x000ff);
 VAR_20[0x11] = (VAR_17& 0x0ff00)>>8;
 VAR_20[0x12] = (VAR_17& 0x70000)>>16;


 VAR_20[0x13] = 0x40;
 VAR_20[0x17] = 0x00;
 VAR_20[0x18] = VAR_8->i2c_state = 0x00;
 VAR_20[0x19] = 0xff;
 VAR_20[0x1a] = 0xff;
 VAR_20[0x1b] = 0x10;


 VAR_21[0x0a] = VAR_8->brightness;
 VAR_21[0x0b] = VAR_8->contrast;
 VAR_21[0x0c] = VAR_8->color;
 VAR_21[0x0d] = VAR_8->hue;


 if (FUNC_2(VAR_8, 0x00, 0x03) == -1)
  return -1;


 for (VAR_15 = 0; VAR_15 < 0x1c; VAR_15++)
  if (FUNC_2(VAR_8, VAR_15, VAR_20[VAR_15]) == -1)
   return -1;


 for (VAR_15 = 0; VAR_15 < 0x20; VAR_15++)
  if (FUNC_3(VAR_8, VAR_15, VAR_21[VAR_15]) == -1)
   return -1;

 return 0;
}
