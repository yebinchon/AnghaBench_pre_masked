
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef size_t uint32_t ;
struct TYPE_6__ {size_t repeat; unsigned int space; size_t sub_loop_counter; size_t* code_length_code_lengths; int * code_length_histo; int substate_huffman; } ;
struct TYPE_5__ {TYPE_2__ header; } ;
struct TYPE_7__ {TYPE_1__ arena; int br; } ;
typedef TYPE_2__ BrotliMetablockHeaderArena ;
typedef TYPE_3__ BrotliDecoderState ;
typedef int BrotliDecoderErrorCode ;
typedef int BrotliBitReader ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (size_t*,size_t const) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_4 ;
 int FUNC_3 (int *,size_t) ;
 size_t FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int,size_t*) ;
 size_t* VAR_5 ;
 size_t* VAR_6 ;
 size_t* VAR_7 ;

__attribute__((used)) static BrotliDecoderErrorCode FUNC_7(BrotliDecoderState* VAR_8) {
  BrotliBitReader* VAR_9 = &VAR_8->br;
  BrotliMetablockHeaderArena* VAR_10 = &VAR_8->arena.header;
  uint32_t VAR_11 = VAR_10->repeat;
  unsigned VAR_12 = VAR_10->space;
  uint32_t VAR_13 = VAR_10->sub_loop_counter;
  for (; VAR_13 < VAR_0; ++VAR_13) {
    const uint8_t VAR_14 = VAR_5[VAR_13];
    uint32_t VAR_15;
    uint32_t VAR_16;
    if (FUNC_2(!FUNC_6(VAR_9, 4, &VAR_15))) {
      uint32_t VAR_17 = FUNC_4(VAR_9);
      if (VAR_17 != 0) {
        VAR_15 = FUNC_5(VAR_9) & 0xF;
      } else {
        VAR_15 = 0;
      }
      if (VAR_6[VAR_15] > VAR_17) {
        VAR_10->sub_loop_counter = VAR_13;
        VAR_10->repeat = VAR_11;
        VAR_10->space = VAR_12;
        VAR_10->substate_huffman = VAR_4;
        return VAR_2;
      }
    }
    VAR_16 = VAR_7[VAR_15];
    FUNC_3(VAR_9, VAR_6[VAR_15]);
    VAR_10->code_length_code_lengths[VAR_14] = (uint8_t)VAR_16;
    FUNC_1(VAR_10->code_length_code_lengths, VAR_14);
    if (VAR_16 != 0) {
      VAR_12 = VAR_12 - (32U >> VAR_16);
      ++VAR_11;
      ++VAR_10->code_length_histo[VAR_16];
      if (VAR_12 - 1U >= 32U) {

        break;
      }
    }
  }
  if (!(VAR_11 == 1 || VAR_12 == 0)) {
    return FUNC_0(VAR_1);
  }
  return VAR_3;
}
