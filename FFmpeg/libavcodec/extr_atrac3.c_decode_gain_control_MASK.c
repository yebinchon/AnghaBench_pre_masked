
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int num_points; int* lev_code; int* loc_code; } ;
struct TYPE_4__ {TYPE_2__* g_block; } ;
typedef int GetBitContext ;
typedef TYPE_1__ GainBlock ;
typedef TYPE_2__ AtracGainInfo ;


 int VAR_0 ;
 void* FUNC_0 (int *,int) ;

__attribute__((used)) static int FUNC_1(GetBitContext *VAR_1, GainBlock *VAR_2,
                               int VAR_3)
{
    int VAR_4, VAR_5;
    int *VAR_6, *VAR_7;

    AtracGainInfo *VAR_8 = VAR_2->g_block;

    for (VAR_4 = 0; VAR_4 <= VAR_3; VAR_4++) {
        VAR_8[VAR_4].num_points = FUNC_0(VAR_1, 3);
        VAR_6 = VAR_8[VAR_4].lev_code;
        VAR_7 = VAR_8[VAR_4].loc_code;

        for (VAR_5 = 0; VAR_5 < VAR_8[VAR_4].num_points; VAR_5++) {
            VAR_6[VAR_5] = FUNC_0(VAR_1, 4);
            VAR_7[VAR_5] = FUNC_0(VAR_1, 5);
            if (VAR_5 && VAR_7[VAR_5] <= VAR_7[VAR_5 - 1])
                return VAR_0;
        }
    }


    for (; VAR_4 < 4 ; VAR_4++)
        VAR_8[VAR_4].num_points = 0;

    return 0;
}
