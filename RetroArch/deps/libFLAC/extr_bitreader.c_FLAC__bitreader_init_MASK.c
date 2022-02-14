
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int brword ;
struct TYPE_3__ {int capacity; void* client_data; int read_callback; int * buffer; scalar_t__ consumed_bits; scalar_t__ consumed_words; scalar_t__ bytes; scalar_t__ words; } ;
typedef int FLAC__bool ;
typedef int FLAC__BitReaderReadCallback ;
typedef TYPE_1__ FLAC__BitReader ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;

FLAC__bool FUNC_2(FLAC__BitReader *VAR_1, FLAC__BitReaderReadCallback VAR_2, void *VAR_3)
{
 FUNC_0(0 != VAR_1);

 VAR_1->words = VAR_1->bytes = 0;
 VAR_1->consumed_words = VAR_1->consumed_bits = 0;
 VAR_1->capacity = VAR_0;
 VAR_1->buffer = (brword*)FUNC_1(sizeof(brword) * VAR_1->capacity);
 if(VAR_1->buffer == 0)
  return 0;
 VAR_1->read_callback = VAR_2;
 VAR_1->client_data = VAR_3;

 return 1;
}
