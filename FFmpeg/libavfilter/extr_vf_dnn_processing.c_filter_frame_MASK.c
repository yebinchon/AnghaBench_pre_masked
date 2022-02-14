
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {int channels; } ;
struct TYPE_14__ {TYPE_2__* priv; TYPE_3__** outputs; } ;
struct TYPE_13__ {int h; int w; TYPE_4__* dst; } ;
struct TYPE_12__ {TYPE_5__ output; int model; TYPE_1__* dnn_module; int input; } ;
struct TYPE_11__ {scalar_t__ (* execute_model ) (int ,TYPE_5__*,int) ;} ;
typedef TYPE_2__ DnnProcessingContext ;
typedef scalar_t__ DNNReturnType ;
typedef int AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int **) ;
 int FUNC_4 (TYPE_2__*,int ,char*) ;
 int FUNC_5 (int *,TYPE_5__*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (TYPE_3__*,int *) ;
 int * FUNC_8 (TYPE_3__*,int ,int ) ;
 scalar_t__ FUNC_9 (int ,TYPE_5__*,int) ;

__attribute__((used)) static int FUNC_10(AVFilterLink *VAR_4, AVFrame *VAR_5)
{
    AVFilterContext *VAR_6 = VAR_4->dst;
    AVFilterLink *VAR_7 = VAR_6->outputs[0];
    DnnProcessingContext *VAR_8 = VAR_6->priv;
    DNNReturnType VAR_9;
    AVFrame *VAR_10;

    FUNC_6(&VAR_8->input, VAR_5);

    VAR_9 = (VAR_8->dnn_module->execute_model)(VAR_8->model, &VAR_8->output, 1);
    if (VAR_9 != VAR_1){
        FUNC_4(VAR_8, VAR_0, "failed to execute model\n");
        FUNC_3(&VAR_5);
        return FUNC_0(VAR_2);
    }
    FUNC_1(VAR_8->output.channels == 3);

    VAR_10 = FUNC_8(VAR_7, VAR_7->w, VAR_7->h);
    if (!VAR_10) {
        FUNC_3(&VAR_5);
        return FUNC_0(VAR_3);
    }

    FUNC_2(VAR_10, VAR_5);
    FUNC_5(VAR_10, &VAR_8->output);
    FUNC_3(&VAR_5);
    return FUNC_7(VAR_7, VAR_10);
}
