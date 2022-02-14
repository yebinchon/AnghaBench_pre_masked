
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct nand_bbt_descr {int len; scalar_t__* pattern; } ;



__attribute__((used)) static int FUNC_0(uint8_t *VAR_0, int VAR_1, int VAR_2, struct nand_bbt_descr *VAR_3)
{
 int VAR_4;
 uint8_t *VAR_5 = VAR_0;


 for (VAR_4 = 0; VAR_4 < VAR_3->len; VAR_4++) {
  if (VAR_5[VAR_4] != VAR_3->pattern[VAR_4])
   return -1;
 }
        return 0;
}
