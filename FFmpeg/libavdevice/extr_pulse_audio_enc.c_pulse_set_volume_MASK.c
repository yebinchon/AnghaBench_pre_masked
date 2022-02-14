
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int pa_volume_t ;
struct TYPE_7__ {int channels; } ;
typedef TYPE_1__ pa_sample_spec ;
typedef int pa_operation ;
typedef int pa_cvolume ;
struct TYPE_8__ {int stream; int ctx; int mainloop; int base_volume; } ;
typedef TYPE_2__ PulseData ;


 double VAR_0 ;
 int FUNC_0 (double) ;
 int * FUNC_1 (int ,int ,int *,int ,TYPE_2__*) ;
 int FUNC_2 (int *,int ,double) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int VAR_1 ;
 int FUNC_8 (TYPE_2__*,int *,char*) ;

__attribute__((used)) static int FUNC_9(PulseData *VAR_2, double VAR_3)
{
    pa_operation *VAR_4;
    pa_cvolume VAR_5;
    pa_volume_t VAR_6;
    const pa_sample_spec *VAR_7 = FUNC_4(VAR_2->stream);

    VAR_6 = FUNC_6(FUNC_0(VAR_3 * VAR_0), VAR_2->base_volume);
    FUNC_2(&VAR_5, VAR_7->channels, VAR_0);
    FUNC_5(&VAR_5, &VAR_5, VAR_6);
    FUNC_7(VAR_2->mainloop);
    VAR_4 = FUNC_1(VAR_2->ctx, FUNC_3(VAR_2->stream),
                                          &VAR_5, VAR_1, VAR_2);
    return FUNC_8(VAR_2, VAR_4, "pa_context_set_sink_input_volume");
}
