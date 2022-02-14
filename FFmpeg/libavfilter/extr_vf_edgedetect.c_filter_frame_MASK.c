
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct plane_info {int width; int height; int * directions; int * gradients; int * tmpbuf; } ;
typedef int int8_t ;
struct TYPE_19__ {TYPE_3__** outputs; TYPE_1__* priv; } ;
struct TYPE_18__ {int h; int w; TYPE_4__* dst; } ;
struct TYPE_17__ {int * linesize; int * data; } ;
struct TYPE_16__ {scalar_t__ mode; int nb_planes; int filter_planes; int high_u8; int low_u8; struct plane_info* planes; } ;
typedef TYPE_1__ EdgeDetectContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__**) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int ,int ,int ,int const,int const) ;
 int FUNC_5 (int const,int const,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int const,int const,int ,int ,int *,int const) ;
 int FUNC_7 (TYPE_3__*,TYPE_2__*) ;
 TYPE_2__* FUNC_8 (TYPE_3__*,int ,int ) ;
 int FUNC_9 (TYPE_4__*,int const,int const,int *,int const,int ,int ) ;
 int FUNC_10 (int *,int ,int const) ;
 int FUNC_11 (int const,int const,int *,int const,int *,int const,int *,int const) ;
 int FUNC_12 (int const,int const,int *,int const,int *,int const,int *,int const) ;

__attribute__((used)) static int FUNC_13(AVFilterLink *VAR_2, AVFrame *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_2->dst;
    EdgeDetectContext *VAR_5 = VAR_4->priv;
    AVFilterLink *VAR_6 = VAR_4->outputs[0];
    int VAR_7, VAR_8 = 0;
    AVFrame *VAR_9;

    if (VAR_5->mode != VAR_1 && FUNC_3(VAR_3)) {
        VAR_8 = 1;
        VAR_9 = VAR_3;
    } else {
        VAR_9 = FUNC_8(VAR_6, VAR_6->w, VAR_6->h);
        if (!VAR_9) {
            FUNC_2(&VAR_3);
            return FUNC_0(VAR_0);
        }
        FUNC_1(VAR_9, VAR_3);
    }

    for (VAR_7 = 0; VAR_7 < VAR_5->nb_planes; VAR_7++) {
        struct plane_info *VAR_10 = &VAR_5->planes[VAR_7];
        uint8_t *VAR_11 = VAR_10->tmpbuf;
        uint16_t *VAR_12 = VAR_10->gradients;
        int8_t *VAR_13 = VAR_10->directions;
        const int VAR_14 = VAR_10->width;
        const int VAR_15 = VAR_10->height;

        if (!((1 << VAR_7) & VAR_5->filter_planes)) {
            if (!VAR_8)
                FUNC_4(VAR_9->data[VAR_7], VAR_9->linesize[VAR_7],
                                    VAR_3->data[VAR_7], VAR_3->linesize[VAR_7],
                                    VAR_14, VAR_15);
            continue;
        }


        FUNC_9(VAR_4, VAR_14, VAR_15,
                      VAR_11, VAR_14,
                      VAR_3->data[VAR_7], VAR_3->linesize[VAR_7]);


        FUNC_12(VAR_14, VAR_15,
              VAR_12, VAR_14,
              VAR_13,VAR_14,
              VAR_11, VAR_14);



        FUNC_10(VAR_11, 0, VAR_14 * VAR_15);
        FUNC_11(VAR_14, VAR_15,
                                VAR_11, VAR_14,
                                VAR_13,VAR_14,
                                VAR_12, VAR_14);


        FUNC_6(VAR_5->low_u8, VAR_5->high_u8,
                         VAR_14, VAR_15,
                         VAR_9->data[VAR_7], VAR_9->linesize[VAR_7],
                         VAR_11, VAR_14);

        if (VAR_5->mode == VAR_1) {
            FUNC_5(VAR_14, VAR_15,
                      VAR_9->data[VAR_7], VAR_9->linesize[VAR_7],
                      VAR_3->data[VAR_7], VAR_3->linesize[VAR_7]);
        }
    }

    if (!VAR_8)
        FUNC_2(&VAR_3);
    return FUNC_7(VAR_6, VAR_9);
}
