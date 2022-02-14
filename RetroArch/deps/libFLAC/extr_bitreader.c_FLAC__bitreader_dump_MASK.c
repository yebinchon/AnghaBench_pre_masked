
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int brword ;
struct TYPE_3__ {int capacity; int words; int bytes; int consumed_words; int consumed_bits; unsigned int* buffer; } ;
typedef TYPE_1__ FLAC__BitReader ;
typedef int FILE ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;

void FUNC_1(const FLAC__BitReader *VAR_1, FILE *VAR_2)
{
 unsigned VAR_3, VAR_4;
 if(VAR_1 == 0) {
  FUNC_0(VAR_2, "bitreader is NULL\n");
 }
 else {
  FUNC_0(VAR_2, "bitreader: capacity=%u words=%u bytes=%u consumed: words=%u, bits=%u\n", VAR_1->capacity, VAR_1->words, VAR_1->bytes, VAR_1->consumed_words, VAR_1->consumed_bits);

  for(VAR_3 = 0; VAR_3 < VAR_1->words; VAR_3++) {
   FUNC_0(VAR_2, "%08X: ", VAR_3);
   for(VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
    if(VAR_3 < VAR_1->consumed_words || (VAR_3 == VAR_1->consumed_words && VAR_4 < VAR_1->consumed_bits))
     FUNC_0(VAR_2, ".");
    else
     FUNC_0(VAR_2, "%01u", VAR_1->buffer[VAR_3] & ((brword)1 << (VAR_0-VAR_4-1)) ? 1:0);
   FUNC_0(VAR_2, "\n");
  }
  if(VAR_1->bytes > 0) {
   FUNC_0(VAR_2, "%08X: ", VAR_3);
   for(VAR_4 = 0; VAR_4 < VAR_1->bytes*8; VAR_4++)
    if(VAR_3 < VAR_1->consumed_words || (VAR_3 == VAR_1->consumed_words && VAR_4 < VAR_1->consumed_bits))
     FUNC_0(VAR_2, ".");
    else
     FUNC_0(VAR_2, "%01u", VAR_1->buffer[VAR_3] & ((brword)1 << (VAR_1->bytes*8-VAR_4-1)) ? 1:0);
   FUNC_0(VAR_2, "\n");
  }
 }
}
