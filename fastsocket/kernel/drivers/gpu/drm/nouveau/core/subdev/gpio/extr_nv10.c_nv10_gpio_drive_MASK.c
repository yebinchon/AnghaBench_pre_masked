
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_gpio {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nouveau_gpio*,int,int,int) ;

__attribute__((used)) static int
FUNC_1(struct nouveau_gpio *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 u32 VAR_5, VAR_6, VAR_7;

 if (VAR_2 < 2) {
  VAR_2 = VAR_2 * 16;
  VAR_5 = 0x600818;
  VAR_6 = 0x00000011;
  VAR_7 = (VAR_3 << 4) | VAR_4;
 } else
 if (VAR_2 < 10) {
  VAR_2 = (VAR_2 - 2) * 4;
  VAR_5 = 0x60081c;
  VAR_6 = 0x00000003;
  VAR_7 = (VAR_3 << 1) | VAR_4;
 } else
 if (VAR_2 < 14) {
  VAR_2 = (VAR_2 - 10) * 4;
  VAR_5 = 0x600850;
  VAR_6 = 0x00000003;
  VAR_7 = (VAR_3 << 1) | VAR_4;
 } else {
  return -VAR_0;
 }

 FUNC_0(VAR_1, VAR_5, VAR_6 << VAR_2, VAR_7 << VAR_2);
 return 0;
}
