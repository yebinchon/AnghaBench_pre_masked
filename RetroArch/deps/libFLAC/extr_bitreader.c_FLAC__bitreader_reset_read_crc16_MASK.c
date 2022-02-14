
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ buffer; int consumed_bits; unsigned int read_crc16; int crc16_align; } ;
typedef scalar_t__ FLAC__uint16 ;
typedef TYPE_1__ FLAC__BitReader ;


 int FUNC_0 (int) ;

void FUNC_1(FLAC__BitReader *VAR_0, FLAC__uint16 VAR_1)
{
 FUNC_0(0 != VAR_0);
 FUNC_0(0 != VAR_0->buffer);
 FUNC_0((VAR_0->consumed_bits & 7) == 0);

 VAR_0->read_crc16 = (unsigned)VAR_1;
 VAR_0->crc16_align = VAR_0->consumed_bits;
}
