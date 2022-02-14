
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bitstream {int bits; size_t doffset; size_t dlength; int buffer; int* read; } ;



uint32_t FUNC_0(struct bitstream* VAR_0, int VAR_1)
{
 if (VAR_1 == 0)
  return 0;


 if (VAR_1 > VAR_0->bits)
 {
  while (VAR_0->bits <= 24)
  {
   if (VAR_0->doffset < VAR_0->dlength)
    VAR_0->buffer |= VAR_0->read[VAR_0->doffset] << (24 - VAR_0->bits);
   VAR_0->doffset++;
   VAR_0->bits += 8;
  }
 }


 return VAR_0->buffer >> (32 - VAR_1);
}
