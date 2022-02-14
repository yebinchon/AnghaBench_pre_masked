
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwc_dec23_private {unsigned int* table_dc00; unsigned int* table_d800; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct pwc_dec23_private *VAR_1)
{


 int VAR_2;
 unsigned int VAR_3 = (1UL << (15 - 1));
 unsigned int VAR_4 = 0x0000;

 for (VAR_2=0; VAR_2<256; VAR_2++) {
  VAR_1->table_dc00[VAR_2] = VAR_3 & ~((1UL << (15 - 1)));
  VAR_1->table_d800[VAR_2] = VAR_4;

  VAR_3 += 0x7bc4;
  VAR_4 += 0x7bc4;
 }
}
