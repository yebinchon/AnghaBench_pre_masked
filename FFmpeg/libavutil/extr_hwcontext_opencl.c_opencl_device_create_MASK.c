
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int platform_index; int device_index; int * filter_device; int * enumerate_devices; int * filter_platform; int * enumerate_platforms; int * context; } ;
typedef TYPE_1__ OpenCLDeviceSelector ;
typedef int AVHWDeviceContext ;
typedef int AVDictionary ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,char*,char const*) ;
 int FUNC_2 (int *,TYPE_1__*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char const*,char*,int*,...) ;

__attribute__((used)) static int FUNC_4(AVHWDeviceContext *VAR_6, const char *VAR_7,
                                AVDictionary *VAR_8, int VAR_9)
{
    OpenCLDeviceSelector VAR_10 = {
        .context = VAR_8,
        .enumerate_platforms = &VAR_3,
        .filter_platform = &VAR_5,
        .enumerate_devices = &VAR_2,
        .filter_device = &VAR_4,
    };

    if (VAR_7 && VAR_7[0]) {

        int VAR_11 = -1, VAR_12 = -1, VAR_13;
        if (VAR_7[0] == '.')
            VAR_13 = FUNC_3(VAR_7, ".%d", &VAR_11);
        else
            VAR_13 = FUNC_3(VAR_7, "%d.%d", &VAR_12, &VAR_11);
        if (VAR_13 < 1) {
            FUNC_1(VAR_6, VAR_0, "Invalid OpenCL platform/device "
                   "index specification \"%s\".\n", VAR_7);
            return FUNC_0(VAR_1);
        }
        VAR_10.platform_index = VAR_12;
        VAR_10.device_index = VAR_11;
    } else {
        VAR_10.platform_index = -1;
        VAR_10.device_index = -1;
    }

    return FUNC_2(VAR_6, &VAR_10, ((void*)0));
}
