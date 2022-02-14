
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int (* brotli_free_func ) (void*,TYPE_1__*) ;
struct TYPE_5__ {void* memory_manager_opaque; int (* free_func ) (void*,TYPE_1__*) ;} ;
typedef TYPE_1__ BrotliDecoderState ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(BrotliDecoderState* VAR_0) {
  if (!VAR_0) {
    return;
  } else {
    brotli_free_func VAR_1 = VAR_0->free_func;
    void* VAR_2 = VAR_0->memory_manager_opaque;
    FUNC_0(VAR_0);
    VAR_1(VAR_2, VAR_0);
  }
}
