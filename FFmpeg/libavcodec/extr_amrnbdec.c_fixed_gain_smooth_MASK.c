
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum Mode { ____Placeholder_Mode } Mode ;
struct TYPE_3__ {int diff_count; int hang_count; double* fixed_gain; } ;
typedef TYPE_1__ AMRContext ;


 int VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 float FUNC_0 (double,double,double) ;
 float const FUNC_1 (float const) ;

__attribute__((used)) static float FUNC_2(AMRContext *VAR_3 , const float *VAR_4,
                               const float *VAR_5, const enum Mode VAR_6)
{
    float VAR_7 = 0.0;
    int VAR_8;

    for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
        VAR_7 += FUNC_1(VAR_5[VAR_8] - VAR_4[VAR_8]) / VAR_5[VAR_8];



    VAR_3->diff_count++;
    if (VAR_7 <= 0.65)
        VAR_3->diff_count = 0;

    if (VAR_3->diff_count > 10) {
        VAR_3->hang_count = 0;
        VAR_3->diff_count--;
    }

    if (VAR_3->hang_count < 40) {
        VAR_3->hang_count++;
    } else if (VAR_6 < VAR_2 || VAR_6 == VAR_1) {
        const float VAR_9 = FUNC_0(4.0 * VAR_7 - 1.6, 0.0, 1.0);
        const float VAR_10 = (VAR_3->fixed_gain[0] + VAR_3->fixed_gain[1] +
                                       VAR_3->fixed_gain[2] + VAR_3->fixed_gain[3] +
                                       VAR_3->fixed_gain[4]) * 0.2;
        return VAR_9 * VAR_3->fixed_gain[4] +
               (1.0 - VAR_9) * VAR_10;
    }
    return VAR_3->fixed_gain[4];
}
