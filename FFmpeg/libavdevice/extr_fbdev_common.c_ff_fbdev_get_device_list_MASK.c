
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct fb_var_screeninfo {char* id; } ;
struct fb_fix_screeninfo {char* id; } ;
typedef int device_file ;
struct TYPE_9__ {struct TYPE_9__* device_description; struct TYPE_9__* device_name; } ;
struct TYPE_8__ {scalar_t__ nb_devices; scalar_t__ default_device; int devices; } ;
typedef TYPE_1__ AVDeviceInfoList ;
typedef TYPE_2__ AVDeviceInfo ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,scalar_t__*,TYPE_2__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__**) ;
 int FUNC_4 (int *,int ,char*,char*,int ) ;
 TYPE_2__* FUNC_5 (int) ;
 void* FUNC_6 (char*) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int) ;
 int VAR_7 ;
 char* FUNC_9 () ;
 int FUNC_10 (int,int ,struct fb_var_screeninfo*) ;
 int FUNC_11 (char*,int,char*,int) ;
 int FUNC_12 (TYPE_2__*,char const*) ;

int FUNC_13(AVDeviceInfoList *VAR_8)
{
    struct fb_var_screeninfo VAR_9;
    struct fb_fix_screeninfo VAR_10;
    char VAR_11[12];
    AVDeviceInfo *VAR_12 = ((void*)0);
    int VAR_13, VAR_14, VAR_15 = 0;
    const char *VAR_16 = FUNC_9();

    if (!VAR_8)
        return FUNC_0(VAR_1);

    for (VAR_13 = 0; VAR_13 <= 31; VAR_13++) {
        FUNC_11(VAR_11, sizeof(VAR_11), "/dev/fb%d", VAR_13);

        if ((VAR_14 = FUNC_7(VAR_11, VAR_6)) < 0) {
            int VAR_17 = FUNC_0(VAR_7);
            if (VAR_17 != FUNC_0(VAR_2))
                FUNC_4(((void*)0), VAR_0, "Could not open framebuffer device '%s': %s\n",
                       VAR_11, FUNC_2(VAR_17));
            continue;
        }
        if (FUNC_10(VAR_14, VAR_5, &VAR_9) == -1)
            goto fail_device;
        if (FUNC_10(VAR_14, VAR_4, &VAR_10) == -1)
            goto fail_device;

        VAR_12 = FUNC_5(sizeof(AVDeviceInfo));
        if (!VAR_12) {
            VAR_15 = FUNC_0(VAR_3);
            goto fail_device;
        }
        VAR_12->device_name = FUNC_6(VAR_11);
        VAR_12->device_description = FUNC_6(VAR_10.id);
        if (!VAR_12->device_name || !VAR_12->device_description) {
            VAR_15 = FUNC_0(VAR_3);
            goto fail_device;
        }

        if ((VAR_15 = FUNC_1(&VAR_8->devices,
                                          &VAR_8->nb_devices, VAR_12)) < 0)
            goto fail_device;

        if (VAR_16 && !FUNC_12(VAR_12->device_name, VAR_16)) {
            VAR_8->default_device = VAR_8->nb_devices - 1;
            VAR_16 = ((void*)0);
        }
        FUNC_8(VAR_14);
        continue;

      fail_device:
        if (VAR_12) {
            FUNC_3(&VAR_12->device_name);
            FUNC_3(&VAR_12->device_description);
            FUNC_3(&VAR_12);
        }
        if (VAR_14 >= 0)
            FUNC_8(VAR_14);
        if (VAR_15 < 0)
            return VAR_15;
    }
    return 0;
}
