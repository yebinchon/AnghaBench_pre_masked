
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ stream_state_; } ;
typedef TYPE_1__ BrotliEncoderState ;
typedef int BROTLI_BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;

BROTLI_BOOL FUNC_2(BrotliEncoderState* VAR_1) {
  return FUNC_1(VAR_1->stream_state_ == VAR_0 &&
      !FUNC_0(VAR_1));
}
