
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_9__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_12__ {int channels; } ;
struct TYPE_11__ {size_t prev_window_type; size_t window_type; int num_windows; int is_long; int* grouping; TYPE_9__* avctx; scalar_t__ ms_present; TYPE_1__* modes; int num_bands; int band_start; } ;
struct TYPE_10__ {int num_windows; int num_bands; int band_start; } ;
typedef TYPE_2__ On2AVCContext ;
typedef int GetBitContext ;
typedef int AVFrame ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (TYPE_9__*,int ,char*) ;
 size_t FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int const*,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int *,int) ;
 int FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (TYPE_2__*,int,int *,int) ;
 int FUNC_8 (TYPE_2__*,int *,int) ;

__attribute__((used)) static int FUNC_9(On2AVCContext *VAR_4, const uint8_t *VAR_5,
                                  int VAR_6, AVFrame *VAR_7, int VAR_8)
{
    GetBitContext VAR_9;
    int VAR_10, VAR_11;

    if ((VAR_11 = FUNC_3(&VAR_9, VAR_5, VAR_6)) < 0)
        return VAR_11;

    if (FUNC_2(&VAR_9)) {
        FUNC_0(VAR_4->avctx, VAR_1, "enh bit set\n");
        return VAR_0;
    }
    VAR_4->prev_window_type = VAR_4->window_type;
    VAR_4->window_type = FUNC_1(&VAR_9, 3);

    VAR_4->band_start = VAR_4->modes[VAR_4->window_type].band_start;
    VAR_4->num_windows = VAR_4->modes[VAR_4->window_type].num_windows;
    VAR_4->num_bands = VAR_4->modes[VAR_4->window_type].num_bands;
    VAR_4->is_long = (VAR_4->window_type != VAR_2);

    VAR_4->grouping[0] = 1;
    for (VAR_10 = 1; VAR_10 < VAR_4->num_windows; VAR_10++)
        VAR_4->grouping[VAR_10] = !FUNC_2(&VAR_9);

    FUNC_6(VAR_4, &VAR_9);
    for (VAR_10 = 0; VAR_10 < VAR_4->avctx->channels; VAR_10++)
        if ((VAR_11 = FUNC_5(VAR_4, &VAR_9, VAR_10)) < 0)
            return VAR_0;
    if (VAR_4->avctx->channels == 2 && VAR_4->ms_present)
        FUNC_4(VAR_4);
    if (VAR_4->window_type < VAR_3) {
        for (VAR_10 = 0; VAR_10 < VAR_4->avctx->channels; VAR_10++)
            FUNC_7(VAR_4, VAR_10, VAR_7, VAR_8);
    } else {
        FUNC_8(VAR_4, VAR_7, VAR_8);
    }

    return 0;
}
