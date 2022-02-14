
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int width; int height; TYPE_2__* last_frame; TYPE_1__* current_frame; int avctx; } ;
struct TYPE_6__ {int* linesize; scalar_t__* data; } ;
struct TYPE_5__ {int* linesize; scalar_t__* data; } ;
typedef TYPE_3__ RoqContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,...) ;
 int FUNC_1 (scalar_t__,scalar_t__,int,int,int) ;

__attribute__((used)) static inline void FUNC_2(RoqContext *VAR_1, int VAR_2, int VAR_3, int VAR_4,
                                        int VAR_5, int VAR_6)
{
    int VAR_7, VAR_8, VAR_9;

    VAR_7 = VAR_2 + VAR_4;
    VAR_8 = VAR_3 + VAR_5;


    if ((VAR_7 < 0) || (VAR_7 > VAR_1->width - VAR_6) ||
        (VAR_8 < 0) || (VAR_8 > VAR_1->height - VAR_6)) {
        FUNC_0(VAR_1->avctx, VAR_0, "motion vector out of bounds: MV = (%d, %d), boundaries = (0, 0, %d, %d)\n",
            VAR_7, VAR_8, VAR_1->width, VAR_1->height);
        return;
    }

    if (!VAR_1->last_frame->data[0]) {
        FUNC_0(VAR_1->avctx, VAR_0, "Invalid decode type. Invalid header?\n");
        return;
    }

    for(VAR_9 = 0; VAR_9 < 3; VAR_9++) {
        int VAR_10 = VAR_1->current_frame->linesize[VAR_9];
        int VAR_11 = VAR_1->last_frame ->linesize[VAR_9];
        FUNC_1(VAR_1->current_frame->data[VAR_9] + VAR_3*VAR_10 + VAR_2,
                   VAR_1->last_frame->data[VAR_9] + VAR_8*VAR_11 + VAR_7,
                   VAR_10, VAR_11, VAR_6);
    }
}
