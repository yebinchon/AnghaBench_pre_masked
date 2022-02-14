
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_10__ {int running_gain; int sustain; } ;
typedef TYPE_1__ hdcd_state ;
struct TYPE_11__ {int bits_per_sample; int analyze_mode; } ;
typedef TYPE_2__ HDCDContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int,int,int,int,int ,int ,int) ;
 int FUNC_2 (TYPE_1__*,int *,int,int) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,int*,int*) ;
 int FUNC_4 (int *,int,int,int ,int,int,int) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*,int,int *,int,int ) ;

__attribute__((used)) static void FUNC_6(HDCDContext *VAR_0, hdcd_state *VAR_1, int32_t *VAR_2, int VAR_3, int VAR_4)
{
    int32_t *VAR_5 = VAR_2 + VAR_3 * VAR_4;
    int VAR_6 = VAR_1->running_gain;
    int VAR_7, VAR_8;
    int VAR_9 = 0;

    if (VAR_0->analyze_mode)
        FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);

    FUNC_3(VAR_0, VAR_1, &VAR_7, &VAR_8);
    while (VAR_3 > VAR_9) {
        int VAR_10;
        int VAR_11;

        FUNC_0(VAR_2 + VAR_9 * VAR_4 + VAR_4 * (VAR_3 - VAR_9) <= VAR_5);
        VAR_11 = FUNC_5(VAR_0, VAR_1, 1, VAR_2 + VAR_9 * VAR_4, VAR_3 - VAR_9, 0) + VAR_9;
        VAR_10 = VAR_11 - 1;

        FUNC_0(VAR_2 + VAR_10 * VAR_4 <= VAR_5);
        if (VAR_0->analyze_mode)
            VAR_6 = FUNC_1(VAR_2, VAR_10, VAR_4, VAR_6, VAR_8, VAR_7, VAR_0->analyze_mode, VAR_1->sustain, -1);
        else
            VAR_6 = FUNC_4(VAR_2, VAR_10, VAR_4, VAR_0->bits_per_sample, VAR_6, VAR_8, VAR_7);

        VAR_2 += VAR_10 * VAR_4;
        VAR_3 -= VAR_10;
        VAR_9 = VAR_11 - VAR_10;
        FUNC_3(VAR_0, VAR_1, &VAR_7, &VAR_8);
    }
    if (VAR_9 > 0) {
        FUNC_0(VAR_2 + VAR_9 * VAR_4 <= VAR_5);
        if (VAR_0->analyze_mode)
            VAR_6 = FUNC_1(VAR_2, VAR_9, VAR_4, VAR_6, VAR_8, VAR_7, VAR_0->analyze_mode, VAR_1->sustain, -1);
        else
            VAR_6 = FUNC_4(VAR_2, VAR_9, VAR_4, VAR_0->bits_per_sample, VAR_6, VAR_8, VAR_7);
    }

    VAR_1->running_gain = VAR_6;
}
