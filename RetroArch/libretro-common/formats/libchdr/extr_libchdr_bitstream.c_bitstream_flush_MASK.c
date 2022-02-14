
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bitstream {int bits; int buffer; int doffset; } ;



uint32_t FUNC_0(struct bitstream* VAR_0)
{
 while (VAR_0->bits >= 8)
 {
  VAR_0->doffset--;
  VAR_0->bits -= 8;
 }
 VAR_0->bits = VAR_0->buffer = 0;
 return VAR_0->doffset;
}
