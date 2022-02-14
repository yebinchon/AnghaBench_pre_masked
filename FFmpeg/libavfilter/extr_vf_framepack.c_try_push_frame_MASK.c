
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_22__ {TYPE_4__** outputs; TYPE_1__* priv; } ;
struct TYPE_21__ {int h; int w; } ;
struct TYPE_20__ {scalar_t__ pts; } ;
struct TYPE_19__ {scalar_t__ type; int view; } ;
struct TYPE_18__ {scalar_t__ format; scalar_t__ double_pts; TYPE_3__** input_views; } ;
typedef TYPE_1__ FramepackContext ;
typedef TYPE_2__ AVStereo3D ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_3__**) ;
 TYPE_2__* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_4__*,TYPE_3__*) ;
 TYPE_3__* FUNC_5 (TYPE_4__*,int ,int ) ;
 int FUNC_6 (TYPE_4__*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_7(AVFilterContext *VAR_6)
{
    FramepackContext *VAR_7 = VAR_6->priv;
    AVFilterLink *VAR_8 = VAR_6->outputs[0];
    AVStereo3D *VAR_9;
    int VAR_10, VAR_11;

    if (!(VAR_7->input_views[0] && VAR_7->input_views[1]))
        return 0;
    if (VAR_7->format == VAR_1) {
        if (VAR_7->double_pts == VAR_0)
            VAR_7->double_pts = VAR_7->input_views[VAR_5]->pts;

        for (VAR_11 = 0; VAR_11 < 2; VAR_11++) {

            VAR_7->input_views[VAR_11]->pts = VAR_7->double_pts++;


            VAR_9 = FUNC_3(VAR_7->input_views[VAR_11]);
            if (!VAR_9)
                return FUNC_0(VAR_4);
            VAR_9->type = VAR_7->format;
            VAR_9->view = VAR_11 == VAR_5 ? VAR_2
                                     : VAR_3;


            VAR_10 = FUNC_4(VAR_8, VAR_7->input_views[VAR_11]);
            VAR_7->input_views[VAR_11] = ((void*)0);
            if (VAR_10 < 0)
                return VAR_10;
        }
        return VAR_10;
    } else {
        AVFrame *VAR_12 = FUNC_5(VAR_8, VAR_8->w, VAR_8->h);
        if (!VAR_12)
            return FUNC_0(VAR_4);

        FUNC_6(VAR_8, VAR_12);


        VAR_10 = FUNC_1(VAR_12, VAR_7->input_views[VAR_5]);
        if (VAR_10 < 0) {
            FUNC_2(&VAR_12);
            return VAR_10;
        }

        for (VAR_11 = 0; VAR_11 < 2; VAR_11++)
            FUNC_2(&VAR_7->input_views[VAR_11]);


        VAR_9 = FUNC_3(VAR_12);
        if (!VAR_9) {
            FUNC_2(&VAR_12);
            return FUNC_0(VAR_4);
        }
        VAR_9->type = VAR_7->format;

        return FUNC_4(VAR_8, VAR_12);
    }
}
