
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_5__ {int bits; TYPE_1__* avctx; } ;
struct TYPE_4__ {int lowres; } ;
typedef TYPE_2__ MJpegDecodeContext ;



__attribute__((used)) static void FUNC_0(MJpegDecodeContext *VAR_0, uint8_t *VAR_1, int VAR_2)
{
    int VAR_3, VAR_4;
    int VAR_5 = 8 >> VAR_0->avctx->lowres;
    if (VAR_0->bits > 8) {
        for (VAR_4=0; VAR_4<VAR_5; VAR_4++)
            for (VAR_3=0; VAR_3<VAR_5; VAR_3++)
                *(uint16_t*)(VAR_1 + 2*VAR_3 + VAR_4*VAR_2) <<= 16 - VAR_0->bits;
    } else {
        for (VAR_4=0; VAR_4<VAR_5; VAR_4++)
            for (VAR_3=0; VAR_3<VAR_5; VAR_3++)
                *(VAR_1 + VAR_3 + VAR_4*VAR_2) <<= 8 - VAR_0->bits;
    }
}
