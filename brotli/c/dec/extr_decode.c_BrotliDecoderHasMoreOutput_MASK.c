
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ringbuffer; scalar_t__ error_code; } ;
typedef TYPE_1__ BrotliDecoderState ;
typedef int BROTLI_BOOL ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*,int ) ;

BROTLI_BOOL FUNC_2(const BrotliDecoderState* VAR_1) {

  if ((int)VAR_1->error_code < 0) {
    return VAR_0;
  }
  return FUNC_0(
      VAR_1->ringbuffer != 0 && FUNC_1(VAR_1, VAR_0) != 0);
}
