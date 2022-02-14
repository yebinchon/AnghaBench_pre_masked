
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int max_mono_subband; int* sb_indices; int limited_range; int nsubbands; int g3_avg_only_start_sb; int min_mono_subband; int** quant_levels; int gb; void*** sec_ch_lrms; void*** sec_ch_sbms; } ;
typedef TYPE_1__ DCALbrDecoder ;


 scalar_t__ FUNC_0 (int *,int) ;
 void* FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_1__*,int,int,int,int) ;
 int FUNC_3 (TYPE_1__*,int,int,int,int) ;

__attribute__((used)) static int FUNC_4(DCALbrDecoder *VAR_0, int VAR_1, int VAR_2,
                    int VAR_3, int VAR_4, int VAR_5)
{
    int VAR_6, VAR_7, VAR_8, VAR_9;

    for (VAR_6 = VAR_3; VAR_6 < VAR_4; VAR_6++) {

        if (VAR_6 < 6) {
            VAR_8 = VAR_6;
        } else if (VAR_5 && VAR_6 < VAR_0->max_mono_subband) {
            VAR_8 = VAR_0->sb_indices[VAR_6];
        } else {
            if (FUNC_0(&VAR_0->gb, 28))
                break;
            VAR_8 = FUNC_1(&VAR_0->gb, VAR_0->limited_range + 3);
            if (VAR_8 < 6)
                VAR_8 = 6;
            VAR_0->sb_indices[VAR_6] = VAR_8;
        }
        if (VAR_8 >= VAR_0->nsubbands)
            return -1;


        if (VAR_6 == 12) {
            for (VAR_7 = 0; VAR_7 < VAR_0->g3_avg_only_start_sb - 4; VAR_7++)
                FUNC_3(VAR_0, VAR_1, VAR_2, VAR_7, VAR_5);
        } else if (VAR_6 < 12 && VAR_8 >= 4) {
            FUNC_3(VAR_0, VAR_1, VAR_2, VAR_8 - 4, VAR_5);
        }


        if (VAR_1 != VAR_2) {
            if (FUNC_0(&VAR_0->gb, 20))
                break;
            if (!VAR_5 || VAR_8 >= VAR_0->max_mono_subband)
                VAR_0->sec_ch_sbms[VAR_1 / 2][VAR_8] = FUNC_1(&VAR_0->gb, 8);
            if (VAR_5 && VAR_8 >= VAR_0->min_mono_subband)
                VAR_0->sec_ch_lrms[VAR_1 / 2][VAR_8] = FUNC_1(&VAR_0->gb, 8);
        }

        VAR_9 = VAR_0->quant_levels[VAR_1 / 2][VAR_6];
        if (!VAR_9)
            return -1;


        if (VAR_6 < VAR_0->max_mono_subband && VAR_8 >= VAR_0->min_mono_subband) {
            if (!VAR_5)
                FUNC_2(VAR_0, VAR_1, VAR_8, VAR_9, 0);
            else if (VAR_1 != VAR_2)
                FUNC_2(VAR_0, VAR_2, VAR_8, VAR_9, 1);
        } else {
            FUNC_2(VAR_0, VAR_1, VAR_8, VAR_9, 0);
            if (VAR_1 != VAR_2)
                FUNC_2(VAR_0, VAR_2, VAR_8, VAR_9, 0);
        }
    }

    return 0;
}
