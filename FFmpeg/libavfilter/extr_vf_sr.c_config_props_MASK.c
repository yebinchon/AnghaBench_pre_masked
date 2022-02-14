
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_19__ {int width; int height; int channels; } ;
struct TYPE_18__ {int height; int width; } ;
struct TYPE_17__ {scalar_t__ (* set_input_output ) (int ,TYPE_7__*,char*,char const**,int) ;int model; } ;
struct TYPE_16__ {TYPE_3__** outputs; TYPE_2__* priv; } ;
struct TYPE_15__ {int w; int h; int format; TYPE_4__* dst; } ;
struct TYPE_14__ {int scale_factor; int sws_input_linesize; int sws_output_linesize; int sws_slice_h; void** sws_contexts; TYPE_6__ output; TYPE_7__ input; TYPE_5__* model; TYPE_1__* dnn_module; } ;
struct TYPE_13__ {scalar_t__ (* execute_model ) (TYPE_5__*,TYPE_6__*,int) ;} ;
typedef TYPE_2__ SRContext ;
typedef scalar_t__ DNNReturnType ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_4__*,int ,char*,...) ;
 scalar_t__ FUNC_4 (int ,TYPE_7__*,char*,char const**,int) ;
 scalar_t__ FUNC_5 (TYPE_5__*,TYPE_6__*,int) ;
 scalar_t__ FUNC_6 (int ,TYPE_7__*,char*,char const**,int) ;
 scalar_t__ FUNC_7 (TYPE_5__*,TYPE_6__*,int) ;
 void* FUNC_8 (int,int,int,int,int,int,int ,int *,int *,int *) ;

__attribute__((used)) static int FUNC_9(AVFilterLink *VAR_7)
{
    AVFilterContext *VAR_8 = VAR_7->dst;
    SRContext *VAR_9 = VAR_8->priv;
    AVFilterLink *VAR_10 = VAR_8->outputs[0];
    DNNReturnType VAR_11;
    int VAR_12, VAR_13, VAR_14, VAR_15;
    const char *VAR_16 = "y";

    VAR_9->input.width = VAR_7->w * VAR_9->scale_factor;
    VAR_9->input.height = VAR_7->h * VAR_9->scale_factor;
    VAR_9->input.channels = 1;

    VAR_11 = (VAR_9->model->set_input_output)(VAR_9->model->model, &VAR_9->input, "x", &VAR_16, 1);
    if (VAR_11 != VAR_3){
        FUNC_3(VAR_8, VAR_0, "could not set input and output for the model\n");
        return FUNC_0(VAR_4);
    }

    VAR_11 = (VAR_9->dnn_module->execute_model)(VAR_9->model, &VAR_9->output, 1);
    if (VAR_11 != VAR_3){
        FUNC_3(VAR_8, VAR_0, "failed to execute loaded model\n");
        return FUNC_0(VAR_4);
    }

    if (VAR_9->input.height != VAR_9->output.height || VAR_9->input.width != VAR_9->output.width){
        VAR_9->input.width = VAR_7->w;
        VAR_9->input.height = VAR_7->h;
        VAR_11 = (VAR_9->model->set_input_output)(VAR_9->model->model, &VAR_9->input, "x", &VAR_16, 1);
        if (VAR_11 != VAR_3){
            FUNC_3(VAR_8, VAR_0, "could not set input and output for the model\n");
            return FUNC_0(VAR_4);
        }
        VAR_11 = (VAR_9->dnn_module->execute_model)(VAR_9->model, &VAR_9->output, 1);
        if (VAR_11 != VAR_3){
            FUNC_3(VAR_8, VAR_0, "failed to execute loaded model\n");
            return FUNC_0(VAR_4);
        }
        VAR_9->scale_factor = 0;
    }
    VAR_10->h = VAR_9->output.height;
    VAR_10->w = VAR_9->output.width;
    VAR_9->sws_contexts[1] = FUNC_8(VAR_9->input.width, VAR_9->input.height, VAR_1,
                                                 VAR_9->input.width, VAR_9->input.height, VAR_2,
                                                 0, ((void*)0), ((void*)0), ((void*)0));
    VAR_9->sws_input_linesize = VAR_9->input.width << 2;
    VAR_9->sws_contexts[2] = FUNC_8(VAR_9->output.width, VAR_9->output.height, VAR_2,
                                                 VAR_9->output.width, VAR_9->output.height, VAR_1,
                                                 0, ((void*)0), ((void*)0), ((void*)0));
    VAR_9->sws_output_linesize = VAR_9->output.width << 2;
    if (!VAR_9->sws_contexts[1] || !VAR_9->sws_contexts[2]){
        FUNC_3(VAR_8, VAR_0, "could not create SwsContext for conversions\n");
        return FUNC_0(VAR_5);
    }
    if (VAR_9->scale_factor){
        VAR_9->sws_contexts[0] = FUNC_8(VAR_7->w, VAR_7->h, VAR_7->format,
                                                     VAR_10->w, VAR_10->h, VAR_10->format,
                                                     VAR_6, ((void*)0), ((void*)0), ((void*)0));
        if (!VAR_9->sws_contexts[0]){
            FUNC_3(VAR_8, VAR_0, "could not create SwsContext for scaling\n");
            return FUNC_0(VAR_5);
        }
        VAR_9->sws_slice_h = VAR_7->h;
    } else {
        if (VAR_7->format != VAR_1){
            VAR_12 = VAR_9->input.height;
            VAR_13 = VAR_9->input.width;
            VAR_14 = VAR_9->output.height;
            VAR_15 = VAR_9->output.width;

            switch (VAR_7->format){
            case 130:
                VAR_12 = FUNC_1(VAR_12, 1);
                VAR_13 = FUNC_1(VAR_13, 1);
                VAR_14 = FUNC_1(VAR_14, 1);
                VAR_15 = FUNC_1(VAR_15, 1);
                break;
            case 129:
                VAR_13 = FUNC_1(VAR_13, 1);
                VAR_15 = FUNC_1(VAR_15, 1);
                break;
            case 128:
                break;
            case 132:
                VAR_12 = FUNC_1(VAR_12, 2);
                VAR_13 = FUNC_1(VAR_13, 2);
                VAR_14 = FUNC_1(VAR_14, 2);
                VAR_15 = FUNC_1(VAR_15, 2);
                break;
            case 131:
                VAR_13 = FUNC_1(VAR_13, 2);
                VAR_15 = FUNC_1(VAR_15, 2);
                break;
            default:
                FUNC_3(VAR_8, VAR_0,
                       "could not create SwsContext for scaling for given input pixel format: %s\n",
                       FUNC_2(VAR_7->format));
                return FUNC_0(VAR_4);
            }
            VAR_9->sws_contexts[0] = FUNC_8(VAR_13, VAR_12, VAR_1,
                                                         VAR_15, VAR_14, VAR_1,
                                                         VAR_6, ((void*)0), ((void*)0), ((void*)0));
            if (!VAR_9->sws_contexts[0]){
                FUNC_3(VAR_8, VAR_0, "could not create SwsContext for scaling\n");
                return FUNC_0(VAR_5);
            }
            VAR_9->sws_slice_h = VAR_12;
        }
    }

    return 0;
}
