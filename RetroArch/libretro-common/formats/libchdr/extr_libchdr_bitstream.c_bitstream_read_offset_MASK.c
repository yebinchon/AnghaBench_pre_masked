
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bitstream {int bits; int doffset; } ;



uint32_t FUNC_0(struct bitstream* VAR_0)
{
 uint32_t VAR_1 = VAR_0->doffset;
 int VAR_2 = VAR_0->bits;
 while (VAR_2 >= 8)
 {
  VAR_1--;
  VAR_2 -= 8;
 }
 return VAR_1;
}
