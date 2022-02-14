
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ buffer; scalar_t__ client_data; scalar_t__ read_callback; scalar_t__ consumed_bits; scalar_t__ consumed_words; scalar_t__ bytes; scalar_t__ words; scalar_t__ capacity; } ;
typedef TYPE_1__ FLAC__BitReader ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2(FLAC__BitReader *VAR_0)
{
 FUNC_0(0 != VAR_0);

 if(0 != VAR_0->buffer)
  FUNC_1(VAR_0->buffer);
 VAR_0->buffer = 0;
 VAR_0->capacity = 0;
 VAR_0->words = VAR_0->bytes = 0;
 VAR_0->consumed_words = VAR_0->consumed_bits = 0;
 VAR_0->read_callback = 0;
 VAR_0->client_data = 0;
}
