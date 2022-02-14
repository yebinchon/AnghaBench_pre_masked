
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef void* uint16_t ;
struct TYPE_3__ {int * codes; int ** htrees; void* num_htrees; void* alphabet_size_limit; void* alphabet_size_max; } ;
typedef TYPE_1__ HuffmanTreeGroup ;
typedef int HuffmanCode ;
typedef int BrotliDecoderState ;
typedef int BROTLI_BOOL ;


 scalar_t__ FUNC_0 (int *,size_t const) ;
 size_t* VAR_0 ;

BROTLI_BOOL FUNC_1(BrotliDecoderState* VAR_1,
    HuffmanTreeGroup* VAR_2, uint32_t VAR_3,
    uint32_t VAR_4, uint32_t VAR_5) {

  const size_t VAR_6 =
      VAR_0[(VAR_4 + 31) >> 5];
  const size_t VAR_7 = sizeof(HuffmanCode) * VAR_5 * VAR_6;
  const size_t VAR_8 = sizeof(HuffmanCode*) * VAR_5;

  HuffmanCode** VAR_9 = (HuffmanCode**)FUNC_0(VAR_1,
      VAR_7 + VAR_8);
  VAR_2->alphabet_size_max = (uint16_t)VAR_3;
  VAR_2->alphabet_size_limit = (uint16_t)VAR_4;
  VAR_2->num_htrees = (uint16_t)VAR_5;
  VAR_2->htrees = VAR_9;
  VAR_2->codes = (HuffmanCode*)(&VAR_9[VAR_5]);
  return !!VAR_9;
}
