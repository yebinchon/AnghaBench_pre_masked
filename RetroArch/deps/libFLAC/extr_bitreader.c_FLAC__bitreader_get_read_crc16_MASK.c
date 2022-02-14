
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int brword ;
struct TYPE_3__ {int* buffer; int consumed_bits; int crc16_align; size_t consumed_words; int read_crc16; } ;
typedef int FLAC__uint16 ;
typedef TYPE_1__ FLAC__BitReader ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int,int ) ;

FLAC__uint16 FUNC_2(FLAC__BitReader *VAR_1)
{
 FUNC_0(0 != VAR_1);
 FUNC_0(0 != VAR_1->buffer);
 FUNC_0((VAR_1->consumed_bits & 7) == 0);
 FUNC_0(VAR_1->crc16_align <= VAR_1->consumed_bits);


 if(VAR_1->consumed_bits) {
  const brword VAR_2 = VAR_1->buffer[VAR_1->consumed_words];
  for( ; VAR_1->crc16_align < VAR_1->consumed_bits; VAR_1->crc16_align += 8)
   VAR_1->read_crc16 = FUNC_1((unsigned)((VAR_2 >> (VAR_0-8-VAR_1->crc16_align)) & 0xff), VAR_1->read_crc16);
 }
 return VAR_1->read_crc16;
}
