
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {void* device_name; void* device_description; } ;
struct TYPE_9__ {int error_code; TYPE_1__* devices; } ;
struct TYPE_8__ {int nb_devices; int devices; } ;
typedef TYPE_2__ PulseAudioDeviceList ;
typedef TYPE_3__ AVDeviceInfo ;


 void* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (void**) ;
 TYPE_3__* FUNC_4 (int) ;
 void* FUNC_5 (char const*) ;

__attribute__((used)) static void FUNC_6(PulseAudioDeviceList *VAR_1,
                                      const char *VAR_2, const char *VAR_3)
{
    int VAR_4;
    AVDeviceInfo *VAR_5 = ((void*)0);

    if (VAR_1->error_code)
        return;

    VAR_5 = FUNC_4(sizeof(AVDeviceInfo));
    if (!VAR_5) {
        VAR_1->error_code = FUNC_0(VAR_0);
        return;
    }

    VAR_5->device_description = FUNC_5(VAR_3);
    VAR_5->device_name = FUNC_5(VAR_2);

    if (!VAR_5->device_description || !VAR_5->device_name) {
        VAR_1->error_code = FUNC_0(VAR_0);
        goto fail;
    }

    if ((VAR_4 = FUNC_1(&VAR_1->devices->devices,
                                      &VAR_1->devices->nb_devices, VAR_5)) < 0) {
        VAR_1->error_code = VAR_4;
        goto fail;
    }
    return;

  fail:
    FUNC_3(&VAR_5->device_description);
    FUNC_3(&VAR_5->device_name);
    FUNC_2(VAR_5);

}
