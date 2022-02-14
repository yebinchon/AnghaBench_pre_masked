
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pict_type; scalar_t__ qscale; int rv10_version; int mb_x; int mb_y; int mb_width; int mb_num; int mb_height; int f_code; int unrestricted_mv; int gb; void** last_dc; int avctx; } ;
typedef TYPE_1__ MpegEncContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,scalar_t__,int,...) ;
 void* FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7(MpegEncContext *VAR_5)
{
    int VAR_6, VAR_7, VAR_8, VAR_9;

    VAR_8 = FUNC_4(&VAR_5->gb);

    if (FUNC_4(&VAR_5->gb))
        VAR_5->pict_type = VAR_4;
    else
        VAR_5->pict_type = VAR_3;

    if (!VAR_8)
        FUNC_0(VAR_5->avctx, VAR_2, "marker missing\n");

    VAR_7 = FUNC_4(&VAR_5->gb);

    FUNC_2(VAR_5->avctx, "pict_type=%d pb_frame=%d\n", VAR_5->pict_type, VAR_7);

    if (VAR_7) {
        FUNC_1(VAR_5->avctx, "PB-frame");
        return VAR_1;
    }

    VAR_5->qscale = FUNC_3(&VAR_5->gb, 5);
    if (VAR_5->qscale == 0) {
        FUNC_0(VAR_5->avctx, VAR_2, "Invalid qscale value: 0\n");
        return VAR_0;
    }

    if (VAR_5->pict_type == VAR_3) {
        if (VAR_5->rv10_version == 3) {

            VAR_5->last_dc[0] = FUNC_3(&VAR_5->gb, 8);
            VAR_5->last_dc[1] = FUNC_3(&VAR_5->gb, 8);
            VAR_5->last_dc[2] = FUNC_3(&VAR_5->gb, 8);
            FUNC_2(VAR_5->avctx, "DC:%d %d %d\n", VAR_5->last_dc[0],
                    VAR_5->last_dc[1], VAR_5->last_dc[2]);
        }
    }



    VAR_9 = VAR_5->mb_x + VAR_5->mb_y * VAR_5->mb_width;
    if (FUNC_5(&VAR_5->gb, 12) == 0 || (VAR_9 && VAR_9 < VAR_5->mb_num)) {
        VAR_5->mb_x = FUNC_3(&VAR_5->gb, 6);
        VAR_5->mb_y = FUNC_3(&VAR_5->gb, 6);
        VAR_6 = FUNC_3(&VAR_5->gb, 12);
    } else {
        VAR_5->mb_x = 0;
        VAR_5->mb_y = 0;
        VAR_6 = VAR_5->mb_width * VAR_5->mb_height;
    }
    FUNC_6(&VAR_5->gb, 3);
    VAR_5->f_code = 1;
    VAR_5->unrestricted_mv = 1;

    return VAR_6;
}
