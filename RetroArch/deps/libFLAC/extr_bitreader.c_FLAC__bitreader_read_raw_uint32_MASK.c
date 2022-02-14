
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned int brword ;
struct TYPE_5__ {unsigned int* buffer; int capacity; size_t consumed_words; size_t words; int bytes; int consumed_bits; } ;
typedef unsigned int FLAC__uint32 ;
typedef int FLAC__bool ;
typedef TYPE_1__ FLAC__BitReader ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int const VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,unsigned int const) ;

FLAC__bool FUNC_3(FLAC__BitReader *VAR_2, FLAC__uint32 *VAR_3, unsigned VAR_4)
{
 FUNC_0(0 != VAR_2);
 FUNC_0(0 != VAR_2->buffer);

 FUNC_0(VAR_4 <= 32);
 FUNC_0((VAR_2->capacity*VAR_0) * 2 >= VAR_4);
 FUNC_0(VAR_2->consumed_words <= VAR_2->words);


 FUNC_0(VAR_0 >= 32);

 if(VAR_4 == 0) {
  *VAR_3 = 0;
  return 1;
 }

 while((VAR_2->words-VAR_2->consumed_words)*VAR_0 + VAR_2->bytes*8 - VAR_2->consumed_bits < VAR_4) {
  if(!FUNC_1(VAR_2))
   return 0;
 }
 if(VAR_2->consumed_words < VAR_2->words) {

  if(VAR_2->consumed_bits) {

   const unsigned VAR_5 = VAR_0 - VAR_2->consumed_bits;
   const brword VAR_6 = VAR_2->buffer[VAR_2->consumed_words];
   if(VAR_4 < VAR_5) {
    *VAR_3 = (FLAC__uint32)((VAR_6 & (VAR_1 >> VAR_2->consumed_bits)) >> (VAR_5-VAR_4));
    VAR_2->consumed_bits += VAR_4;
    return 1;
   }

   *VAR_3 = (FLAC__uint32)(VAR_6 & (VAR_1 >> VAR_2->consumed_bits));
   VAR_4 -= VAR_5;
   FUNC_2(VAR_2, VAR_6);
   VAR_2->consumed_words++;
   VAR_2->consumed_bits = 0;
   if(VAR_4) {
    *VAR_3 <<= VAR_4;
    *VAR_3 |= (FLAC__uint32)(VAR_2->buffer[VAR_2->consumed_words] >> (VAR_0-VAR_4));
    VAR_2->consumed_bits = VAR_4;
   }
   return 1;
  }
  else {
   const brword VAR_7 = VAR_2->buffer[VAR_2->consumed_words];
   if(VAR_4 < VAR_0) {
    *VAR_3 = (FLAC__uint32)(VAR_7 >> (VAR_0-VAR_4));
    VAR_2->consumed_bits = VAR_4;
    return 1;
   }

   *VAR_3 = (FLAC__uint32)VAR_7;
   FUNC_2(VAR_2, VAR_7);
   VAR_2->consumed_words++;
   return 1;
  }
 }
 else {





  if(VAR_2->consumed_bits) {

   FUNC_0(VAR_2->consumed_bits + VAR_4 <= VAR_2->bytes*8);
   *VAR_3 = (FLAC__uint32)((VAR_2->buffer[VAR_2->consumed_words] & (VAR_1 >> VAR_2->consumed_bits)) >> (VAR_0-VAR_2->consumed_bits-VAR_4));
   VAR_2->consumed_bits += VAR_4;
   return 1;
  }
  else {
   *VAR_3 = (FLAC__uint32)(VAR_2->buffer[VAR_2->consumed_words] >> (VAR_0-VAR_4));
   VAR_2->consumed_bits += VAR_4;
   return 1;
  }
 }
}
