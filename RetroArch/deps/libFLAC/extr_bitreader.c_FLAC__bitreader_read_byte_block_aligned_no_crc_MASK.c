
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int brword ;
struct TYPE_6__ {int* buffer; scalar_t__ consumed_words; scalar_t__ words; scalar_t__ consumed_bits; } ;
typedef unsigned int FLAC__uint32 ;
typedef void* FLAC__byte ;
typedef int FLAC__bool ;
typedef TYPE_1__ FLAC__BitReader ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,unsigned int*,int) ;
 int FUNC_3 (TYPE_1__*) ;

FLAC__bool FUNC_4(FLAC__BitReader *VAR_1, FLAC__byte *VAR_2, unsigned VAR_3)
{
 FLAC__uint32 VAR_4;

 FUNC_0(0 != VAR_1);
 FUNC_0(0 != VAR_1->buffer);
 FUNC_0(FUNC_1(VAR_1));


 while(VAR_3 && VAR_1->consumed_bits) {
  if(!FUNC_2(VAR_1, &VAR_4, 8))
   return 0;
  *VAR_2++ = (FLAC__byte)VAR_4;
  VAR_3--;
 }
 if(0 == VAR_3)
  return 1;

 while(VAR_3 >= VAR_0) {
  if(VAR_1->consumed_words < VAR_1->words) {
   const brword VAR_5 = VAR_1->buffer[VAR_1->consumed_words++];
   for(VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
    VAR_2[VAR_4] = (FLAC__byte)(VAR_5 >> (8*(VAR_0-VAR_4-1)));

   VAR_2 += VAR_0;
   VAR_3 -= VAR_0;
  }
  else if(!FUNC_3(VAR_1))
   return 0;
 }

 while(VAR_3) {
  if(!FUNC_2(VAR_1, &VAR_4, 8))
   return 0;
  *VAR_2++ = (FLAC__byte)VAR_4;
  VAR_3--;
 }

 return 1;
}
