
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_3__ {int* qmat; } ;
typedef int GetBitContext ;
typedef TYPE_1__ FICContext ;


 int VAR_0 ;
 size_t* VAR_1 ;
 int FUNC_0 (int *,int,int*) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int*,int ,int) ;

__attribute__((used)) static int FUNC_6(FICContext *VAR_2, GetBitContext *VAR_3,
                            uint8_t *VAR_4, int VAR_5, int16_t *VAR_6, int *VAR_7)
{
    int VAR_8, VAR_9;

    if (FUNC_3(VAR_3) < 8)
        return VAR_0;


    if (FUNC_2(VAR_3)) {
        *VAR_7 = 1;
        return 0;
    }

    FUNC_5(VAR_6, 0, sizeof(*VAR_6) * 64);

    VAR_9 = FUNC_1(VAR_3, 7);
    if (VAR_9 > 64)
        return VAR_0;

    for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
        int VAR_10 = FUNC_4(VAR_3);
        if (VAR_10 < -2048 || VAR_10 > 2048)
             return VAR_0;
        VAR_6[VAR_1[VAR_8]] = VAR_10 *
                                     VAR_2->qmat[VAR_1[VAR_8]];
    }

    FUNC_0(VAR_4, VAR_5, VAR_6);

    return 0;
}
