
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned int brword ;
struct TYPE_6__ {unsigned int* buffer; unsigned int consumed_words; unsigned int words; int consumed_bits; } ;
typedef unsigned int FLAC__uint32 ;
typedef int FLAC__bool ;
typedef TYPE_1__ FLAC__BitReader ;


 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,unsigned int*,unsigned int) ;
 int FUNC_3 (TYPE_1__*,unsigned int*) ;
 int FUNC_4 (TYPE_1__*,unsigned int) ;

FLAC__bool FUNC_5(FLAC__BitReader *VAR_1, int VAR_2[], unsigned VAR_3, unsigned VAR_4)
{



 unsigned VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 unsigned VAR_11;
 brword VAR_12;
 int *VAR_13, *VAR_14;

 FUNC_1(0 != VAR_1);
 FUNC_1(0 != VAR_1->buffer);

 FUNC_1(VAR_0 >= 32);
 FUNC_1(VAR_4 < 32);


 VAR_13 = VAR_2;
 VAR_14 = VAR_2 + VAR_3;

 if(VAR_4 == 0) {
  while(VAR_13 < VAR_14) {

   if(!FUNC_3(VAR_1, &VAR_8))
    return 0;

   *VAR_13++ = (int)(VAR_8 >> 1) ^ -(int)(VAR_8 & 1);
  }

  return 1;
 }

 FUNC_1(VAR_4 > 0);

 VAR_5 = VAR_1->consumed_words;
 VAR_6 = VAR_1->words;


 if(VAR_5 >= VAR_6) {
  VAR_9 = 0;
  goto process_tail;
 }

 VAR_11 = VAR_0 - VAR_1->consumed_bits;
 VAR_12 = VAR_1->buffer[VAR_5] << VAR_1->consumed_bits;

 while(VAR_13 < VAR_14) {

  VAR_9 = VAR_10 = FUNC_0(VAR_12);
  if(VAR_9 == VAR_0) {
   VAR_9 = VAR_11;
   do {

    FUNC_4(VAR_1, VAR_1->buffer[VAR_5++]);
    if (VAR_5 >= VAR_6)
     goto incomplete_msbs;
    VAR_12 = VAR_1->buffer[VAR_5];
    VAR_10 = FUNC_0(VAR_12);
    VAR_9 += VAR_10;
   } while(VAR_10 == VAR_0);
  }
  VAR_12 <<= VAR_10;
  VAR_12 <<= 1;
  VAR_11 = (VAR_11 - VAR_9 - 1) % VAR_0;
  VAR_8 = VAR_9;


  VAR_9 = (FLAC__uint32)(VAR_12 >> (VAR_0 - VAR_4));
  if(VAR_4 <= VAR_11) {
   VAR_11 -= VAR_4;
   VAR_12 <<= VAR_4;
  } else {

   FUNC_4(VAR_1, VAR_1->buffer[VAR_5++]);
   if (VAR_5 >= VAR_6)
    goto incomplete_lsbs;
   VAR_12 = VAR_1->buffer[VAR_5];
   VAR_11 += VAR_0 - VAR_4;
   VAR_9 |= (FLAC__uint32)(VAR_12 >> VAR_11);
   VAR_12 <<= VAR_0 - VAR_11;
  }
  VAR_7 = VAR_9;


  VAR_9 = (VAR_8 << VAR_4) | VAR_7;
  *VAR_13++ = (int)(VAR_9 >> 1) ^ -(int)(VAR_9 & 1);

  continue;


process_tail:
  do {
   if(0) {
incomplete_msbs:
    VAR_1->consumed_bits = 0;
    VAR_1->consumed_words = VAR_5;
   }


   if(!FUNC_3(VAR_1, &VAR_8))
    return 0;
   VAR_8 += VAR_9;
   VAR_9 = VAR_11 = 0;

   if(0) {
incomplete_lsbs:
    VAR_1->consumed_bits = 0;
    VAR_1->consumed_words = VAR_5;
   }


   if(!FUNC_2(VAR_1, &VAR_7, VAR_4 - VAR_11))
    return 0;
   VAR_7 = VAR_9 | VAR_7;


   VAR_9 = (VAR_8 << VAR_4) | VAR_7;
   *VAR_13++ = (int)(VAR_9 >> 1) ^ -(int)(VAR_9 & 1);
   VAR_9 = 0;

   VAR_5 = VAR_1->consumed_words;
   VAR_6 = VAR_1->words;
   VAR_11 = VAR_0 - VAR_1->consumed_bits;
   VAR_12 = VAR_1->buffer[VAR_5] << VAR_1->consumed_bits;
  } while(VAR_5 >= VAR_6 && VAR_13 < VAR_14);
 }

 if(VAR_11 == 0 && VAR_5 < VAR_6) {

  FUNC_4(VAR_1, VAR_1->buffer[VAR_5++]);
  VAR_11 = VAR_0;
 }

 VAR_1->consumed_bits = VAR_0 - VAR_11;
 VAR_1->consumed_words = VAR_5;

 return 1;
}
