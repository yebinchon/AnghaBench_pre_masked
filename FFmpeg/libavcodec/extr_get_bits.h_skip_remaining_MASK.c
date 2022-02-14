
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int cache; unsigned int bits_left; } ;
typedef TYPE_1__ GetBitContext ;



__attribute__((used)) static inline void FUNC_0(GetBitContext *VAR_0, unsigned VAR_1)
{



    VAR_0->cache <<= VAR_1;

    VAR_0->bits_left -= VAR_1;
}
