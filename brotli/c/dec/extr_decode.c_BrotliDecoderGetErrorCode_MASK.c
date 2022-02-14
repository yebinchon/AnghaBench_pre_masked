
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int error_code; } ;
typedef TYPE_1__ BrotliDecoderState ;
typedef int BrotliDecoderErrorCode ;



BrotliDecoderErrorCode FUNC_0(const BrotliDecoderState* VAR_0) {
  return (BrotliDecoderErrorCode)VAR_0->error_code;
}
