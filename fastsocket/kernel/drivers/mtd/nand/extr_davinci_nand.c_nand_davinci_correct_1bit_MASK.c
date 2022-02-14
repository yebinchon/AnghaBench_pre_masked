
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_char ;
struct TYPE_2__ {int size; } ;
struct nand_chip {TYPE_1__ ecc; } ;
struct mtd_info {struct nand_chip* priv; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct mtd_info *VAR_0, u_char *VAR_1,
         u_char *VAR_2, u_char *VAR_3)
{
 struct nand_chip *VAR_4 = VAR_0->priv;
 uint32_t VAR_5 = VAR_2[0] | (VAR_2[1] << 8) |
       (VAR_2[2] << 16);
 uint32_t VAR_6 = VAR_3[0] | (VAR_3[1] << 8) |
       (VAR_3[2] << 16);
 uint32_t VAR_7 = VAR_6 ^ VAR_5;

 if (VAR_7) {
  if ((((VAR_7 >> 12) ^ VAR_7) & 0xfff) == 0xfff) {

   if ((VAR_7 >> (12 + 3)) < VAR_4->ecc.size) {
    VAR_1[VAR_7 >> (12 + 3)] ^= FUNC_0((VAR_7 >> 12) & 7);
    return 1;
   } else {
    return -1;
   }
  } else if (!(VAR_7 & (VAR_7 - 1))) {


   return 1;
  } else {

   return -1;
  }

 }
 return 0;
}
