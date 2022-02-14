
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct TYPE_6__ {scalar_t__ symbol; scalar_t__ repeat; scalar_t__ space; scalar_t__ prev_code_len; scalar_t__ repeat_code_len; int* next_symbol; int * table; int * code_length_histo; int * symbol_lists; } ;
struct TYPE_5__ {TYPE_2__ header; } ;
struct TYPE_7__ {TYPE_1__ arena; int br; } ;
typedef int HuffmanCode ;
typedef TYPE_2__ BrotliMetablockHeaderArena ;
typedef TYPE_3__ BrotliDecoderState ;
typedef int BrotliDecoderErrorCode ;
typedef int BrotliBitReader ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*,scalar_t__) ;
 scalar_t__ FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (scalar_t__,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,int *,int *,int*) ;
 int FUNC_11 (scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,int *,int *,int*) ;

__attribute__((used)) static BrotliDecoderErrorCode FUNC_12(
    uint32_t VAR_5, BrotliDecoderState* VAR_6) {
  BrotliBitReader* VAR_7 = &VAR_6->br;
  BrotliMetablockHeaderArena* VAR_8 = &VAR_6->arena.header;
  uint32_t VAR_9 = VAR_8->symbol;
  uint32_t VAR_10 = VAR_8->repeat;
  uint32_t VAR_11 = VAR_8->space;
  uint32_t VAR_12 = VAR_8->prev_code_len;
  uint32_t VAR_13 = VAR_8->repeat_code_len;
  uint16_t* VAR_14 = VAR_8->symbol_lists;
  uint16_t* VAR_15 = VAR_8->code_length_histo;
  int* VAR_16 = VAR_8->next_symbol;
  if (!FUNC_9(VAR_7)) {
    return VAR_0;
  }
  while (VAR_9 < VAR_5 && VAR_11 > 0) {
    const HuffmanCode* VAR_17 = VAR_8->table;
    uint32_t VAR_18;
    FUNC_3(VAR_17);
    if (!FUNC_5(VAR_7, VAR_4)) {
      VAR_8->symbol = VAR_9;
      VAR_8->repeat = VAR_10;
      VAR_8->prev_code_len = VAR_12;
      VAR_8->repeat_code_len = VAR_13;
      VAR_8->space = VAR_11;
      return VAR_0;
    }
    FUNC_7(VAR_7);
    FUNC_0(VAR_17, FUNC_8(VAR_7) &
        FUNC_4(VAR_2));
    FUNC_6(VAR_7, FUNC_1(VAR_17));
    VAR_18 = FUNC_2(VAR_17);
    if (VAR_18 < VAR_3) {
      FUNC_11(VAR_18, &VAR_9, &VAR_10, &VAR_11,
          &VAR_12, VAR_14, VAR_15, VAR_16);
    } else {
      uint32_t VAR_19 =
          (VAR_18 == VAR_3) ? 2 : 3;
      uint32_t VAR_20 =
          (uint32_t)FUNC_8(VAR_7) & FUNC_4(VAR_19);
      FUNC_6(VAR_7, VAR_19);
      FUNC_10(VAR_18, VAR_20, VAR_5,
          &VAR_9, &VAR_10, &VAR_11, &VAR_12, &VAR_13,
          VAR_14, VAR_15, VAR_16);
    }
  }
  VAR_8->space = VAR_11;
  return VAR_1;
}
