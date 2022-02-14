
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_24__ {int height; int width; scalar_t__ data; } ;
struct TYPE_23__ {TYPE_3__* priv; TYPE_5__** outputs; } ;
struct TYPE_22__ {int w; int h; TYPE_6__* dst; } ;
struct TYPE_21__ {int height; int width; int* linesize; double** data; } ;
struct TYPE_19__ {scalar_t__ data; } ;
struct TYPE_20__ {TYPE_7__ output; TYPE_2__ input; int model; TYPE_1__* dnn_module; } ;
struct TYPE_18__ {scalar_t__ (* execute_model ) (int ,TYPE_7__*,int) ;} ;
typedef TYPE_3__ DRContext ;
typedef scalar_t__ DNNReturnType ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVFilterLink ;
typedef TYPE_6__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 double FUNC_1 (int,int ,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_3 (TYPE_4__**) ;
 int FUNC_4 (TYPE_6__*,int ,char*) ;
 int FUNC_5 (TYPE_5__*,TYPE_4__*) ;
 TYPE_4__* FUNC_6 (TYPE_5__*,int,int) ;
 scalar_t__ FUNC_7 (int ,TYPE_7__*,int) ;

__attribute__((used)) static int FUNC_8(AVFilterLink *VAR_4, AVFrame *VAR_5)
{
    AVFilterContext *VAR_6 = VAR_4->dst;
    AVFilterLink *VAR_7 = VAR_6->outputs[0];
    DRContext *VAR_8 = VAR_6->priv;
    DNNReturnType VAR_9;
    int VAR_10;

    AVFrame *VAR_11 = FUNC_6(VAR_7, VAR_7->w, VAR_7->h);
    if (!VAR_11) {
        FUNC_4(VAR_6, VAR_0, "could not allocate memory for output frame\n");
        FUNC_3(&VAR_5);
        return FUNC_0(VAR_3);
    }

    FUNC_2(VAR_11, VAR_5);

    for (int VAR_12 = 0; VAR_12 < VAR_5->height; VAR_12++){
        for(int VAR_13 = 0; VAR_13 < VAR_5->width * 3; VAR_13++){
            int VAR_14 = VAR_12 * VAR_5->linesize[0] + VAR_13;
            int VAR_15 = VAR_12 * VAR_5->width * 3 + VAR_13;
            ((float *)VAR_8->input.data)[VAR_15] = VAR_5->data[0][VAR_14] / 255.0;
        }
    }

    VAR_9 = (VAR_8->dnn_module->execute_model)(VAR_8->model, &VAR_8->output, 1);
    if (VAR_9 != VAR_1){
        FUNC_4(VAR_6, VAR_0, "failed to execute model\n");
        return FUNC_0(VAR_2);
    }

    VAR_11->height = VAR_8->output.height;
    VAR_11->width = VAR_8->output.width;
    VAR_7->h = VAR_8->output.height;
    VAR_7->w = VAR_8->output.width;
    VAR_10 = (VAR_5->height - VAR_11->height) >> 1;

    for (int VAR_16 = 0; VAR_16 < VAR_11->height; VAR_16++){
        for(int VAR_17 = 0; VAR_17 < VAR_11->width * 3; VAR_17++){
            int VAR_18 = VAR_16 * VAR_11->linesize[0] + VAR_17;
            int VAR_19 = VAR_16 * VAR_11->width * 3 + VAR_17;

            int VAR_20 = (VAR_16 + VAR_10) * VAR_5->width * 3 + VAR_17 + VAR_10 * 3;
            VAR_11->data[0][VAR_18] = FUNC_1((int)((((float *)VAR_8->input.data)[VAR_20] - ((float *)VAR_8->output.data)[VAR_19]) * 255), 0, 255);
        }
    }

    FUNC_3(&VAR_5);

    return FUNC_5(VAR_7, VAR_11);
}
