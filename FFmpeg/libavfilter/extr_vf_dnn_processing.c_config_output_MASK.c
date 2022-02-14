
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int height; int width; } ;
struct TYPE_11__ {TYPE_2__* priv; } ;
struct TYPE_10__ {int h; int w; TYPE_4__* src; } ;
struct TYPE_9__ {TYPE_5__ output; int model; TYPE_1__* dnn_module; } ;
struct TYPE_8__ {scalar_t__ (* execute_model ) (int ,TYPE_5__*,int) ;} ;
typedef TYPE_2__ DnnProcessingContext ;
typedef scalar_t__ DNNReturnType ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;
 scalar_t__ FUNC_2 (int ,TYPE_5__*,int) ;

__attribute__((used)) static int FUNC_3(AVFilterLink *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_3->src;
    DnnProcessingContext *VAR_5 = VAR_4->priv;
    DNNReturnType VAR_6;


    VAR_6 = (VAR_5->dnn_module->execute_model)(VAR_5->model, &VAR_5->output, 1);
    if (VAR_6 != VAR_1){
        FUNC_1(VAR_5, VAR_0, "failed to execute model\n");
        return FUNC_0(VAR_2);
    }

    VAR_3->w = VAR_5->output.width;
    VAR_3->h = VAR_5->output.height;

    return 0;
}
