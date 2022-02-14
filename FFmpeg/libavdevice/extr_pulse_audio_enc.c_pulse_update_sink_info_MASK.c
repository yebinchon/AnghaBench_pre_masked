
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int pa_operation ;
struct TYPE_7__ {TYPE_1__* priv_data; } ;
struct TYPE_6__ {int mainloop; int device; int ctx; } ;
typedef TYPE_1__ PulseData ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,char*) ;
 int * FUNC_1 (int ,int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_4)
{
    PulseData *VAR_5 = VAR_4->priv_data;
    pa_operation *VAR_6;
    if (!(VAR_6 = FUNC_1(VAR_5->ctx, VAR_5->device,
                                                VAR_3, VAR_5))) {
        FUNC_0(VAR_5, VAR_1, "pa_context_get_sink_info_by_name failed.\n");
        return VAR_0;
    }
    while (FUNC_2(VAR_6) == VAR_2)
        FUNC_4(VAR_5->mainloop);
    FUNC_3(VAR_6);
    return 0;
}
