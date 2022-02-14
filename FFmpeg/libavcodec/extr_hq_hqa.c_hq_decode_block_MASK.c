
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
typedef int int16_t ;
struct TYPE_4__ {int table; } ;
struct TYPE_5__ {TYPE_1__ hq_ac_vlc; } ;
typedef TYPE_2__ HQContext ;
typedef int GetBitContext ;


 int VAR_0 ;
 scalar_t__* VAR_1 ;
 unsigned int* VAR_2 ;
 scalar_t__**** VAR_3 ;
 size_t* VAR_4 ;
 size_t FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int,int) ;
 int FUNC_3 (int*,int ,int) ;

__attribute__((used)) static int FUNC_4(HQContext *VAR_5, GetBitContext *VAR_6, int16_t VAR_7[64],
                           int VAR_8, int VAR_9, int VAR_10)
{
    const int32_t *VAR_11;
    int VAR_12, VAR_13 = 1;

    FUNC_3(VAR_7, 0, 64 * sizeof(*VAR_7));

    if (!VAR_10) {
        VAR_7[0] = FUNC_1(VAR_6, 9) * 64;
        VAR_11 = VAR_3[VAR_8][VAR_9][FUNC_0(VAR_6, 2)];
    } else {
        VAR_11 = VAR_3[VAR_8][VAR_9][FUNC_0(VAR_6, 2)];
        VAR_7[0] = FUNC_1(VAR_6, 9) * 64;
    }

    for (;;) {
        VAR_12 = FUNC_2(VAR_6, VAR_5->hq_ac_vlc.table, 9, 2);
        if (VAR_12 < 0)
            return VAR_0;

        VAR_13 += VAR_1[VAR_12];
        if (VAR_13 >= 64)
            break;
        VAR_7[VAR_4[VAR_13]] = (int)(VAR_2[VAR_12] * (unsigned)VAR_11[VAR_13]) >> 12;
        VAR_13++;
    }

    return 0;
}
