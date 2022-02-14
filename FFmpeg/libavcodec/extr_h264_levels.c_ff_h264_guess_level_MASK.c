
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_5__ {int max_fs; int max_dpb_mbs; int max_mbps; scalar_t__ max_br; scalar_t__ constraint_set3_flag; } ;
typedef TYPE_1__ H264LevelDescriptor ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;
 TYPE_1__* VAR_0 ;

const H264LevelDescriptor *FUNC_3(int VAR_1,
                                               int64_t VAR_2,
                                               int VAR_3,
                                               int VAR_4, int VAR_5,
                                               int VAR_6)
{
    int VAR_7 = (VAR_4 + 15) / 16;
    int VAR_8 = (VAR_5 + 15) / 16;
    int VAR_9 = !(VAR_1 == 66 ||
                    VAR_1 == 77 ||
                    VAR_1 == 88);
    int VAR_10;

    for (VAR_10 = 0; VAR_10 < FUNC_1(VAR_0); VAR_10++) {
        const H264LevelDescriptor *VAR_11 = &VAR_0[VAR_10];

        if (VAR_11->constraint_set3_flag && VAR_9)
            continue;

        if (VAR_2 > (int64_t)VAR_11->max_br * FUNC_2(VAR_1))
            continue;

        if (VAR_7 * VAR_8 > VAR_11->max_fs)
            continue;
        if (VAR_7 * VAR_7 > 8 * VAR_11->max_fs)
            continue;
        if (VAR_8 * VAR_8 > 8 * VAR_11->max_fs)
            continue;

        if (VAR_7 && VAR_8) {
            int VAR_12 =
                FUNC_0(VAR_11->max_dpb_mbs / (VAR_7 * VAR_8), 16);
            if (VAR_6 > VAR_12)
                continue;

            if (VAR_3 > (VAR_11->max_mbps / (VAR_7 * VAR_8)))
                continue;
        }

        return VAR_11;
    }


    return ((void*)0);
}
