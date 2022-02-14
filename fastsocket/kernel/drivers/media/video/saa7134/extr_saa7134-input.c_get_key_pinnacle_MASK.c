
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct IR_i2c {unsigned int old; int c; } ;


 unsigned int FUNC_0 (unsigned char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,unsigned char*,int) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int FUNC_3(struct IR_i2c *VAR_1, u32 *VAR_2, u32 *VAR_3,
       int VAR_4, int VAR_5, int VAR_6)
{
 unsigned char VAR_7[4];
 unsigned int VAR_8 = 0,VAR_9 = 0,VAR_10 = 0;


 if (4 != FUNC_1(VAR_1->c, VAR_7, 4)) {
  FUNC_2("read error\n");
  return -VAR_0;
 }

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_7); VAR_8++) {
  if (VAR_7[VAR_8] == VAR_5) {
   VAR_10=VAR_7[(VAR_8+VAR_4 + 1) % 4];
   VAR_9=VAR_7[(VAR_8+VAR_4) % 4];
  }
 }


 if (VAR_9 == 0)
  return 0;


 if (VAR_1->old == VAR_9)
  return 0;

 VAR_1->old = VAR_9;



 if (VAR_5 == 0xfe && (VAR_10 & 0x40))
  return 0;

 VAR_10 %= VAR_6;

 *VAR_3 = VAR_10;
 *VAR_2 = VAR_10;

 FUNC_2("Pinnacle PCTV key %02x\n", VAR_10);

 return 1;
}
