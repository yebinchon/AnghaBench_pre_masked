
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int pa_operation ;
typedef int pa_mainloop ;
typedef int pa_context ;
typedef enum pa_operation_state { ____Placeholder_pa_operation_state } pa_operation_state ;
struct TYPE_7__ {TYPE_1__* priv_data; } ;
struct TYPE_6__ {int stream; int server; } ;
typedef TYPE_1__ PulseData ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,char*) ;
 int FUNC_1 (int **,int **,int ,char*) ;
 int FUNC_2 (int **,int **) ;
 int * FUNC_3 (int *,int ,int ,TYPE_2__*) ;
 int FUNC_4 (int *,int,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_8(AVFormatContext *VAR_5)
{
    PulseData *VAR_6 = VAR_5->priv_data;
    pa_operation *VAR_7;
    enum pa_operation_state VAR_8;
    pa_mainloop *VAR_9 = ((void*)0);
    pa_context *VAR_10 = ((void*)0);
    int VAR_11 = 0;

    if ((VAR_11 = FUNC_1(&VAR_9, &VAR_10, VAR_6->server, "Update sink input information")) < 0)
        return VAR_11;

    if (!(VAR_7 = FUNC_3(VAR_10, FUNC_7(VAR_6->stream),
                                              VAR_4, VAR_5))) {
        VAR_11 = VAR_0;
        goto fail;
    }

    while ((VAR_8 = FUNC_5(VAR_7)) == VAR_3)
        FUNC_4(VAR_9, 1, ((void*)0));
    FUNC_6(VAR_7);
    if (VAR_8 != VAR_2) {
        VAR_11 = VAR_0;
        goto fail;
    }

  fail:
    FUNC_2(&VAR_9, &VAR_10);
    if (VAR_11)
        FUNC_0(VAR_6, VAR_1, "pa_context_get_sink_input_info failed.\n");
    return VAR_11;
}
