
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct IR_i2c {int c; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct IR_i2c *VAR_0, u32 *VAR_1, u32 *VAR_2)
{
 int VAR_3, VAR_4;


 VAR_3 = FUNC_1(VAR_0->c, 0x10);
 if (VAR_3 < 0) {
  FUNC_0("read error\n");
  return 0;
 }

 if (0 == (VAR_3 & 0x80))
  return 0;


 VAR_4 = FUNC_1(VAR_0->c, 0x00);
 if (VAR_4 < 0) {
  FUNC_0("read error\n");
  return 0;
 }

 FUNC_0("IR Key/Flags: (0x%02x/0x%02x)\n",
     VAR_4 & 0xff, VAR_3 & 0xff);

 *VAR_1 = VAR_4 & 0xff;
 *VAR_2 = VAR_4;
 return 1;
}
