
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_gpio {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nouveau_gpio*,int) ;

__attribute__((used)) static int
FUNC_1(struct nouveau_gpio *VAR_1, int VAR_2)
{
 if (VAR_2 < 2) {
  VAR_2 = VAR_2 * 16;
  VAR_2 = FUNC_0(VAR_1, 0x600818) >> VAR_2;
  return !!(VAR_2 & 0x0100);
 } else
 if (VAR_2 < 10) {
  VAR_2 = (VAR_2 - 2) * 4;
  VAR_2 = FUNC_0(VAR_1, 0x60081c) >> VAR_2;
  return !!(VAR_2 & 0x04);
 } else
 if (VAR_2 < 14) {
  VAR_2 = (VAR_2 - 10) * 4;
  VAR_2 = FUNC_0(VAR_1, 0x600850) >> VAR_2;
  return !!(VAR_2 & 0x04);
 }

 return -VAR_0;
}
