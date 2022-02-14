
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef enum AVHWDeviceType { ____Placeholder_AVHWDeviceType } AVHWDeviceType ;
struct TYPE_4__ {char* name; int type; int * device_ref; } ;
typedef TYPE_1__ HWDevice ;
typedef int AVBufferRef ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int **) ;
 int FUNC_2 (char**) ;
 int FUNC_3 (int **,int,char const*,int *,int ) ;
 int FUNC_4 (int *,int ,char*,int) ;
 TYPE_1__* FUNC_5 () ;
 char* FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(enum AVHWDeviceType VAR_2,
                                    const char *VAR_3,
                                    HWDevice **VAR_4)
{
    AVBufferRef *VAR_5 = ((void*)0);
    HWDevice *VAR_6;
    char *VAR_7;
    int VAR_8;

    VAR_7 = FUNC_6(VAR_2);
    if (!VAR_7) {
        VAR_8 = FUNC_0(VAR_1);
        goto fail;
    }

    VAR_8 = FUNC_3(&VAR_5, VAR_2, VAR_3, ((void*)0), 0);
    if (VAR_8 < 0) {
        FUNC_4(((void*)0), VAR_0,
               "Device creation failed: %d.\n", VAR_8);
        goto fail;
    }

    VAR_6 = FUNC_5();
    if (!VAR_6) {
        VAR_8 = FUNC_0(VAR_1);
        goto fail;
    }

    VAR_6->name = VAR_7;
    VAR_6->type = VAR_2;
    VAR_6->device_ref = VAR_5;

    if (VAR_4)
        *VAR_4 = VAR_6;

    return 0;

fail:
    FUNC_2(&VAR_7);
    FUNC_1(&VAR_5);
    return VAR_8;
}
