
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_6__ {scalar_t__ symbol; scalar_t__ space; int next_symbol; int code_length_histo; int symbol_lists; int repeat_code_len; int prev_code_len; int repeat; int * table; } ;
struct TYPE_5__ {TYPE_2__ header; } ;
struct TYPE_7__ {TYPE_1__ arena; int br; } ;
typedef int HuffmanCode ;
typedef TYPE_2__ BrotliMetablockHeaderArena ;
typedef TYPE_3__ BrotliDecoderState ;
typedef int BrotliDecoderErrorCode ;
typedef int BrotliBitReader ;
typedef scalar_t__ BROTLI_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int const*,scalar_t__) ;
 scalar_t__ FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,scalar_t__) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (scalar_t__,scalar_t__,scalar_t__,scalar_t__*,int *,scalar_t__*,int *,int *,int ,int ,int ) ;
 int FUNC_10 (scalar_t__,scalar_t__*,int *,scalar_t__*,int *,int ,int ,int ) ;

__attribute__((used)) static BrotliDecoderErrorCode FUNC_11(
    uint32_t VAR_6, BrotliDecoderState* VAR_7) {
  BrotliBitReader* VAR_8 = &VAR_7->br;
  BrotliMetablockHeaderArena* VAR_9 = &VAR_7->arena.header;
  BROTLI_BOOL VAR_10 = VAR_2;
  while (VAR_9->symbol < VAR_6 && VAR_9->space > 0) {
    const HuffmanCode* VAR_11 = VAR_9->table;
    uint32_t VAR_12;
    uint32_t VAR_13;
    uint32_t VAR_14 = 0;
    FUNC_3(VAR_11);
    if (VAR_10 && !FUNC_8(VAR_8)) return VAR_0;
    VAR_10 = VAR_2;
    VAR_13 = FUNC_6(VAR_8);
    if (VAR_13 != 0) {
      VAR_14 = (uint32_t)FUNC_7(VAR_8);
    }
    FUNC_0(VAR_11,
        VAR_14 & FUNC_4(VAR_3));
    if (FUNC_1(VAR_11) > VAR_13) {
      VAR_10 = VAR_5;
      continue;
    }
    VAR_12 = FUNC_2(VAR_11);
    if (VAR_12 < VAR_4) {
      FUNC_5(VAR_8, FUNC_1(VAR_11));
      FUNC_10(VAR_12, &VAR_9->symbol, &VAR_9->repeat, &VAR_9->space,
          &VAR_9->prev_code_len, VAR_9->symbol_lists, VAR_9->code_length_histo,
          VAR_9->next_symbol);
    } else {
      uint32_t VAR_15 = VAR_12 - 14U;
      uint32_t VAR_16 = (VAR_14 >> FUNC_1(VAR_11)) &
          FUNC_4(VAR_15);
      if (VAR_13 < FUNC_1(VAR_11) + VAR_15) {
        VAR_10 = VAR_5;
        continue;
      }
      FUNC_5(VAR_8, FUNC_1(VAR_11) + VAR_15);
      FUNC_9(VAR_12, VAR_16, VAR_6,
          &VAR_9->symbol, &VAR_9->repeat, &VAR_9->space, &VAR_9->prev_code_len,
          &VAR_9->repeat_code_len, VAR_9->symbol_lists, VAR_9->code_length_histo,
          VAR_9->next_symbol);
    }
  }
  return VAR_1;
}
