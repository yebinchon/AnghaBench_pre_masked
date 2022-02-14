
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int loop_counter; scalar_t__* context_modes; scalar_t__* num_block_types; int br; } ;
typedef TYPE_1__ BrotliDecoderState ;
typedef int BrotliDecoderErrorCode ;
typedef int BrotliBitReader ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*,int) ;
 int FUNC_1 (int *,int,scalar_t__*) ;

__attribute__((used)) static BrotliDecoderErrorCode FUNC_2(BrotliDecoderState* VAR_2) {
  BrotliBitReader* VAR_3 = &VAR_2->br;
  int VAR_4 = VAR_2->loop_counter;

  while (VAR_4 < (int)VAR_2->num_block_types[0]) {
    uint32_t VAR_5;
    if (!FUNC_1(VAR_3, 2, &VAR_5)) {
      VAR_2->loop_counter = VAR_4;
      return VAR_0;
    }
    VAR_2->context_modes[VAR_4] = (uint8_t)VAR_5;
    FUNC_0(VAR_2->context_modes, VAR_4);
    VAR_4++;
  }
  return VAR_1;
}
