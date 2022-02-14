
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_10__ {int substate_context_map; int context_index; int max_run_length_prefix; int code; int context_map_table; } ;
struct TYPE_9__ {TYPE_2__ header; } ;
struct TYPE_11__ {TYPE_1__ arena; int br; } ;
typedef TYPE_2__ BrotliMetablockHeaderArena ;
typedef TYPE_3__ BrotliDecoderState ;
typedef int BrotliDecoderErrorCode ;
typedef int BrotliBitReader ;
typedef int BROTLI_BOOL ;


 scalar_t__ FUNC_0 (TYPE_3__*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int) ;





 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int,int*) ;
 int FUNC_5 (int *,int,int*) ;
 int FUNC_6 (TYPE_3__*,int *,int*) ;
 int FUNC_7 (int *,int,TYPE_3__*) ;
 int FUNC_8 (int,int,int ,int *,TYPE_3__*) ;
 int FUNC_9 (int ,int *,int*) ;
 int FUNC_10 (int *,int ,size_t) ;

__attribute__((used)) static BrotliDecoderErrorCode FUNC_11(uint32_t VAR_6,
                                               uint32_t* VAR_7,
                                               uint8_t** VAR_8,
                                               BrotliDecoderState* VAR_9) {
  BrotliBitReader* VAR_10 = &VAR_9->br;
  BrotliDecoderErrorCode VAR_11 = VAR_4;
  BrotliMetablockHeaderArena* VAR_12 = &VAR_9->arena.header;

  switch ((int)VAR_12->substate_context_map) {
    case 130:
      VAR_11 = FUNC_6(VAR_9, VAR_10, VAR_7);
      if (VAR_11 != VAR_4) {
        return VAR_11;
      }
      (*VAR_7)++;
      VAR_12->context_index = 0;
      FUNC_2(VAR_6);
      FUNC_2(*VAR_7);
      *VAR_8 =
          (uint8_t*)FUNC_0(VAR_9, (size_t)VAR_6);
      if (*VAR_8 == 0) {
        return FUNC_1(VAR_0);
      }
      if (*VAR_7 <= 1) {
        FUNC_10(*VAR_8, 0, (size_t)VAR_6);
        return VAR_4;
      }
      VAR_12->substate_context_map = 129;


    case 129: {
      uint32_t VAR_13;


      if (!FUNC_4(VAR_10, 5, &VAR_13)) {
        return VAR_3;
      }
      if ((VAR_13 & 1) != 0) {
        VAR_12->max_run_length_prefix = (VAR_13 >> 1) + 1;
        FUNC_3(VAR_10, 5);
      } else {
        VAR_12->max_run_length_prefix = 0;
        FUNC_3(VAR_10, 1);
      }
      FUNC_2(VAR_12->max_run_length_prefix);
      VAR_12->substate_context_map = 131;
    }


    case 131: {
      uint32_t VAR_14 = *VAR_7 + VAR_12->max_run_length_prefix;
      VAR_11 = FUNC_8(VAR_14, VAR_14,
                               VAR_12->context_map_table, ((void*)0), VAR_9);
      if (VAR_11 != VAR_4) return VAR_11;
      VAR_12->code = 0xFFFF;
      VAR_12->substate_context_map = 132;
    }


    case 132: {
      uint32_t VAR_15 = VAR_12->context_index;
      uint32_t VAR_16 = VAR_12->max_run_length_prefix;
      uint8_t* VAR_17 = *VAR_8;
      uint32_t VAR_18 = VAR_12->code;
      BROTLI_BOOL VAR_19 = (VAR_18 != 0xFFFF);
      while (VAR_15 < VAR_6 || VAR_19) {
        if (!VAR_19) {
          if (!FUNC_9(VAR_12->context_map_table, VAR_10, &VAR_18)) {
            VAR_12->code = 0xFFFF;
            VAR_12->context_index = VAR_15;
            return VAR_3;
          }
          FUNC_2(VAR_18);

          if (VAR_18 == 0) {
            VAR_17[VAR_15++] = 0;
            continue;
          }
          if (VAR_18 > VAR_16) {
            VAR_17[VAR_15++] =
                (uint8_t)(VAR_18 - VAR_16);
            continue;
          }
        } else {
          VAR_19 = VAR_5;
        }

        {
          uint32_t VAR_20;
          if (!FUNC_5(VAR_10, VAR_18, &VAR_20)) {
            VAR_12->code = VAR_18;
            VAR_12->context_index = VAR_15;
            return VAR_3;
          }
          VAR_20 += 1U << VAR_18;
          FUNC_2(VAR_20);
          if (VAR_15 + VAR_20 > VAR_6) {
            return
                FUNC_1(VAR_1);
          }
          do {
            VAR_17[VAR_15++] = 0;
          } while (--VAR_20);
        }
      }
    }


    case 128: {
      uint32_t VAR_21;
      if (!FUNC_5(VAR_10, 1, &VAR_21)) {
        VAR_12->substate_context_map = 128;
        return VAR_3;
      }
      if (VAR_21 != 0) {
        FUNC_7(*VAR_8, VAR_6, VAR_9);
      }
      VAR_12->substate_context_map = 130;
      return VAR_4;
    }

    default:
      return
          FUNC_1(VAR_2);
  }
}
