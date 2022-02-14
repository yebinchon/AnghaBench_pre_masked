
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct nand_bbt_descr {int len; int offs; scalar_t__* pattern; } ;



__attribute__((used)) static int FUNC_0(uint8_t *VAR_0, struct nand_bbt_descr *VAR_1)
{
 int VAR_2;
 uint8_t *VAR_3 = VAR_0;


 for (VAR_2 = 0; VAR_2 < VAR_1->len; VAR_2++) {
  if (VAR_3[VAR_1->offs + VAR_2] != VAR_1->pattern[VAR_2])
   return -1;
 }
 return 0;
}
