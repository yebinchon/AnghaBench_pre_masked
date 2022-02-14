
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int size_in_bits; int * buf; int * buf_ptr; int * buf_end; } ;
typedef TYPE_1__ PutBitContext ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(PutBitContext *VAR_0, uint8_t *VAR_1,
                                   int VAR_2)
{
    FUNC_0(8*VAR_2 > VAR_0->size_in_bits);

    VAR_0->buf_end = VAR_1 + VAR_2;
    VAR_0->buf_ptr = VAR_1 + (VAR_0->buf_ptr - VAR_0->buf);
    VAR_0->buf = VAR_1;
    VAR_0->size_in_bits = 8 * VAR_2;
}
