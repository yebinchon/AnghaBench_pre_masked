
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int index; int buffer_end; int buffer; int cache; int bits_left; } ;
typedef TYPE_1__ GetBitContext ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline void FUNC_2(GetBitContext *VAR_0, int VAR_1)
{

    if (VAR_0->index >> 3 >= VAR_0->buffer_end - VAR_0->buffer)
        return;


    if (VAR_1)
    VAR_0->cache = (uint64_t)FUNC_1(VAR_0->buffer + (VAR_0->index >> 3)) << VAR_0->bits_left | VAR_0->cache;
    else
    VAR_0->cache = VAR_0->cache | (uint64_t)FUNC_0(VAR_0->buffer + (VAR_0->index >> 3)) << (32 - VAR_0->bits_left);
    VAR_0->index += 32;
    VAR_0->bits_left += 32;
}
