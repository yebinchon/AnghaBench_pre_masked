
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_11__ {scalar_t__ pix_fmt; } ;
struct TYPE_9__ {TYPE_1__* f; } ;
struct TYPE_10__ {int hdr_state; int last_w; int cur_w; int last_h; int cur_h; int last_x_offset; int x_offset; int last_y_offset; int y_offset; int last_dispose_op; int dispose_op; int width; int height; int blend_op; int has_trns; TYPE_2__ previous_picture; int gb; } ;
struct TYPE_8__ {int * data; } ;
typedef TYPE_3__ PNGDecContext ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (TYPE_4__*,int ,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_13, PNGDecContext *VAR_14,
                             uint32_t VAR_15)
{
    uint32_t VAR_16;
    int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;

    if (VAR_15 != 26)
        return VAR_4;

    if (!(VAR_14->hdr_state & VAR_12)) {
        FUNC_0(VAR_13, VAR_5, "fctl before IHDR\n");
        return VAR_4;
    }

    VAR_14->last_w = VAR_14->cur_w;
    VAR_14->last_h = VAR_14->cur_h;
    VAR_14->last_x_offset = VAR_14->x_offset;
    VAR_14->last_y_offset = VAR_14->y_offset;
    VAR_14->last_dispose_op = VAR_14->dispose_op;

    VAR_16 = FUNC_1(&VAR_14->gb);
    VAR_17 = FUNC_1(&VAR_14->gb);
    VAR_18 = FUNC_1(&VAR_14->gb);
    VAR_19 = FUNC_1(&VAR_14->gb);
    VAR_20 = FUNC_1(&VAR_14->gb);
    FUNC_3(&VAR_14->gb, 4);
    VAR_21 = FUNC_2(&VAR_14->gb);
    VAR_22 = FUNC_2(&VAR_14->gb);
    FUNC_3(&VAR_14->gb, 4);

    if (VAR_16 == 0 &&
        (VAR_17 != VAR_14->width ||
         VAR_18 != VAR_14->height ||
         VAR_19 != 0 ||
         VAR_20 != 0) ||
        VAR_17 <= 0 || VAR_18 <= 0 ||
        VAR_19 < 0 || VAR_20 < 0 ||
        VAR_17 > VAR_14->width - VAR_19|| VAR_18 > VAR_14->height - VAR_20)
            return VAR_4;

    if (VAR_22 != VAR_0 && VAR_22 != VAR_1) {
        FUNC_0(VAR_13, VAR_5, "Invalid blend_op %d\n", VAR_22);
        return VAR_4;
    }

    if ((VAR_16 == 0 || !VAR_14->previous_picture.f->data[0]) &&
        VAR_21 == VAR_3) {


        VAR_21 = VAR_2;
    }

    if (VAR_22 == VAR_0 && !VAR_14->has_trns && (
            VAR_13->pix_fmt == VAR_10 ||
            VAR_13->pix_fmt == VAR_11 ||
            VAR_13->pix_fmt == VAR_9 ||
            VAR_13->pix_fmt == VAR_7 ||
            VAR_13->pix_fmt == VAR_6 ||
            VAR_13->pix_fmt == VAR_8
        )) {

        VAR_22 = VAR_1;
    }

    VAR_14->cur_w = VAR_17;
    VAR_14->cur_h = VAR_18;
    VAR_14->x_offset = VAR_19;
    VAR_14->y_offset = VAR_20;
    VAR_14->dispose_op = VAR_21;
    VAR_14->blend_op = VAR_22;

    return 0;
}
