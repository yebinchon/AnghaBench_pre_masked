
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int pa_operation ;
typedef int pa_mainloop ;
typedef int pa_context ;
typedef enum pa_operation_state { ____Placeholder_pa_operation_state } pa_operation_state ;
struct TYPE_10__ {int nb_devices; int default_device; TYPE_1__** devices; } ;
struct TYPE_9__ {int output; scalar_t__ error_code; int default_device; TYPE_3__* devices; int member_0; } ;
struct TYPE_8__ {int device_name; } ;
typedef TYPE_2__ PulseAudioDeviceList ;
typedef TYPE_3__ AVDeviceInfoList ;


 int FUNC_0 (int ) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int **,int **,char const*,char*) ;
 int FUNC_3 (int **,int **) ;
 int * FUNC_4 (int *,int ,TYPE_2__*) ;
 int * FUNC_5 (int *,int ,TYPE_2__*) ;
 int * FUNC_6 (int *,int ,TYPE_2__*) ;
 int FUNC_7 (int *,int,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (int ,int ) ;

int FUNC_11(AVDeviceInfoList *VAR_7, const char *VAR_8, int VAR_9)
{
    pa_mainloop *VAR_10 = ((void*)0);
    pa_operation *VAR_11 = ((void*)0);
    pa_context *VAR_12 = ((void*)0);
    enum pa_operation_state VAR_13;
    PulseAudioDeviceList VAR_14 = { 0 };
    int VAR_15;

    VAR_14.output = VAR_9;
    VAR_14.devices = VAR_7;
    if (!VAR_7)
        return FUNC_0(VAR_1);
    VAR_7->nb_devices = 0;
    VAR_7->devices = ((void*)0);

    if ((VAR_14.error_code = FUNC_2(&VAR_10, &VAR_12, VAR_8, "Query devices")) < 0)
        goto fail;

    if (VAR_9)
        VAR_11 = FUNC_5(VAR_12, VAR_4, &VAR_14);
    else
        VAR_11 = FUNC_6(VAR_12, VAR_5, &VAR_14);
    while ((VAR_13 = FUNC_8(VAR_11)) == VAR_3)
        FUNC_7(VAR_10, 1, ((void*)0));
    if (VAR_13 != VAR_2)
        VAR_14.error_code = VAR_0;
    FUNC_9(VAR_11);
    if (VAR_14.error_code < 0)
        goto fail;

    VAR_11 = FUNC_4(VAR_12, VAR_6, &VAR_14);
    while ((VAR_13 = FUNC_8(VAR_11)) == VAR_3)
        FUNC_7(VAR_10, 1, ((void*)0));
    if (VAR_13 != VAR_2)
        VAR_14.error_code = VAR_0;
    FUNC_9(VAR_11);
    if (VAR_14.error_code < 0)
        goto fail;

    VAR_7->default_device = -1;
    for (VAR_15 = 0; VAR_15 < VAR_7->nb_devices; VAR_15++) {
        if (!FUNC_10(VAR_7->devices[VAR_15]->device_name, VAR_14.default_device)) {
            VAR_7->default_device = VAR_15;
            break;
        }
    }

  fail:
    FUNC_1(VAR_14.default_device);
    FUNC_3(&VAR_10, &VAR_12);
    return VAR_14.error_code;
}
