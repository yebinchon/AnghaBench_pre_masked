
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct bitstream {int dlength; scalar_t__ doffset; int const* read; scalar_t__ bits; scalar_t__ buffer; } ;


 scalar_t__ FUNC_0 (int) ;

struct bitstream* FUNC_1(const void *VAR_0, uint32_t VAR_1)
{
 struct bitstream* VAR_2 = (struct bitstream*)FUNC_0(sizeof(struct bitstream));
 VAR_2->buffer = 0;
 VAR_2->bits = 0;
 VAR_2->read = (const uint8_t*)VAR_0;
 VAR_2->doffset = 0;
 VAR_2->dlength = VAR_1;
 return VAR_2;
}
