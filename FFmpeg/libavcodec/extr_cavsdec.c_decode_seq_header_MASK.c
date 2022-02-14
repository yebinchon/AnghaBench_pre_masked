
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int framerate; } ;
struct TYPE_7__ {int width; int height; int mb_width; int mb_height; int top_qp; TYPE_2__* avctx; int gb; int low_delay; void* aspect_ratio; void* level; void* profile; } ;
typedef TYPE_1__ AVSContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ,char*,...) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int * VAR_4 ;
 int FUNC_3 (TYPE_2__*,int,int) ;
 void* FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(AVSContext *VAR_5)
{
    int VAR_6;
    int VAR_7, VAR_8;
    int VAR_9;

    VAR_5->profile = FUNC_4(&VAR_5->gb, 8);
    VAR_5->level = FUNC_4(&VAR_5->gb, 8);
    FUNC_7(&VAR_5->gb);

    VAR_7 = FUNC_4(&VAR_5->gb, 14);
    VAR_8 = FUNC_4(&VAR_5->gb, 14);
    if ((VAR_5->width || VAR_5->height) && (VAR_5->width != VAR_7 || VAR_5->height != VAR_8)) {
        FUNC_1(VAR_5->avctx,
                                      "Width/height changing in CAVS");
        return VAR_1;
    }
    if (VAR_7 <= 0 || VAR_8 <= 0) {
        FUNC_0(VAR_5->avctx, VAR_2, "Dimensions invalid\n");
        return VAR_0;
    }
    FUNC_6(&VAR_5->gb, 2);
    FUNC_6(&VAR_5->gb, 3);
    VAR_5->aspect_ratio = FUNC_4(&VAR_5->gb, 4);
    VAR_6 = FUNC_4(&VAR_5->gb, 4);
    if (VAR_6 == 0 || VAR_6 > 13) {
        FUNC_0(VAR_5->avctx, VAR_3,
               "frame_rate_code %d is invalid\n", VAR_6);
        VAR_6 = 1;
    }

    FUNC_6(&VAR_5->gb, 18);
    FUNC_7(&VAR_5->gb);
    FUNC_6(&VAR_5->gb, 12);
    VAR_5->low_delay = FUNC_5(&VAR_5->gb);

    VAR_9 = FUNC_3(VAR_5->avctx, VAR_7, VAR_8);
    if (VAR_9 < 0)
        return VAR_9;

    VAR_5->width = VAR_7;
    VAR_5->height = VAR_8;
    VAR_5->mb_width = (VAR_5->width + 15) >> 4;
    VAR_5->mb_height = (VAR_5->height + 15) >> 4;
    VAR_5->avctx->framerate = VAR_4[VAR_6];
    if (!VAR_5->top_qp)
        return FUNC_2(VAR_5);
    return 0;
}
