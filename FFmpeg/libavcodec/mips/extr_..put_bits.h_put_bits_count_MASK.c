
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buf_ptr; int buf; int bit_left; } ;
typedef TYPE_1__ PutBitContext ;



__attribute__((used)) static inline int FUNC_0(PutBitContext *VAR_0)
{
    return (VAR_0->buf_ptr - VAR_0->buf) * 8 + 32 - VAR_0->bit_left;
}
