
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_6__ {scalar_t__ sub_loop_counter; scalar_t__ symbol; scalar_t__* symbols_lists_array; int substate_huffman; } ;
struct TYPE_5__ {TYPE_2__ header; } ;
struct TYPE_7__ {TYPE_1__ arena; int br; } ;
typedef TYPE_2__ BrotliMetablockHeaderArena ;
typedef TYPE_3__ BrotliDecoderState ;
typedef int BrotliDecoderErrorCode ;
typedef int BrotliBitReader ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_4 ;
 int FUNC_3 (int *,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

__attribute__((used)) static BrotliDecoderErrorCode FUNC_5(
    uint32_t VAR_5, uint32_t VAR_6,
    BrotliDecoderState* VAR_7) {

  BrotliBitReader* VAR_8 = &VAR_7->br;
  BrotliMetablockHeaderArena* VAR_9 = &VAR_7->arena.header;
  uint32_t VAR_10 = FUNC_4(VAR_5 - 1);
  uint32_t VAR_11 = VAR_9->sub_loop_counter;
  uint32_t VAR_12 = VAR_9->symbol;
  while (VAR_11 <= VAR_12) {
    uint32_t VAR_13;
    if (FUNC_2(!FUNC_3(VAR_8, VAR_10, &VAR_13))) {
      VAR_9->sub_loop_counter = VAR_11;
      VAR_9->substate_huffman = VAR_4;
      return VAR_2;
    }
    if (VAR_13 >= VAR_6) {
      return
          FUNC_0(VAR_0);
    }
    VAR_9->symbols_lists_array[VAR_11] = (uint16_t)VAR_13;
    FUNC_1(VAR_9->symbols_lists_array[VAR_11]);
    ++VAR_11;
  }

  for (VAR_11 = 0; VAR_11 < VAR_12; ++VAR_11) {
    uint32_t VAR_14 = VAR_11 + 1;
    for (; VAR_14 <= VAR_12; ++VAR_14) {
      if (VAR_9->symbols_lists_array[VAR_11] == VAR_9->symbols_lists_array[VAR_14]) {
        return FUNC_0(VAR_1);
      }
    }
  }

  return VAR_3;
}
