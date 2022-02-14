
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t prog_conf; int nb_channels; int nb_programs; size_t fr_code; size_t fr_code_orig; int avctx; int gb; void** end_gain; void** begin_gain; void** rev_id; void* meter_size; void* mtd_ext_size; void** ch_size; } ;
typedef TYPE_1__ DBEContext ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 void* FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int* VAR_3 ;
 int* VAR_4 ;
 int FUNC_4 (TYPE_1__*) ;
 int * VAR_5 ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_9(DBEContext *VAR_6)
{
    int VAR_7, VAR_8, VAR_9, VAR_10;

    if ((VAR_9 = FUNC_4(VAR_6)) < 0)
        return VAR_9;
    if ((VAR_8 = FUNC_1(VAR_6, 1, VAR_9)) < 0)
        return VAR_8;

    FUNC_5(&VAR_6->gb, 4);
    VAR_10 = FUNC_2(&VAR_6->gb, 10);
    if (!VAR_10) {
        FUNC_0(VAR_6->avctx, VAR_1, "Invalid metadata size\n");
        return VAR_0;
    }

    if ((VAR_8 = FUNC_1(VAR_6, VAR_10, VAR_9)) < 0)
        return VAR_8;

    FUNC_5(&VAR_6->gb, 14);
    VAR_6->prog_conf = FUNC_2(&VAR_6->gb, 6);
    if (VAR_6->prog_conf > VAR_2) {
        FUNC_0(VAR_6->avctx, VAR_1, "Invalid program configuration\n");
        return VAR_0;
    }

    VAR_6->nb_channels = VAR_3[VAR_6->prog_conf];
    VAR_6->nb_programs = VAR_4[VAR_6->prog_conf];

    VAR_6->fr_code = FUNC_2(&VAR_6->gb, 4);
    VAR_6->fr_code_orig = FUNC_2(&VAR_6->gb, 4);
    if (!VAR_5[VAR_6->fr_code] ||
        !VAR_5[VAR_6->fr_code_orig]) {
        FUNC_0(VAR_6->avctx, VAR_1, "Invalid frame rate code\n");
        return VAR_0;
    }

    FUNC_7(&VAR_6->gb, 88);
    for (VAR_7 = 0; VAR_7 < VAR_6->nb_channels; VAR_7++)
        VAR_6->ch_size[VAR_7] = FUNC_2(&VAR_6->gb, 10);
    VAR_6->mtd_ext_size = FUNC_2(&VAR_6->gb, 8);
    VAR_6->meter_size = FUNC_2(&VAR_6->gb, 8);

    FUNC_7(&VAR_6->gb, 10 * VAR_6->nb_programs);
    for (VAR_7 = 0; VAR_7 < VAR_6->nb_channels; VAR_7++) {
        VAR_6->rev_id[VAR_7] = FUNC_2(&VAR_6->gb, 4);
        FUNC_6(&VAR_6->gb);
        VAR_6->begin_gain[VAR_7] = FUNC_2(&VAR_6->gb, 10);
        VAR_6->end_gain[VAR_7] = FUNC_2(&VAR_6->gb, 10);
    }

    if (FUNC_3(&VAR_6->gb) < 0) {
        FUNC_0(VAR_6->avctx, VAR_1, "Read past end of metadata\n");
        return VAR_0;
    }

    return FUNC_8(VAR_6, VAR_10 + 1);
}
