
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int* median; int error_limit; int slow_level; } ;
typedef TYPE_1__ WvChannel ;
struct TYPE_6__ {int zero; int one; int zeroes; int avctx; scalar_t__ hybrid_bitrate; scalar_t__ hybrid; TYPE_1__* ch; } ;
typedef TYPE_2__ WavpackFrameContext ;
typedef int GetBitContext ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,char*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (unsigned int*,int ,int) ;
 scalar_t__ FUNC_11 (TYPE_2__*) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(WavpackFrameContext *VAR_1, GetBitContext *VAR_2,
                        int VAR_3, int *VAR_4)
{
    int VAR_5, VAR_6;
    int VAR_7, VAR_8, VAR_9, VAR_10;
    WvChannel *VAR_11 = &VAR_1->ch[VAR_3];

    *VAR_4 = 0;

    if ((VAR_1->ch[0].median[0] < 2U) && (VAR_1->ch[1].median[0] < 2U) &&
        !VAR_1->zero && !VAR_1->one) {
        if (VAR_1->zeroes) {
            VAR_1->zeroes--;
            if (VAR_1->zeroes) {
                VAR_11->slow_level -= FUNC_3(VAR_11->slow_level);
                return 0;
            }
        } else {
            VAR_5 = FUNC_9(VAR_2);
            if (VAR_5 >= 2) {
                if (VAR_5 >= 32 || FUNC_6(VAR_2) < VAR_5 - 1)
                    goto error;
                VAR_5 = FUNC_7(VAR_2, VAR_5 - 1) | (1 << (VAR_5 - 1));
            } else {
                if (FUNC_6(VAR_2) < 0)
                    goto error;
            }
            VAR_1->zeroes = VAR_5;
            if (VAR_1->zeroes) {
                FUNC_10(VAR_1->ch[0].median, 0, sizeof(VAR_1->ch[0].median));
                FUNC_10(VAR_1->ch[1].median, 0, sizeof(VAR_1->ch[1].median));
                VAR_11->slow_level -= FUNC_3(VAR_11->slow_level);
                return 0;
            }
        }
    }

    if (VAR_1->zero) {
        VAR_5 = 0;
        VAR_1->zero = 0;
    } else {
        VAR_5 = FUNC_9(VAR_2);
        if (FUNC_6(VAR_2) < 0)
            goto error;
        if (VAR_5 == 16) {
            VAR_6 = FUNC_9(VAR_2);
            if (VAR_6 < 2) {
                if (FUNC_6(VAR_2) < 0)
                    goto error;
                VAR_5 += VAR_6;
            } else {
                if (VAR_6 >= 32 || FUNC_6(VAR_2) < VAR_6 - 1)
                    goto error;
                VAR_5 += FUNC_7(VAR_2, VAR_6 - 1) | (1 << (VAR_6 - 1));
            }
        }

        if (VAR_1->one) {
            VAR_1->one = VAR_5 & 1;
            VAR_5 = (VAR_5 >> 1) + 1;
        } else {
            VAR_1->one = VAR_5 & 1;
            VAR_5 >>= 1;
        }
        VAR_1->zero = !VAR_1->one;
    }

    if (VAR_1->hybrid && !VAR_3) {
        if (FUNC_11(VAR_1) < 0)
            goto error;
    }

    if (!VAR_5) {
        VAR_8 = 0;
        VAR_9 = FUNC_1(0) - 1;
        FUNC_0(0);
    } else if (VAR_5 == 1) {
        VAR_8 = FUNC_1(0);
        VAR_9 = FUNC_1(1) - 1;
        FUNC_2(0);
        FUNC_0(1);
    } else if (VAR_5 == 2) {
        VAR_8 = FUNC_1(0) + FUNC_1(1);
        VAR_9 = FUNC_1(2) - 1;
        FUNC_2(0);
        FUNC_2(1);
        FUNC_0(2);
    } else {
        VAR_8 = FUNC_1(0) + FUNC_1(1) + FUNC_1(2) * (VAR_5 - 2U);
        VAR_9 = FUNC_1(2) - 1;
        FUNC_2(0);
        FUNC_2(1);
        FUNC_2(2);
    }
    if (!VAR_11->error_limit) {
        if (VAR_9 >= 0x2000000U) {
            FUNC_4(VAR_1->avctx, VAR_0, "k %d is too large\n", VAR_9);
            goto error;
        }
        VAR_10 = VAR_8 + FUNC_8(VAR_2, VAR_9);
        if (FUNC_6(VAR_2) <= 0)
            goto error;
    } else {
        int VAR_12 = (VAR_8 * 2U + VAR_9 + 1) >> 1;
        while (VAR_9 > VAR_11->error_limit) {
            if (FUNC_6(VAR_2) <= 0)
                goto error;
            if (FUNC_5(VAR_2)) {
                VAR_9 -= (VAR_12 - (unsigned)VAR_8);
                VAR_8 = VAR_12;
            } else
                VAR_9 = VAR_12 - (unsigned)VAR_8 - 1;
            VAR_12 = (VAR_8 * 2U + VAR_9 + 1) >> 1;
        }
        VAR_10 = VAR_12;
    }
    VAR_7 = FUNC_5(VAR_2);
    if (VAR_1->hybrid_bitrate)
        VAR_11->slow_level += FUNC_12(VAR_10) - FUNC_3(VAR_11->slow_level);
    return VAR_7 ? ~VAR_10 : VAR_10;

error:
    VAR_10 = FUNC_6(VAR_2);
    if (VAR_10 <= 0) {
        FUNC_4(VAR_1->avctx, VAR_0, "Too few bits (%d) left\n", VAR_10);
    }
    *VAR_4 = 1;
    return 0;
}
