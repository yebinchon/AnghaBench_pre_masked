
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_17__ {int * outputs; TYPE_2__* priv; } ;
struct TYPE_16__ {TYPE_5__* dst; } ;
struct TYPE_15__ {int metadata; } ;
struct TYPE_14__ {int mipmaps; int last_x; int last_y; float threshold; TYPE_1__* obj_frame; int * haystack_frame; int ymax; int ymin; int xmax; int xmin; } ;
struct TYPE_13__ {int width; int height; } ;
typedef TYPE_2__ FOCContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int FUNC_2 (int *,char*,int,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_5__*,int ,char*,int,int,float) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,TYPE_3__*) ;
 float FUNC_9 (TYPE_2__*,int ,int,int ,int ,int ,int ,int*,int*,float) ;

__attribute__((used)) static int FUNC_10(AVFilterLink *VAR_2, AVFrame *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_2->dst;
    FOCContext *VAR_5 = VAR_4->priv;
    float VAR_6;
    int VAR_7, VAR_8;
    int VAR_9;

    VAR_5->haystack_frame[0] = FUNC_3(VAR_3);
    for (VAR_9=1; VAR_9<VAR_5->mipmaps; VAR_9++) {
        VAR_5->haystack_frame[VAR_9] = FUNC_7(VAR_5->haystack_frame[VAR_9-1]);
    }

    VAR_6 = FUNC_9(VAR_5, 0, 0,
                        FUNC_0(VAR_5->xmin, VAR_5->last_x - 8),
                        FUNC_1(VAR_5->xmax, VAR_5->last_x + 8),
                        FUNC_0(VAR_5->ymin, VAR_5->last_y - 8),
                        FUNC_1(VAR_5->ymax, VAR_5->last_y + 8),
                        &VAR_7, &VAR_8, 1.0);

    VAR_6 = FUNC_9(VAR_5, 0, VAR_5->mipmaps - 1, VAR_5->xmin, VAR_5->xmax, VAR_5->ymin, VAR_5->ymax,
                        &VAR_7, &VAR_8, VAR_6);

    for (VAR_9=0; VAR_9<VAR_1; VAR_9++) {
        FUNC_4(&VAR_5->haystack_frame[VAR_9]);
    }

    if (VAR_6 > VAR_5->threshold) {
        return FUNC_8(VAR_4->outputs[0], VAR_3);
    }

    FUNC_6(VAR_4, VAR_0, "Found at %d %d score %f\n", VAR_7, VAR_8, VAR_6);
    VAR_5->last_x = VAR_7;
    VAR_5->last_y = VAR_8;

    FUNC_5(VAR_3);

    FUNC_2(&VAR_3->metadata, "lavfi.rect.w", VAR_5->obj_frame->width, 0);
    FUNC_2(&VAR_3->metadata, "lavfi.rect.h", VAR_5->obj_frame->height, 0);
    FUNC_2(&VAR_3->metadata, "lavfi.rect.x", VAR_7, 0);
    FUNC_2(&VAR_3->metadata, "lavfi.rect.y", VAR_8, 0);

    return FUNC_8(VAR_4->outputs[0], VAR_3);
}
