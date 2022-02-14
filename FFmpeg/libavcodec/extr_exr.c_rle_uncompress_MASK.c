
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int8_t ;
struct TYPE_6__ {int (* reorder_pixels ) (int ,int *,int) ;int (* predictor ) (int *,int) ;} ;
struct TYPE_8__ {TYPE_1__ dsp; } ;
struct TYPE_7__ {int * tmp; int uncompressed_data; } ;
typedef TYPE_2__ EXRThreadData ;
typedef TYPE_3__ EXRContext ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int *,int) ;

__attribute__((used)) static int FUNC_3(EXRContext *VAR_1, const uint8_t *VAR_2, int VAR_3,
                          int VAR_4, EXRThreadData *VAR_5)
{
    uint8_t *VAR_6 = VAR_5->tmp;
    const int8_t *VAR_7 = VAR_2;
    int VAR_8 = VAR_3;
    int VAR_9 = VAR_4;
    uint8_t *VAR_10 = VAR_6 + VAR_9;
    int VAR_11;

    while (VAR_8 > 0) {
        VAR_11 = *VAR_7++;

        if (VAR_11 < 0) {
            VAR_11 = -VAR_11;

            if ((VAR_9 -= VAR_11) < 0 ||
                (VAR_8 -= VAR_11 + 1) < 0)
                return VAR_0;

            while (VAR_11--)
                *VAR_6++ = *VAR_7++;
        } else {
            VAR_11++;

            if ((VAR_9 -= VAR_11) < 0 ||
                (VAR_8 -= 2) < 0)
                return VAR_0;

            while (VAR_11--)
                *VAR_6++ = *VAR_7;

            VAR_7++;
        }
    }

    if (VAR_10 != VAR_6)
        return VAR_0;

    FUNC_0(VAR_4 % 2 == 0);

    VAR_1->dsp.predictor(VAR_5->tmp, VAR_4);
    VAR_1->dsp.reorder_pixels(VAR_5->uncompressed_data, VAR_5->tmp, VAR_4);

    return 0;
}
