
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ buffer; scalar_t__ consumed_words; scalar_t__ words; scalar_t__ consumed_bits; } ;
typedef int FLAC__uint32 ;
typedef int FLAC__bool ;
typedef TYPE_1__ FLAC__BitReader ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int *,int) ;
 int FUNC_3 (TYPE_1__*) ;

FLAC__bool FUNC_4(FLAC__BitReader *VAR_1, unsigned VAR_2)
{
 FLAC__uint32 VAR_3;

 FUNC_0(0 != VAR_1);
 FUNC_0(0 != VAR_1->buffer);
 FUNC_0(FUNC_1(VAR_1));


 while(VAR_2 && VAR_1->consumed_bits) {
  if(!FUNC_2(VAR_1, &VAR_3, 8))
   return 0;
  VAR_2--;
 }
 if(0 == VAR_2)
  return 1;

 while(VAR_2 >= VAR_0) {
  if(VAR_1->consumed_words < VAR_1->words) {
   VAR_1->consumed_words++;
   VAR_2 -= VAR_0;
  }
  else if(!FUNC_3(VAR_1))
   return 0;
 }

 while(VAR_2) {
  if(!FUNC_2(VAR_1, &VAR_3, 8))
   return 0;
  VAR_2--;
 }

 return 1;
}
