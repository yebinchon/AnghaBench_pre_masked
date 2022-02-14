
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;

void FUNC_2(u8 VAR_0,u8 VAR_1[12][2],u8 VAR_2,u8 VAR_3[7])
{
 u32 VAR_4=0,VAR_5=0,VAR_6=0,VAR_7=0,VAR_8=0,VAR_9=0;

 if(VAR_0) {
  VAR_4 = VAR_1[0][0]&0xf;
  VAR_4 = (VAR_4&~0xf0)|(FUNC_1(VAR_1[0][1],4,4));
  VAR_4 = (VAR_4&~0xf00)|(FUNC_1(VAR_1[1][0],8,4));
  VAR_4 = (VAR_4&~0xf000)|(FUNC_1(VAR_1[1][1],12,4));
  VAR_4 = (VAR_4&~0xf0000)|(FUNC_1(VAR_1[2][0],16,4));
  VAR_4 = (VAR_4&~0xf00000)|(FUNC_1(VAR_1[2][1],20,4));
  VAR_4 = (VAR_4&~0xff000000)|(FUNC_1(0x01,24,8));

  VAR_5 = VAR_1[3][0]&0xf;
  VAR_5 = (VAR_5&~0xf0)|(FUNC_1(VAR_1[3][1],4,4));
  VAR_5 = (VAR_5&~0xf00)|(FUNC_1(VAR_1[4][0],8,4));
  VAR_5 = (VAR_5&~0xf000)|(FUNC_1(VAR_1[4][1],12,4));
  VAR_5 = (VAR_5&~0xf0000)|(FUNC_1(VAR_1[5][0],16,4));
  VAR_5 = (VAR_5&~0xf00000)|(FUNC_1(VAR_1[5][1],20,4));
  VAR_5 = (VAR_5&~0xff000000)|(FUNC_1(0x02,24,8));

  VAR_6 = VAR_1[6][0]&0xf;
  VAR_6 = (VAR_6&~0xf0)|(FUNC_1(VAR_1[6][1],4,4));
  VAR_6 = (VAR_6&~0xf00)|(FUNC_1(VAR_1[7][0],8,4));
  VAR_6 = (VAR_6&~0xf000)|(FUNC_1(VAR_1[7][1],12,4));
  VAR_6 = (VAR_6&~0xf0000)|(FUNC_1(VAR_1[8][0],16,4));
  VAR_6 = (VAR_6&~0xf00000)|(FUNC_1(VAR_1[8][1],20,4));
  VAR_6 = (VAR_6&~0xff000000)|(FUNC_1(0x03,24,8));

  VAR_7 = VAR_1[9][0]&0xf;
  VAR_7 = (VAR_7&~0xf0)|(FUNC_1(VAR_1[9][1],4,4));
  VAR_7 = (VAR_7&~0xf00)|(FUNC_1(VAR_1[10][0],8,4));
  VAR_7 = (VAR_7&~0xf000)|(FUNC_1(VAR_1[10][1],12,4));
  VAR_7 = (VAR_7&~0xf0000)|(FUNC_1(VAR_1[11][0],16,4));
  VAR_7 = (VAR_7&~0xf00000)|(FUNC_1(VAR_1[11][1],20,4));
  VAR_7 = (VAR_7&~0xff000000)|(FUNC_1(0x04,24,8));
 } else {
  VAR_4 = 0x01666666;
  VAR_5 = 0x02666666;
  VAR_6 = 0x03666666;
  VAR_7 = 0x04666666;
 }
 FUNC_0(VAR_4);
 FUNC_0(VAR_5);
 FUNC_0(VAR_6);
 FUNC_0(VAR_7);

 VAR_8 = 0x53595000;
 VAR_9 = 0x54000015;
 if(VAR_2) {
  VAR_8 = 0x53000000|(VAR_3[0]&0x3f);
  VAR_8 = (VAR_8&~0xfc0)|(FUNC_1(VAR_3[1],6,6));
  VAR_8 = (VAR_8&~0x3f000)|(FUNC_1(VAR_3[2],12,6));
  VAR_8 = (VAR_8&~0xfc0000)|(FUNC_1(VAR_3[3],18,6));

  VAR_9 = 0x54000000|(VAR_3[4]&0x3f);
  VAR_9 = (VAR_9&~0xfc0)|(FUNC_1(VAR_3[5],6,6));
  VAR_9 = (VAR_9&~0x3f000)|(FUNC_1(VAR_3[6],12,6));
 }
 FUNC_0(VAR_8);
 FUNC_0(VAR_9);
}
