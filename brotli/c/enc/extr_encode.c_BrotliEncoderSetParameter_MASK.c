
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int distance_postfix_bits; int num_direct_distance_codes; } ;
struct TYPE_6__ {int quality; int lgwin; int lgblock; int size_hint; int stream_offset; TYPE_1__ dist; void* large_window; void* disable_literal_context_modeling; int mode; } ;
struct TYPE_7__ {TYPE_2__ params; scalar_t__ is_initialized_; } ;
typedef TYPE_3__ BrotliEncoderState ;
typedef int BrotliEncoderParameter ;
typedef int BrotliEncoderMode ;
typedef int BROTLI_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;

BROTLI_BOOL FUNC_1(
    BrotliEncoderState* VAR_2, BrotliEncoderParameter VAR_3, uint32_t VAR_4) {

  if (VAR_2->is_initialized_) return VAR_0;

  switch (VAR_3) {
    case 133:
      VAR_2->params.mode = (BrotliEncoderMode)VAR_4;
      return VAR_1;

    case 130:
      VAR_2->params.quality = (int)VAR_4;
      return VAR_1;

    case 134:
      VAR_2->params.lgwin = (int)VAR_4;
      return VAR_1;

    case 135:
      VAR_2->params.lgblock = (int)VAR_4;
      return VAR_1;

    case 137:
      if ((VAR_4 != 0) && (VAR_4 != 1)) return VAR_0;
      VAR_2->params.disable_literal_context_modeling = FUNC_0(!!VAR_4);
      return VAR_1;

    case 129:
      VAR_2->params.size_hint = VAR_4;
      return VAR_1;

    case 136:
      VAR_2->params.large_window = FUNC_0(!!VAR_4);
      return VAR_1;

    case 131:
      VAR_2->params.dist.distance_postfix_bits = VAR_4;
      return VAR_1;

    case 132:
      VAR_2->params.dist.num_direct_distance_codes = VAR_4;
      return VAR_1;

    case 128:
      if (VAR_4 > (1u << 30)) return VAR_0;
      VAR_2->params.stream_offset = VAR_4;
      return VAR_1;

    default: return VAR_0;
  }
}
