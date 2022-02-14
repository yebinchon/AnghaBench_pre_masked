
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef enum AVMediaType { ____Placeholder_AVMediaType } AVMediaType ;
struct TYPE_15__ {int nb_inputs; int nb_outputs; TYPE_3__** outputs; TYPE_2__** inputs; int name; TYPE_1__* filter; } ;
struct TYPE_14__ {int type; int in_channel_layouts; } ;
struct TYPE_13__ {int type; int out_channel_layouts; } ;
struct TYPE_12__ {int (* query_formats ) (TYPE_4__*) ;} ;
typedef int AVFilterFormats ;
typedef TYPE_4__ AVFilterContext ;
typedef int AVFilterChannelLayouts ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*,int ,char*,int ,int ) ;
 int * FUNC_3 () ;
 int * FUNC_4 (int) ;
 int * FUNC_5 () ;
 int FUNC_6 (TYPE_4__*,int *) ;
 int FUNC_7 (TYPE_4__*,int *) ;
 int FUNC_8 (TYPE_4__*,int *) ;
 int FUNC_9 (TYPE_4__*,int ) ;
 int FUNC_10 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_11(AVFilterContext *VAR_4)
{
    int VAR_5, VAR_6;
    AVFilterFormats *VAR_7;
    AVFilterChannelLayouts *VAR_8;
    AVFilterFormats *VAR_9;
    enum AVMediaType VAR_10 = VAR_4->inputs && VAR_4->inputs [0] ? VAR_4->inputs [0]->type :
                            VAR_4->outputs && VAR_4->outputs[0] ? VAR_4->outputs[0]->type :
                            VAR_1;

    if ((VAR_5 = VAR_4->filter->query_formats(VAR_4)) < 0) {
        if (VAR_5 != FUNC_0(VAR_3))
            FUNC_2(VAR_4, VAR_2, "Query format failed for '%s': %s\n",
                   VAR_4->name, FUNC_1(VAR_5));
        return VAR_5;
    }

    for (VAR_6 = 0; VAR_6 < VAR_4->nb_inputs; VAR_6++)
        FUNC_9(VAR_4, VAR_4->inputs[VAR_6]->out_channel_layouts);
    for (VAR_6 = 0; VAR_6 < VAR_4->nb_outputs; VAR_6++)
        FUNC_9(VAR_4, VAR_4->outputs[VAR_6]->in_channel_layouts);

    VAR_7 = FUNC_4(VAR_10);
    if ((VAR_5 = FUNC_7(VAR_4, VAR_7)) < 0)
        return VAR_5;
    if (VAR_10 == VAR_0) {
        VAR_9 = FUNC_5();
        if ((VAR_5 = FUNC_8(VAR_4, VAR_9)) < 0)
            return VAR_5;
        VAR_8 = FUNC_3();
        if ((VAR_5 = FUNC_6(VAR_4, VAR_8)) < 0)
            return VAR_5;
    }
    return 0;
}
