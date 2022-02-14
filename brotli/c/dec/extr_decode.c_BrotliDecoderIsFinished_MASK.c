
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ state; } ;
typedef TYPE_1__ BrotliDecoderState ;
typedef int BROTLI_BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__ const*) ;
 scalar_t__ FUNC_1 (int) ;

BROTLI_BOOL FUNC_2(const BrotliDecoderState* VAR_1) {
  return FUNC_1(VAR_1->state == VAR_0) &&
      !FUNC_0(VAR_1);
}
