
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {int width; int height; int channels; scalar_t__ dt; } ;
struct TYPE_14__ {TYPE_2__* priv; } ;
struct TYPE_13__ {int h; int w; TYPE_5__* dst; } ;
struct TYPE_12__ {int height; int width; int channels; scalar_t__ dt; } ;
struct TYPE_11__ {int model_outputname; int model_inputname; TYPE_6__ input; TYPE_1__* model; } ;
struct TYPE_10__ {scalar_t__ (* get_input ) (int ,TYPE_3__*,int ) ;scalar_t__ (* set_input_output ) (int ,TYPE_6__*,int ,char const**,int) ;int model; } ;
typedef TYPE_2__ DnnProcessingContext ;
typedef scalar_t__ DNNReturnType ;
typedef TYPE_3__ DNNData ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*,int ,char*,...) ;
 scalar_t__ FUNC_2 (int ,TYPE_3__*,int ) ;
 scalar_t__ FUNC_3 (int ,TYPE_6__*,int ,char const**,int) ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_5)
{
    AVFilterContext *VAR_6 = VAR_5->dst;
    DnnProcessingContext *VAR_7 = VAR_6->priv;
    DNNReturnType VAR_8;
    DNNData VAR_9;

    VAR_8 = VAR_7->model->get_input(VAR_7->model->model, &VAR_9, VAR_7->model_inputname);
    if (VAR_8 != VAR_2) {
        FUNC_1(VAR_7, VAR_0, "could not get input from the model\n");
        return FUNC_0(VAR_4);
    }


    if (VAR_9.height != -1 && VAR_9.height != VAR_5->h) {
        FUNC_1(VAR_7, VAR_0, "the model requires frame height %d but got %d\n",
                                   VAR_9.height, VAR_5->h);
        return FUNC_0(VAR_4);
    }
    if (VAR_9.width != -1 && VAR_9.width != VAR_5->w) {
        FUNC_1(VAR_7, VAR_0, "the model requires frame width %d but got %d\n",
                                   VAR_9.width, VAR_5->w);
        return FUNC_0(VAR_4);
    }

    if (VAR_9.channels != 3) {
        FUNC_1(VAR_7, VAR_0, "the model requires input channels %d\n",
                                   VAR_9.channels);
        return FUNC_0(VAR_4);
    }
    if (VAR_9.dt != VAR_1 && VAR_9.dt != VAR_3) {
        FUNC_1(VAR_7, VAR_0, "only support dnn models with input data type as float32 and uint8.\n");
        return FUNC_0(VAR_4);
    }

    VAR_7->input.width = VAR_5->w;
    VAR_7->input.height = VAR_5->h;
    VAR_7->input.channels = VAR_9.channels;
    VAR_7->input.dt = VAR_9.dt;

    VAR_8 = (VAR_7->model->set_input_output)(VAR_7->model->model,
                                        &VAR_7->input, VAR_7->model_inputname,
                                        (const char **)&VAR_7->model_outputname, 1);
    if (VAR_8 != VAR_2) {
        FUNC_1(VAR_7, VAR_0, "could not set input and output for the model\n");
        return FUNC_0(VAR_4);
    }

    return 0;
}
