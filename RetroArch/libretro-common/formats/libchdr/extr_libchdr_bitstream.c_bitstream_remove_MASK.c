
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitstream {int buffer; int bits; } ;



void FUNC_0(struct bitstream* VAR_0, int VAR_1)
{
 VAR_0->buffer <<= VAR_1;
 VAR_0->bits -= VAR_1;
}
