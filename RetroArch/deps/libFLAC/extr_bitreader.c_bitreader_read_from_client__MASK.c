
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int consumed_words; int words; size_t bytes; unsigned int capacity; void** buffer; int client_data; int (* read_callback ) (int *,size_t*,int ) ;} ;
typedef int FLAC__byte ;
typedef int FLAC__bool ;
typedef TYPE_1__ FLAC__BitReader ;


 unsigned int VAR_0 ;
 void* FUNC_0 (void*) ;
 int FUNC_1 (void**,void**,unsigned int) ;
 int FUNC_2 (int *,size_t*,int ) ;

__attribute__((used)) static FLAC__bool FUNC_3(FLAC__BitReader *VAR_1)
{
 unsigned VAR_2, VAR_3;
 size_t VAR_4;
 FLAC__byte *VAR_5;


 if(VAR_1->consumed_words > 0) {
  VAR_2 = VAR_1->consumed_words;
  VAR_3 = VAR_1->words + (VAR_1->bytes? 1:0);
  FUNC_1(VAR_1->buffer, VAR_1->buffer+VAR_2, VAR_0 * (VAR_3 - VAR_2));

  VAR_1->words -= VAR_2;
  VAR_1->consumed_words = 0;
 }




 VAR_4 = (VAR_1->capacity - VAR_1->words) * VAR_0 - VAR_1->bytes;
 if(VAR_4 == 0)
  return 0;
 VAR_5 = ((FLAC__byte*)(VAR_1->buffer+VAR_1->words)) + VAR_1->bytes;
 if(VAR_1->bytes)
  VAR_1->buffer[VAR_1->words] = FUNC_0(VAR_1->buffer[VAR_1->words]);
 if(!VAR_1->read_callback(VAR_5, &VAR_4, VAR_1->client_data))
  return 0;
 VAR_3 = (VAR_1->words*VAR_0 + VAR_1->bytes + (unsigned)VAR_4 + (VAR_0-1)) / VAR_0;
 for(VAR_2 = VAR_1->words; VAR_2 < VAR_3; VAR_2++)
  VAR_1->buffer[VAR_2] = FUNC_0(VAR_1->buffer[VAR_2]);
 VAR_3 = VAR_1->words*VAR_0 + VAR_1->bytes + (unsigned)VAR_4;
 VAR_1->words = VAR_3 / VAR_0;
 VAR_1->bytes = VAR_3 % VAR_0;

 return 1;
}
