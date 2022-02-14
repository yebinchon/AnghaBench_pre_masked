
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct IR_i2c {unsigned char old; int c; } ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned char*,int) ;
 int FUNC_1 (char*,int,unsigned char,unsigned char) ;

int FUNC_2(struct IR_i2c *VAR_1, u32 *VAR_2, u32 *VAR_3)
{
 unsigned char VAR_4[2];
 u16 VAR_5;
 int VAR_6;


 VAR_6 = FUNC_0(VAR_1->c, VAR_4, sizeof(VAR_4));

 if (VAR_6 != 2)
  return -VAR_0;


 if (VAR_4[1] == 0xff)
  return 0;

 VAR_1->old = VAR_4[1];
 VAR_5 =
   ((VAR_4[0] & 0x01) ? 0x0020 : 0) |
   ((VAR_4[0] & 0x02) ? 0x0010 : 0) |
   ((VAR_4[0] & 0x04) ? 0x0008 : 0) |
   ((VAR_4[0] & 0x08) ? 0x0004 : 0) |
   ((VAR_4[0] & 0x10) ? 0x0002 : 0) |
   ((VAR_4[0] & 0x20) ? 0x0001 : 0) |
   ((VAR_4[1] & 0x08) ? 0x1000 : 0) |
   ((VAR_4[1] & 0x10) ? 0x0800 : 0) |
   ((VAR_4[1] & 0x20) ? 0x0400 : 0) |
   ((VAR_4[1] & 0x40) ? 0x0200 : 0) |
   ((VAR_4[1] & 0x80) ? 0x0100 : 0);

 FUNC_1("ir hauppauge (em2840): code=0x%02x (rcv=0x%02x%02x)\n",
   VAR_5, VAR_4[1], VAR_4[0]);


 *VAR_2 = VAR_5;
 *VAR_3 = VAR_5;
 return 1;
}
