
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_26__ {TYPE_3__** outputs; TYPE_1__* priv; } ;
struct TYPE_25__ {int frame_count_out; int h; int w; TYPE_4__* dst; } ;
struct TYPE_24__ {int * data; int height; int width; } ;
struct TYPE_23__ {int (* set_frame ) (TYPE_1__*,TYPE_2__*,TYPE_2__*,int,int,int,int) ;scalar_t__ calc_mean_err; int palette; int last_in; int last_out; int diff_mode; } ;
typedef TYPE_1__ PaletteUseContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__**) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_4__*,char*,int,int,int,int,int,int,int ,int ) ;
 TYPE_2__* FUNC_8 (TYPE_3__*,int ,int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,int ,TYPE_2__*,int ,TYPE_2__*,int*,int*,int*,int*) ;
 int FUNC_11 (TYPE_1__*,TYPE_2__*,TYPE_2__*,int,int,int,int) ;

__attribute__((used)) static int FUNC_12(AVFilterLink *VAR_2, AVFrame *VAR_3, AVFrame **VAR_4)
{
    int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
    AVFilterContext *VAR_10 = VAR_2->dst;
    PaletteUseContext *VAR_11 = VAR_10->priv;
    AVFilterLink *VAR_12 = VAR_2->dst->outputs[0];

    AVFrame *VAR_13 = FUNC_8(VAR_12, VAR_12->w, VAR_12->h);
    if (!VAR_13) {
        FUNC_2(&VAR_3);
        *VAR_4 = ((void*)0);
        return FUNC_0(VAR_1);
    }
    FUNC_1(VAR_13, VAR_3);

    FUNC_10(VAR_11->diff_mode, VAR_11->last_in, VAR_3,
                          VAR_11->last_out, VAR_13, &VAR_5, &VAR_6, &VAR_7, &VAR_8);
    FUNC_5(VAR_11->last_in);
    FUNC_5(VAR_11->last_out);
    if (FUNC_4(VAR_11->last_in, VAR_3) < 0 ||
        FUNC_4(VAR_11->last_out, VAR_13) < 0 ||
        FUNC_3(VAR_11->last_in) < 0) {
        FUNC_2(&VAR_3);
        FUNC_2(&VAR_13);
        *VAR_4 = ((void*)0);
        return FUNC_0(VAR_1);
    }

    FUNC_7(VAR_10, "%dx%d rect: (%d;%d) -> (%d,%d) [area:%dx%d]\n",
            VAR_7, VAR_8, VAR_5, VAR_6, VAR_5+VAR_7, VAR_6+VAR_8, VAR_3->width, VAR_3->height);

    VAR_9 = VAR_11->set_frame(VAR_11, VAR_13, VAR_3, VAR_5, VAR_6, VAR_7, VAR_8);
    if (VAR_9 < 0) {
        FUNC_2(&VAR_13);
        *VAR_4 = ((void*)0);
        return VAR_9;
    }
    FUNC_9(VAR_13->data[1], VAR_11->palette, VAR_0);
    if (VAR_11->calc_mean_err)
        FUNC_6(VAR_11, VAR_3, VAR_13, VAR_2->frame_count_out);
    FUNC_2(&VAR_3);
    *VAR_4 = VAR_13;
    return 0;
}
