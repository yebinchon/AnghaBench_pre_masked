
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_i2c {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct nouveau_i2c*,int) ;
 int FUNC_2 (struct nouveau_i2c*,int,int,int const) ;
 int FUNC_3 (struct nouveau_i2c*,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(struct nouveau_i2c *VAR_1, int VAR_2)
{
 const u32 VAR_3 = 1;
 const u32 VAR_4 = VAR_3 ? 0x00100000 : 0x00200000;
 const u32 VAR_5 = VAR_3 ? 0x01000000 : 0x02000000;
 u32 VAR_6, VAR_7;


 VAR_7 = 1000;
 do {
  VAR_6 = FUNC_3(VAR_1, 0x00e4e4 + (VAR_2 * 0x50));
  FUNC_4(1);
  if (!VAR_7--) {
   FUNC_0("begin idle timeout 0x%08x\n", VAR_6);
   return -VAR_0;
  }
 } while (VAR_6 & 0x03010000);


 FUNC_2(VAR_1, 0x00e4e4 + (VAR_2 * 0x50), 0x00300000, VAR_4);
 VAR_7 = 1000;
 do {
  VAR_6 = FUNC_3(VAR_1, 0x00e4e4 + (VAR_2 * 0x50));
  FUNC_4(1);
  if (!VAR_7--) {
   FUNC_0("magic wait 0x%08x\n", VAR_6);
   FUNC_1(VAR_1, VAR_2);
   return -VAR_0;
  }
 } while ((VAR_6 & 0x03000000) != VAR_5);

 return 0;
}
