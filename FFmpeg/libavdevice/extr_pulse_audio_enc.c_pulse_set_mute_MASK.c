
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int pa_operation ;
struct TYPE_5__ {int mute; int stream; int ctx; int mainloop; } ;
typedef TYPE_1__ PulseData ;


 int * FUNC_0 (int ,int ,int ,int ,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*,int *,char*) ;

__attribute__((used)) static int FUNC_4(PulseData *VAR_1)
{
    pa_operation *VAR_2;
    FUNC_2(VAR_1->mainloop);
    VAR_2 = FUNC_0(VAR_1->ctx, FUNC_1(VAR_1->stream),
                                        VAR_1->mute, VAR_0, VAR_1);
    return FUNC_3(VAR_1, VAR_2, "pa_context_set_sink_input_mute");
}
