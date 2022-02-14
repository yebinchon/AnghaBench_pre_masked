
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int worst_quantization_noise; scalar_t__ consumed_bits; scalar_t__ frame_bits; int worst_noise_ever; } ;
typedef TYPE_1__ DCAEncContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int,int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(DCAEncContext *VAR_3)
{

    int VAR_4, VAR_5, VAR_6;
    int VAR_7 = 0;
    int VAR_8 = 1;
restart:
    FUNC_0(VAR_3, VAR_3->worst_quantization_noise, VAR_8);
    VAR_4 = VAR_5 = VAR_3->worst_quantization_noise;
    if (VAR_3->consumed_bits > VAR_3->frame_bits) {
        while (VAR_3->consumed_bits > VAR_3->frame_bits) {
            if (VAR_7 == VAR_0 && VAR_8) {
                VAR_8 = 0;
                goto restart;
            }
            VAR_4 = VAR_5;
            VAR_5 += VAR_2;
            VAR_7 = FUNC_0(VAR_3, VAR_5, VAR_8);
        }
    } else {
        while (VAR_3->consumed_bits <= VAR_3->frame_bits) {
            VAR_5 = VAR_4;
            if (VAR_7 == VAR_1)
                goto out;
            VAR_4 -= VAR_2;
            VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_8);
        }
    }


    for (VAR_6 = VAR_2 >> 1; VAR_6; VAR_6 >>= 1) {
        FUNC_0(VAR_3, VAR_5 - VAR_6, VAR_8);
        if (VAR_3->consumed_bits <= VAR_3->frame_bits)
            VAR_5 -= VAR_6;
    }
    FUNC_0(VAR_3, VAR_5, VAR_8);
out:
    VAR_3->worst_quantization_noise = VAR_5;
    if (VAR_5 > VAR_3->worst_noise_ever)
        VAR_3->worst_noise_ever = VAR_5;
}
