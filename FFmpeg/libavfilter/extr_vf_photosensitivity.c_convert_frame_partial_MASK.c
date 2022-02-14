
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_6__ {int skip; TYPE_2__* out; TYPE_1__* in; } ;
typedef TYPE_3__ ThreadData_convert_frame ;
struct TYPE_5__ {int*** grid; } ;
struct TYPE_4__ {int width; int height; int* linesize; scalar_t__** data; } ;
typedef int AVFilterContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(AVFilterContext *VAR_3, void *VAR_4, int VAR_5, int VAR_6)
{
    int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
    int VAR_18[VAR_2];
    const uint8_t *VAR_19;

    ThreadData_convert_frame *VAR_20 = VAR_4;

    const int VAR_21 = (VAR_1 * VAR_5) / VAR_6;
    const int VAR_22 = (VAR_1 * (VAR_5+1)) / VAR_6;

    int VAR_23 = VAR_20->in->width, VAR_24 = VAR_20->in->height, VAR_25 = VAR_20->in->linesize[0], VAR_26 = VAR_20->skip;
    const uint8_t *VAR_27 = VAR_20->in->data[0];

    for (VAR_7 = VAR_21; VAR_7 < VAR_22; VAR_7++) {
        VAR_8 = VAR_7 % VAR_0;
        VAR_9 = VAR_7 / VAR_0;

        VAR_10 = VAR_23 * VAR_8 / VAR_0;
        VAR_11 = VAR_23 * (VAR_8+1) / VAR_0;
        VAR_12 = VAR_24 * VAR_9 / VAR_0;
        VAR_13 = VAR_24 * (VAR_9+1) / VAR_0;

        for (VAR_16 = 0; VAR_16 < VAR_2; VAR_16++) {
            VAR_18[VAR_16] = 0;
        }
        for (VAR_15 = VAR_12; VAR_15 < VAR_13; VAR_15 += VAR_26) {
            VAR_19 = VAR_27 + VAR_15 * VAR_25 + VAR_10 * VAR_2;
            for (VAR_14 = VAR_10; VAR_14 < VAR_11; VAR_14 += VAR_26) {

                VAR_18[0] += VAR_19[0];
                VAR_18[1] += VAR_19[1];
                VAR_18[2] += VAR_19[2];
                VAR_19 += VAR_2 * VAR_26;

            }
        }

        VAR_17 = ((VAR_11 - VAR_10 + VAR_26 - 1) / VAR_26) * ((VAR_13 - VAR_12 + VAR_26 - 1) / VAR_26);
        for (VAR_16 = 0; VAR_16 < VAR_2; VAR_16++) {
            if (VAR_17)
                VAR_18[VAR_16] /= VAR_17;
            VAR_20->out->grid[VAR_9][VAR_8][VAR_16] = VAR_18[VAR_16];
        }
    }
    return 0;
}
