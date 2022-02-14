
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int nsubbands; int min_mono_subband; int part_stereo_pres; int gb; int *** part_stereo; int avctx; void*** grid_3_avg; int ** grid_1_scf; } ;
struct TYPE_6__ {int len; int data; } ;
typedef TYPE_1__ LBRChunk ;
typedef TYPE_2__ DCALbrDecoder ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int* VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ,int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (int *,int) ;
 void* FUNC_7 (int *,int *,int) ;

__attribute__((used)) static int FUNC_8(DCALbrDecoder *VAR_4, LBRChunk *VAR_5, int VAR_6, int VAR_7)
{
    int VAR_8, VAR_9, VAR_10, VAR_11;

    if (!VAR_5->len)
        return 0;

    if (FUNC_4(&VAR_4->gb, VAR_5->data, VAR_5->len) < 0)
        return -1;


    VAR_11 = VAR_2[VAR_4->nsubbands - 1] + 1;
    for (VAR_9 = 2; VAR_9 < VAR_11; VAR_9++) {
        if (FUNC_5(VAR_4, VAR_4->grid_1_scf[VAR_6][VAR_9]) < 0)
            return -1;
        if (VAR_6 != VAR_7 && VAR_1[VAR_9] < VAR_4->min_mono_subband
            && FUNC_5(VAR_4, VAR_4->grid_1_scf[VAR_7][VAR_9]) < 0)
            return -1;
    }

    if (FUNC_3(&VAR_4->gb) < 1)
        return 0;


    for (VAR_9 = 0; VAR_9 < VAR_4->nsubbands - 4; VAR_9++) {
        VAR_4->grid_3_avg[VAR_6][VAR_9] = FUNC_7(&VAR_4->gb, &VAR_3, 2) - 16;
        if (VAR_6 != VAR_7) {
            if (VAR_9 + 4 < VAR_4->min_mono_subband)
                VAR_4->grid_3_avg[VAR_7][VAR_9] = FUNC_7(&VAR_4->gb, &VAR_3, 2) - 16;
            else
                VAR_4->grid_3_avg[VAR_7][VAR_9] = VAR_4->grid_3_avg[VAR_6][VAR_9];
        }
    }

    if (FUNC_3(&VAR_4->gb) < 0) {
        FUNC_0(VAR_4->avctx, VAR_0, "First grid chunk too short\n");
        return -1;
    }


    if (VAR_6 != VAR_7) {
        int VAR_12[2];

        if (FUNC_1(&VAR_4->gb, 8))
            return 0;

        VAR_12[0] = FUNC_2(&VAR_4->gb, 4);
        VAR_12[1] = FUNC_2(&VAR_4->gb, 4);

        VAR_11 = (VAR_4->nsubbands - VAR_4->min_mono_subband + 3) / 4;
        for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++)
            for (VAR_8 = VAR_6; VAR_8 <= VAR_7; VAR_8++)
                for (VAR_10 = 1; VAR_10 <= 4; VAR_10++)
                    VAR_4->part_stereo[VAR_8][VAR_9][VAR_10] = FUNC_6(&VAR_4->gb, VAR_12[VAR_8 - VAR_6]);

        if (FUNC_3(&VAR_4->gb) >= 0)
            VAR_4->part_stereo_pres |= 1 << VAR_6;
    }



    return 0;
}
