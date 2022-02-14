
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int32_t ;
typedef int WvChannel ;
struct TYPE_7__ {int holding_zero; int zeros_acc; int holding_one; int pend_data; int pend_count; TYPE_1__* c; } ;
typedef TYPE_2__ WavPackWords ;
struct TYPE_8__ {TYPE_2__ w; int pb; } ;
typedef TYPE_3__ WavPackEncodeContext ;
struct TYPE_6__ {int* median; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *,int,int ) ;

__attribute__((used)) static void FUNC_7(WavPackEncodeContext *VAR_0, WvChannel *VAR_1, int32_t VAR_2)
{
    WavPackWords *VAR_3 = &VAR_0->w;
    uint32_t VAR_4, VAR_5, VAR_6;
    int VAR_7 = VAR_2 < 0;

    if (VAR_0->w.c[0].median[0] < 2 && !VAR_0->w.holding_zero && VAR_0->w.c[1].median[0] < 2) {
        if (VAR_3->zeros_acc) {
            if (VAR_2)
                FUNC_5(VAR_0);
            else {
                VAR_3->zeros_acc++;
                return;
            }
        } else if (VAR_2) {
            FUNC_6(&VAR_0->pb, 1, 0);
        } else {
            FUNC_0(VAR_0->w.c[0].median);
            FUNC_0(VAR_0->w.c[1].median);
            VAR_3->zeros_acc = 1;
            return;
        }
    }

    if (VAR_7)
        VAR_2 = ~VAR_2;

    if (VAR_2 < (int32_t) FUNC_2(0)) {
        VAR_4 = VAR_5 = 0;
        VAR_6 = FUNC_2(0) - 1;
        FUNC_1(0);
    } else {
        VAR_5 = FUNC_2(0);
        FUNC_3(0);

        if (VAR_2 - VAR_5 < FUNC_2(1)) {
            VAR_4 = 1;
            VAR_6 = VAR_5 + FUNC_2(1) - 1;
            FUNC_1(1);
        } else {
            VAR_5 += FUNC_2(1);
            FUNC_3(1);

            if (VAR_2 - VAR_5 < FUNC_2(2)) {
                VAR_4 = 2;
                VAR_6 = VAR_5 + FUNC_2(2) - 1;
                FUNC_1(2);
            } else {
                VAR_4 = 2 + (VAR_2 - VAR_5) / FUNC_2(2);
                VAR_5 += (VAR_4 - 2) * FUNC_2(2);
                VAR_6 = VAR_5 + FUNC_2(2) - 1;
                FUNC_3(2);
            }
        }
    }

    if (VAR_3->holding_zero) {
        if (VAR_4)
            VAR_3->holding_one++;

        FUNC_5(VAR_0);

        if (VAR_4) {
            VAR_3->holding_zero = 1;
            VAR_4--;
        } else
            VAR_3->holding_zero = 0;
    } else
        VAR_3->holding_zero = 1;

    VAR_3->holding_one = VAR_4 * 2;

    if (VAR_6 != VAR_5) {
        uint32_t VAR_8 = VAR_6 - VAR_5, VAR_9 = VAR_2 - VAR_5;
        int VAR_10 = FUNC_4(VAR_8);
        uint32_t VAR_11 = (1 << VAR_10) - VAR_8 - 1;

        if (VAR_9 < VAR_11) {
            VAR_3->pend_data |= VAR_9 << VAR_3->pend_count;
            VAR_3->pend_count += VAR_10 - 1;
        } else {
            VAR_3->pend_data |= ((VAR_9 + VAR_11) >> 1) << VAR_3->pend_count;
            VAR_3->pend_count += VAR_10 - 1;
            VAR_3->pend_data |= ((VAR_9 + VAR_11) & 1) << VAR_3->pend_count++;
        }
    }

    VAR_3->pend_data |= ((int32_t) VAR_7 << VAR_3->pend_count++);

    if (!VAR_3->holding_zero)
        FUNC_5(VAR_0);
}
