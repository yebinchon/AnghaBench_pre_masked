
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;



__attribute__((used)) static void FUNC_0(u8 *VAR_0, u32 *VAR_1, u32 *VAR_2)
{
 int VAR_3;
 int VAR_4;

 VAR_3 = 0;

 for (VAR_4 = 0; VAR_4 < 128; VAR_4++) {
  u8 VAR_5;
  u8 VAR_6;
  u8 VAR_7;
  u8 VAR_8;

  VAR_5 = (VAR_1[VAR_4] >> 24) & 0xff;
  VAR_6 = (VAR_1[VAR_4] >> 16) & 0xff;
  VAR_7 = (VAR_1[VAR_4] >> 8) & 0xff;
  VAR_8 = VAR_1[VAR_4] & 0xff;



  VAR_0[VAR_3++] = 0xf0;
  VAR_0[VAR_3++] = (VAR_7 >> 4);
  VAR_0[VAR_3++] = (VAR_7 << 4) | 0x0c | (VAR_8 >> 6);
  VAR_0[VAR_3++] = (VAR_8 << 2);
  VAR_0[VAR_3++] = 0x80 | VAR_4;



  VAR_0[VAR_3++] = 0xf4;
  VAR_0[VAR_3++] = 0x40 | (VAR_5 >> 4);
  VAR_0[VAR_3++] = (VAR_5 << 4) | 0x0c | (VAR_6 >> 6);
  VAR_0[VAR_3++] = (VAR_6 << 2);
  VAR_0[VAR_3++] = 0x80 | VAR_4;
 }

 for (VAR_4 = 0; VAR_4 < 128; VAR_4++) {
  u8 VAR_9;
  u8 VAR_10;
  u8 VAR_11;
  u8 VAR_12;

  VAR_9 = (VAR_2[VAR_4] >> 24) & 0xff;
  VAR_10 = (VAR_2[VAR_4] >> 16) & 0xff;
  VAR_11 = (VAR_2[VAR_4] >> 8) & 0xff;
  VAR_12 = VAR_2[VAR_4] & 0xff;



  VAR_0[VAR_3++] = 0xf0;
  VAR_0[VAR_3++] = (VAR_11 >> 4);
  VAR_0[VAR_3++] = (VAR_11 << 4) | 0x02 | (VAR_4 >> 6);
  VAR_0[VAR_3++] = (VAR_4 << 2) | 0x03;
  VAR_0[VAR_3++] = VAR_12;



  VAR_0[VAR_3++] = 0xf4;
  VAR_0[VAR_3++] = 0x40 | (VAR_9 >> 4);
  VAR_0[VAR_3++] = (VAR_9 << 4) | 0x02 | (VAR_4 >> 6);
  VAR_0[VAR_3++] = (VAR_4 << 2) | 0x03;
  VAR_0[VAR_3++] = VAR_10;
 }


 VAR_0[VAR_3++] = 0xe0;
 VAR_0[VAR_3++] = 0x00;
 VAR_0[VAR_3++] = 0x01;
 VAR_0[VAR_3++] = 0x00;
 VAR_0[VAR_3++] = 0x00;
}
