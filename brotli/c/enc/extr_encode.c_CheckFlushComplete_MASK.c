
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ stream_state_; scalar_t__ available_out_; scalar_t__ next_out_; } ;
typedef TYPE_1__ BrotliEncoderState ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_0(BrotliEncoderState* VAR_2) {
  if (VAR_2->stream_state_ == VAR_0 &&
      VAR_2->available_out_ == 0) {
    VAR_2->stream_state_ = VAR_1;
    VAR_2->next_out_ = 0;
  }
}
