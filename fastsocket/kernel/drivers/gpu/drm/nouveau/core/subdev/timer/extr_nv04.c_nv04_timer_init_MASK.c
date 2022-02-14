
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nv04_timer_priv {int base; } ;
struct nouveau_object {int dummy; } ;
struct nouveau_device {int chipset; int crystal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nouveau_device*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nv04_timer_priv*,char*,int) ;
 struct nouveau_device* FUNC_3 (struct nouveau_object*) ;
 int FUNC_4 (struct nv04_timer_priv*,int) ;
 int FUNC_5 (struct nv04_timer_priv*,char*) ;
 int FUNC_6 (struct nv04_timer_priv*,int,int) ;

__attribute__((used)) static int
FUNC_7(struct nouveau_object *VAR_5)
{
 struct nouveau_device *VAR_6 = FUNC_3(VAR_5);
 struct nv04_timer_priv *VAR_7 = (void *)VAR_5;
 u32 VAR_8 = 1, VAR_9, VAR_10, VAR_11;
 int VAR_12;

 VAR_12 = FUNC_1(&VAR_7->base);
 if (VAR_12)
  return VAR_12;


 VAR_11 = 1000000 / 32;







 if (VAR_6->chipset <= 0x40) {

  VAR_9 = -1;
  VAR_10 = 0;
 } else {
  VAR_9 = VAR_6->crystal;
  VAR_10 = VAR_9;
  while (VAR_10 < (VAR_11 * 2)) {
   VAR_10 += (VAR_10 / VAR_8);
   VAR_8++;
  }

  FUNC_6(VAR_7, 0x009220, VAR_8 - 1);
 }

 if (!VAR_10) {
  FUNC_5(VAR_7, "unknown input clock freq\n");
  if (!FUNC_4(VAR_7, VAR_3) ||
      !FUNC_4(VAR_7, VAR_0)) {
   FUNC_6(VAR_7, VAR_3, 1);
   FUNC_6(VAR_7, VAR_0, 1);
  }
  return 0;
 }


 while (((VAR_10 % 5) == 0) && ((VAR_11 % 5) == 0)) {
  VAR_10 /= 5;
  VAR_11 /= 5;
 }

 while (((VAR_10 % 2) == 0) && ((VAR_11 % 2) == 0)) {
  VAR_10 /= 2;
  VAR_11 /= 2;
 }

 while (VAR_10 > 0xffff || VAR_11 > 0xffff) {
  VAR_10 >>= 1;
  VAR_11 >>= 1;
 }

 FUNC_2(VAR_7, "input frequency : %dHz\n", VAR_9);
 FUNC_2(VAR_7, "input multiplier: %d\n", VAR_8);
 FUNC_2(VAR_7, "numerator       : 0x%08x\n", VAR_10);
 FUNC_2(VAR_7, "denominator     : 0x%08x\n", VAR_11);
 FUNC_2(VAR_7, "timer frequency : %dHz\n", (VAR_9 * VAR_8) * VAR_11 / VAR_10);

 FUNC_6(VAR_7, VAR_3, VAR_10);
 FUNC_6(VAR_7, VAR_0, VAR_11);
 FUNC_6(VAR_7, VAR_1, 0xffffffff);
 FUNC_6(VAR_7, VAR_2, 0x00000000);
 return 0;
}
