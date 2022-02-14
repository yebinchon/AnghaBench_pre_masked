
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int size_in_bits; int bit_left; scalar_t__ bit_buf; int * buf; int * buf_ptr; int * buf_end; } ;
typedef TYPE_1__ PutBitContext ;



__attribute__((used)) static inline void FUNC_0(PutBitContext *VAR_0, uint8_t *VAR_1,
                                 int VAR_2)
{
    if (VAR_2 < 0) {
        VAR_2 = 0;
        VAR_1 = ((void*)0);
    }

    VAR_0->size_in_bits = 8 * VAR_2;
    VAR_0->buf = VAR_1;
    VAR_0->buf_end = VAR_0->buf + VAR_2;
    VAR_0->buf_ptr = VAR_0->buf;
    VAR_0->bit_left = 32;
    VAR_0->bit_buf = 0;
}
