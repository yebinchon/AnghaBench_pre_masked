
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nand_bbt_descr {int offs; int options; int len; int* pattern; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(uint8_t *VAR_1, int VAR_2, int VAR_3, struct nand_bbt_descr *VAR_4)
{
 int VAR_5, VAR_6 = 0;
 uint8_t *VAR_7 = VAR_1;

 VAR_6 = VAR_3 + VAR_4->offs;
 if (VAR_4->options & VAR_0) {
  for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
   if (VAR_7[VAR_5] != 0xff)
    return -1;
  }
 }
 VAR_7 += VAR_6;


 for (VAR_5 = 0; VAR_5 < VAR_4->len; VAR_5++) {
  if (VAR_7[VAR_5] != VAR_4->pattern[VAR_5])
   return -1;
 }

 if (VAR_4->options & VAR_0) {
  VAR_7 += VAR_4->len;
  VAR_6 += VAR_4->len;
  for (VAR_5 = VAR_6; VAR_5 < VAR_2; VAR_5++) {
   if (*VAR_7++ != 0xff)
    return -1;
  }
 }
 return 0;
}
