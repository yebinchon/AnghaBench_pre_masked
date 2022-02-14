
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_8__ {int dt; int data; void* channels; void* width; void* height; } ;
struct TYPE_7__ {scalar_t__ model; } ;
struct TYPE_6__ {scalar_t__ nb_output; int ** output_tensors; int status; int outputs; int input_tensor; int input; int session; } ;
typedef TYPE_1__ TFModel ;
typedef int DNNReturnType ;
typedef TYPE_2__ DNNModel ;
typedef TYPE_3__ DNNData ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ,int *,int *,int *,int,int ,int **,scalar_t__,int *,int ,int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **) ;

DNNReturnType FUNC_8(const DNNModel *VAR_3, DNNData *VAR_4, uint32_t VAR_5)
{
    TFModel *VAR_6 = (TFModel *)VAR_3->model;
    uint32_t VAR_7 = FUNC_0(VAR_5, VAR_6->nb_output);
    if (VAR_7 == 0)
        return VAR_0;

    FUNC_7(VAR_6->output_tensors);
    for (uint32_t VAR_8 = 0; VAR_8 < VAR_6->nb_output; ++VAR_8) {
        if (VAR_6->output_tensors[VAR_8]) {
            FUNC_1(VAR_6->output_tensors[VAR_8]);
            VAR_6->output_tensors[VAR_8] = ((void*)0);
        }
    }

    FUNC_4(VAR_6->session, ((void*)0),
                  &VAR_6->input, &VAR_6->input_tensor, 1,
                  VAR_6->outputs, VAR_6->output_tensors, VAR_7,
                  ((void*)0), 0, ((void*)0), VAR_6->status);

    if (FUNC_3(VAR_6->status) != VAR_2){
        return VAR_0;
    }

    for (uint32_t VAR_9 = 0; VAR_9 < VAR_7; ++VAR_9) {
        VAR_4[VAR_9].height = FUNC_2(VAR_6->output_tensors[VAR_9], 1);
        VAR_4[VAR_9].width = FUNC_2(VAR_6->output_tensors[VAR_9], 2);
        VAR_4[VAR_9].channels = FUNC_2(VAR_6->output_tensors[VAR_9], 3);
        VAR_4[VAR_9].data = FUNC_5(VAR_6->output_tensors[VAR_9]);
        VAR_4[VAR_9].dt = FUNC_6(VAR_6->output_tensors[VAR_9]);
    }

    return VAR_1;
}
