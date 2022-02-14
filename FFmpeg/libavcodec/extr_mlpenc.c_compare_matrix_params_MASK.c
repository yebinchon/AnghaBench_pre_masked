
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {unsigned int num_channels; TYPE_1__* cur_restart_header; } ;
struct TYPE_8__ {unsigned int count; scalar_t__* fbits; scalar_t__* outch; scalar_t__** coeff; } ;
struct TYPE_7__ {unsigned int min_channel; unsigned int max_channel; } ;
typedef TYPE_1__ RestartHeader ;
typedef TYPE_2__ MatrixParams ;
typedef TYPE_3__ MLPEncodeContext ;



__attribute__((used)) static int FUNC_0(MLPEncodeContext *VAR_0, const MatrixParams *VAR_1, const MatrixParams *VAR_2)
{
    RestartHeader *VAR_3 = VAR_0->cur_restart_header;
    unsigned int VAR_4, VAR_5;

    if (VAR_1->count != VAR_2->count)
        return 1;

    if (!VAR_1->count)
        return 0;

    for (VAR_4 = VAR_3->min_channel; VAR_4 <= VAR_3->max_channel; VAR_4++)
        if (VAR_1->fbits[VAR_4] != VAR_2->fbits[VAR_4])
            return 1;

    for (VAR_5 = 0; VAR_5 < VAR_2->count; VAR_5++) {
        if (VAR_1->outch[VAR_5] != VAR_2->outch[VAR_5])
            return 1;

        for (VAR_4 = 0; VAR_4 < VAR_0->num_channels; VAR_4++)
            if (VAR_1->coeff[VAR_5][VAR_4] != VAR_2->coeff[VAR_5][VAR_4])
                return 1;
    }

    return 0;
}
