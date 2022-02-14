
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t rb_roundtrips; size_t partial_pos_out; scalar_t__ ringbuffer_size; scalar_t__ pos; } ;
typedef TYPE_1__ BrotliDecoderState ;
typedef scalar_t__ BROTLI_BOOL ;



__attribute__((used)) static size_t FUNC_0(const BrotliDecoderState* VAR_0, BROTLI_BOOL VAR_1) {
  size_t VAR_2 = VAR_1 && VAR_0->pos > VAR_0->ringbuffer_size ?
      (size_t)VAR_0->ringbuffer_size : (size_t)(VAR_0->pos);
  size_t VAR_3 = (VAR_0->rb_roundtrips * (size_t)VAR_0->ringbuffer_size) + VAR_2;
  return VAR_3 - VAR_0->partial_pos_out;
}
