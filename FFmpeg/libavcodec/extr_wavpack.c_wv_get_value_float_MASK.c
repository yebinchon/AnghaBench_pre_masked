
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int float_max_exp; unsigned int float_shift; int float_flag; int gb_extra_bits; scalar_t__ got_extra_bits; } ;
typedef TYPE_1__ WavpackFrameContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static float FUNC_4(WavpackFrameContext *VAR_6, uint32_t *VAR_7, int VAR_8)
{
    union {
        float f;
        uint32_t u;
    } VAR_9;

    unsigned int VAR_10;
    int VAR_11 = VAR_6->float_max_exp;

    if (VAR_6->got_extra_bits) {
        const int VAR_12 = 1 + 23 + 8 + 1;
        const int VAR_13 = FUNC_3(&VAR_6->gb_extra_bits);

        if (VAR_13 + 8 * VAR_0 < VAR_12)
            return 0.0;
    }

    if (VAR_8) {
        VAR_8 *= 1U << VAR_6->float_shift;
        VAR_10 = VAR_8 < 0;
        if (VAR_10)
            VAR_8 = -(unsigned)VAR_8;
        if (VAR_8 >= 0x1000000U) {
            if (VAR_6->got_extra_bits && FUNC_2(&VAR_6->gb_extra_bits))
                VAR_8 = FUNC_1(&VAR_6->gb_extra_bits, 23);
            else
                VAR_8 = 0;
            VAR_11 = 255;
        } else if (VAR_11) {
            int VAR_14 = 23 - FUNC_0(VAR_8);
            VAR_11 = VAR_6->float_max_exp;
            if (VAR_11 <= VAR_14)
                VAR_14 = --VAR_11;
            VAR_11 -= VAR_14;

            if (VAR_14) {
                VAR_8 <<= VAR_14;
                if ((VAR_6->float_flag & VAR_1) ||
                    (VAR_6->got_extra_bits &&
                     (VAR_6->float_flag & VAR_2) &&
                     FUNC_2(&VAR_6->gb_extra_bits))) {
                    VAR_8 |= (1 << VAR_14) - 1;
                } else if (VAR_6->got_extra_bits &&
                           (VAR_6->float_flag & VAR_3)) {
                    VAR_8 |= FUNC_1(&VAR_6->gb_extra_bits, VAR_14);
                }
            }
        } else {
            VAR_11 = VAR_6->float_max_exp;
        }
        VAR_8 &= 0x7fffff;
    } else {
        VAR_10 = 0;
        VAR_11 = 0;
        if (VAR_6->got_extra_bits && (VAR_6->float_flag & VAR_4)) {
            if (FUNC_2(&VAR_6->gb_extra_bits)) {
                VAR_8 = FUNC_1(&VAR_6->gb_extra_bits, 23);
                if (VAR_6->float_max_exp >= 25)
                    VAR_11 = FUNC_1(&VAR_6->gb_extra_bits, 8);
                VAR_10 = FUNC_2(&VAR_6->gb_extra_bits);
            } else {
                if (VAR_6->float_flag & VAR_5)
                    VAR_10 = FUNC_2(&VAR_6->gb_extra_bits);
            }
        }
    }

    *VAR_7 = *VAR_7 * 27 + VAR_8 * 9 + VAR_11 * 3 + VAR_10;

    VAR_9.u = (VAR_10 << 31) | (VAR_11 << 23) | VAR_8;
    return VAR_9.f;
}
