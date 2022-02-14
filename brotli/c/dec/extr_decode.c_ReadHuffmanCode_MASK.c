
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_10__ {int substate_huffman; size_t sub_loop_counter; int space; size_t symbol; size_t* next_symbol; int* symbol_lists; int * code_length_histo; int repeat_code_len; int repeat; int prev_code_len; int * code_length_code_lengths; int table; int symbols_lists_array; } ;
struct TYPE_9__ {TYPE_2__ header; } ;
struct TYPE_11__ {TYPE_1__ arena; int br; } ;
typedef int HuffmanCode ;
typedef TYPE_2__ BrotliMetablockHeaderArena ;
typedef TYPE_3__ BrotliDecoderState ;
typedef int BrotliDecoderErrorCode ;
typedef int BrotliBitReader ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (size_t) ;






 int FUNC_3 (int ,int *,int *) ;
 size_t FUNC_4 (int *,int ,int*,int *) ;
 size_t FUNC_5 (int *,int ,int ,size_t) ;
 int FUNC_6 (int *,int,size_t*) ;
 int VAR_7 ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (size_t,size_t,TYPE_3__*) ;
 int FUNC_9 (size_t,TYPE_3__*) ;
 int FUNC_10 (size_t,TYPE_3__*) ;
 int FUNC_11 (int *,int ,int) ;

__attribute__((used)) static BrotliDecoderErrorCode FUNC_12(uint32_t VAR_8,
                                              uint32_t VAR_9,
                                              HuffmanCode* VAR_10,
                                              uint32_t* VAR_11,
                                              BrotliDecoderState* VAR_12) {
  BrotliBitReader* VAR_13 = &VAR_12->br;
  BrotliMetablockHeaderArena* VAR_14 = &VAR_12->arena.header;

  for (;;) {
    switch (VAR_14->substate_huffman) {
      case 131:
        if (!FUNC_6(VAR_13, 2, &VAR_14->sub_loop_counter)) {
          return VAR_2;
        }
        FUNC_2(VAR_14->sub_loop_counter);



        if (VAR_14->sub_loop_counter != 1) {
          VAR_14->space = 32;
          VAR_14->repeat = 0;
          FUNC_11(&VAR_14->code_length_histo[0], 0, sizeof(VAR_14->code_length_histo[0]) *
              (VAR_5 + 1));
          FUNC_11(&VAR_14->code_length_code_lengths[0], 0,
              sizeof(VAR_14->code_length_code_lengths));
          VAR_14->substate_huffman = 133;
          continue;
        }


      case 128:

        if (!FUNC_6(VAR_13, 2, &VAR_14->symbol)) {
          VAR_14->substate_huffman = 128;
          return VAR_2;
        }
        VAR_14->sub_loop_counter = 0;


      case 129: {
        BrotliDecoderErrorCode VAR_15 =
            FUNC_8(VAR_8, VAR_9, VAR_12);
        if (VAR_15 != VAR_3) {
          return VAR_15;
        }
      }


      case 130: {
        uint32_t VAR_16;
        if (VAR_14->symbol == 3) {
          uint32_t VAR_17;
          if (!FUNC_6(VAR_13, 1, &VAR_17)) {
            VAR_14->substate_huffman = 130;
            return VAR_2;
          }
          VAR_14->symbol += VAR_17;
        }
        FUNC_2(VAR_14->symbol);
        VAR_16 = FUNC_5(
            VAR_10, VAR_7, VAR_14->symbols_lists_array, VAR_14->symbol);
        if (VAR_11) {
          *VAR_11 = VAR_16;
        }
        VAR_14->substate_huffman = 131;
        return VAR_3;
      }


      case 133: {
        uint32_t VAR_18;
        BrotliDecoderErrorCode VAR_19 = FUNC_7(VAR_12);
        if (VAR_19 != VAR_3) {
          return VAR_19;
        }
        FUNC_3(VAR_14->table,
                                           VAR_14->code_length_code_lengths,
                                           VAR_14->code_length_histo);
        FUNC_11(&VAR_14->code_length_histo[0], 0, sizeof(VAR_14->code_length_histo));
        for (VAR_18 = 0; VAR_18 <= VAR_4; ++VAR_18) {
          VAR_14->next_symbol[VAR_18] = (int)VAR_18 - (VAR_4 + 1);
          VAR_14->symbol_lists[VAR_14->next_symbol[VAR_18]] = 0xFFFF;
        }

        VAR_14->symbol = 0;
        VAR_14->prev_code_len = VAR_6;
        VAR_14->repeat = 0;
        VAR_14->repeat_code_len = 0;
        VAR_14->space = 32768;
        VAR_14->substate_huffman = 132;
      }


      case 132: {
        uint32_t VAR_20;
        BrotliDecoderErrorCode VAR_21 = FUNC_9(
            VAR_9, VAR_12);
        if (VAR_21 == VAR_2) {
          VAR_21 = FUNC_10(VAR_9, VAR_12);
        }
        if (VAR_21 != VAR_3) {
          return VAR_21;
        }

        if (VAR_14->space != 0) {
          FUNC_1(("[ReadHuffmanCode] space = %d\n", (int)VAR_14->space));
          return FUNC_0(VAR_0);
        }
        VAR_20 = FUNC_4(
            VAR_10, VAR_7, VAR_14->symbol_lists, VAR_14->code_length_histo);
        if (VAR_11) {
          *VAR_11 = VAR_20;
        }
        VAR_14->substate_huffman = 131;
        return VAR_3;
      }

      default:
        return
            FUNC_0(VAR_1);
    }
  }
}
