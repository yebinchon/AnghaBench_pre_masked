
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int window_bits; scalar_t__ large_window; } ;
typedef TYPE_1__ BrotliDecoderState ;
typedef int BrotliDecoderErrorCode ;
typedef int BrotliBitReader ;
typedef scalar_t__ BROTLI_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,int,int*) ;

__attribute__((used)) static BrotliDecoderErrorCode FUNC_2(BrotliDecoderState* VAR_4,
                                               BrotliBitReader* VAR_5) {
  uint32_t VAR_6;
  BROTLI_BOOL VAR_7 = VAR_4->large_window;
  VAR_4->large_window = VAR_2;
  FUNC_1(VAR_5, 1, &VAR_6);
  if (VAR_6 == 0) {
    VAR_4->window_bits = 16;
    return VAR_1;
  }
  FUNC_1(VAR_5, 3, &VAR_6);
  if (VAR_6 != 0) {
    VAR_4->window_bits = 17 + VAR_6;
    return VAR_1;
  }
  FUNC_1(VAR_5, 3, &VAR_6);
  if (VAR_6 == 1) {
    if (VAR_7) {
      FUNC_1(VAR_5, 1, &VAR_6);
      if (VAR_6 == 1) {
        return FUNC_0(VAR_0);
      }
      VAR_4->large_window = VAR_3;
      return VAR_1;
    } else {
      return FUNC_0(VAR_0);
    }
  }
  if (VAR_6 != 0) {
    VAR_4->window_bits = 8 + VAR_6;
    return VAR_1;
  }
  VAR_4->window_bits = 17;
  return VAR_1;
}
