
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_8__ {int running_gain; int sustain; } ;
struct TYPE_7__ {TYPE_3__* state; int val_target_gain; int bits_per_sample; int analyze_mode; } ;
typedef TYPE_1__ HDCDContext ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int const,int,int ,int,int ,int ,int) ;
 int FUNC_2 (TYPE_3__*,int *,int,int const) ;
 int FUNC_3 (TYPE_1__*,int*,int*) ;
 int FUNC_4 (int *,int,int const,int ,int,int ,int) ;
 int FUNC_5 (TYPE_1__*,TYPE_3__*,int,int *,int,int ) ;

__attribute__((used)) static void FUNC_6(HDCDContext *VAR_1, int32_t *VAR_2, int VAR_3)
{
    const int VAR_4 = 2;
    int32_t *VAR_5 = VAR_2 + VAR_3 * VAR_4;
    int VAR_6[2] = {VAR_1->state[0].running_gain, VAR_1->state[1].running_gain};
    int VAR_7[2];
    int VAR_8 = 0;
    int VAR_9;

    if (VAR_1->analyze_mode) {
        FUNC_2(&VAR_1->state[0], VAR_2, VAR_3, VAR_4);
        FUNC_2(&VAR_1->state[1], VAR_2 + 1, VAR_3, VAR_4);
    }

    VAR_9 = FUNC_3(VAR_1, &VAR_7[0], &VAR_7[1]);
    while (VAR_3 > VAR_8) {
        int VAR_10, VAR_11;

        FUNC_0(VAR_2 + VAR_8 * VAR_4 + VAR_4 * (VAR_3 - VAR_8) <= VAR_5);
        VAR_11 = FUNC_5(VAR_1, VAR_1->state, 2, VAR_2 + VAR_8 * VAR_4, VAR_3 - VAR_8, 0) + VAR_8;
        VAR_10 = VAR_11 - 1;

        FUNC_0(VAR_2 + VAR_10 * VAR_4 <= VAR_5);

        if (VAR_1->analyze_mode) {
            VAR_6[0] = FUNC_1(VAR_2, VAR_10, VAR_4, VAR_6[0], VAR_1->val_target_gain, VAR_7[0],
                VAR_1->analyze_mode,
                VAR_1->state[0].sustain,
                (VAR_9 == VAR_0) );
            VAR_6[1] = FUNC_1(VAR_2 + 1, VAR_10, VAR_4, VAR_6[1], VAR_1->val_target_gain, VAR_7[1],
                VAR_1->analyze_mode,
                VAR_1->state[1].sustain,
                (VAR_9 == VAR_0) );
        } else {
            VAR_6[0] = FUNC_4(VAR_2, VAR_10, VAR_4, VAR_1->bits_per_sample, VAR_6[0], VAR_1->val_target_gain, VAR_7[0]);
            VAR_6[1] = FUNC_4(VAR_2 + 1, VAR_10, VAR_4, VAR_1->bits_per_sample, VAR_6[1], VAR_1->val_target_gain, VAR_7[1]);
        }

        VAR_2 += VAR_10 * VAR_4;
        VAR_3 -= VAR_10;
        VAR_8 = VAR_11 - VAR_10;

        VAR_9 = FUNC_3(VAR_1, &VAR_7[0], &VAR_7[1]);
    }
    if (VAR_8 > 0) {
        FUNC_0(VAR_2 + VAR_8 * VAR_4 <= VAR_5);
        if (VAR_1->analyze_mode) {
            VAR_6[0] = FUNC_1(VAR_2, VAR_8, VAR_4, VAR_6[0], VAR_1->val_target_gain, VAR_7[0],
                VAR_1->analyze_mode,
                VAR_1->state[0].sustain,
                (VAR_9 == VAR_0) );
            VAR_6[1] = FUNC_1(VAR_2 + 1, VAR_8, VAR_4, VAR_6[1], VAR_1->val_target_gain, VAR_7[1],
                VAR_1->analyze_mode,
                VAR_1->state[1].sustain,
                (VAR_9 == VAR_0) );
        } else {
            VAR_6[0] = FUNC_4(VAR_2, VAR_8, VAR_4, VAR_1->bits_per_sample, VAR_6[0], VAR_1->val_target_gain, VAR_7[0]);
            VAR_6[1] = FUNC_4(VAR_2 + 1, VAR_8, VAR_4, VAR_1->bits_per_sample, VAR_6[1], VAR_1->val_target_gain, VAR_7[1]);
        }
    }

    VAR_1->state[0].running_gain = VAR_6[0];
    VAR_1->state[1].running_gain = VAR_6[1];
}
