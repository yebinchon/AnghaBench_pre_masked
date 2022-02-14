
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ssb_bus {int bustype; int mmio; } ;






 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ssb_bus*,int) ;
 int FUNC_3 (struct ssb_bus*,int) ;

__attribute__((used)) static u32 FUNC_4(struct ssb_bus *VAR_1, u8 VAR_2,
         u16 VAR_3)
{
 u32 VAR_4, VAR_5;

 switch (VAR_1->bustype) {
 case 128:
  VAR_3 += VAR_2 * VAR_0;
  break;
 case 131:
  break;
 case 130:
  if (VAR_3 >= 0x800) {
   FUNC_2(VAR_1, 1);
   VAR_3 -= 0x800;
  } else
   FUNC_2(VAR_1, 0);
  VAR_4 = FUNC_1(VAR_1->mmio + VAR_3);
  VAR_5 = FUNC_1(VAR_1->mmio + VAR_3 + 2);
  return VAR_4 | (VAR_5 << 16);
 case 129:
  VAR_3 += VAR_2 * VAR_0;
  return FUNC_3(VAR_1, VAR_3);
 }
 return FUNC_0(VAR_1->mmio + VAR_3);
}
