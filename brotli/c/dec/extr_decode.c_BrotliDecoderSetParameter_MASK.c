
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ state; int canny_ringbuffer_allocation; int large_window; } ;
typedef TYPE_1__ BrotliDecoderState ;
typedef int BrotliDecoderParameter ;
typedef int BROTLI_BOOL ;




 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;

BROTLI_BOOL FUNC_1(
    BrotliDecoderState* VAR_3, BrotliDecoderParameter VAR_4, uint32_t VAR_5) {
  if (VAR_3->state != VAR_1) return VAR_0;
  switch (VAR_4) {
    case 129:
      VAR_3->canny_ringbuffer_allocation = !!VAR_5 ? 0 : 1;
      return VAR_2;

    case 128:
      VAR_3->large_window = FUNC_0(!!VAR_5);
      return VAR_2;

    default: return VAR_0;
  }
}
