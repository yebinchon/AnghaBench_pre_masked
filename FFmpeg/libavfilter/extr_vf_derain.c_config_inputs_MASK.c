
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int channels; int height; int width; } ;
struct TYPE_11__ {TYPE_2__* priv; } ;
struct TYPE_10__ {int h; int w; TYPE_4__* dst; } ;
struct TYPE_9__ {TYPE_5__ input; TYPE_1__* model; } ;
struct TYPE_8__ {scalar_t__ (* set_input_output ) (int ,TYPE_5__*,char*,char const**,int) ;int model; } ;
typedef TYPE_2__ DRContext ;
typedef scalar_t__ DNNReturnType ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_4__*,int ,char*) ;
 scalar_t__ FUNC_2 (int ,TYPE_5__*,char*,char const**,int) ;

__attribute__((used)) static int FUNC_3(AVFilterLink *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_3->dst;
    DRContext *VAR_5 = VAR_4->priv;
    const char *VAR_6 = "y";
    DNNReturnType VAR_7;

    VAR_5->input.width = VAR_3->w;
    VAR_5->input.height = VAR_3->h;
    VAR_5->input.channels = 3;

    VAR_7 = (VAR_5->model->set_input_output)(VAR_5->model->model, &VAR_5->input, "x", &VAR_6, 1);
    if (VAR_7 != VAR_1) {
        FUNC_1(VAR_4, VAR_0, "could not set input and output for the model\n");
        return FUNC_0(VAR_2);
    }

    return 0;
}
