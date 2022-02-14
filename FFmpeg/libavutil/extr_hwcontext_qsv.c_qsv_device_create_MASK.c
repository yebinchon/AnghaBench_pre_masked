
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int mfxIMPL ;
typedef enum AVHWDeviceType { ____Placeholder_AVHWDeviceType } AVHWDeviceType ;
struct TYPE_14__ {scalar_t__ data; } ;
struct TYPE_13__ {int * value; } ;
struct TYPE_12__ {int free; TYPE_1__* user_opaque; } ;
struct TYPE_11__ {TYPE_9__* child_device_ctx; } ;
typedef TYPE_1__ QSVDevicePriv ;
typedef TYPE_2__ AVHWDeviceContext ;
typedef TYPE_3__ AVDictionaryEntry ;
typedef int AVDictionary ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int **) ;
 TYPE_3__* FUNC_2 (int *,char*,int *,int ) ;
 int FUNC_3 (int **,char*,char*,int ) ;
 int FUNC_4 (TYPE_9__**,int,int *,int *,int ) ;
 int FUNC_5 (TYPE_2__*,int ,char*) ;
 TYPE_1__* FUNC_6 (int) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (TYPE_2__*,int ,TYPE_2__*,int ) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_9(AVHWDeviceContext *VAR_8, const char *VAR_9,
                             AVDictionary *VAR_10, int VAR_11)
{
    QSVDevicePriv *VAR_12;
    enum AVHWDeviceType VAR_13;
    AVHWDeviceContext *VAR_14;
    AVDictionary *VAR_15;
    AVDictionaryEntry *VAR_16;

    mfxIMPL VAR_17;
    int VAR_18;

    VAR_12 = FUNC_6(sizeof(*VAR_12));
    if (!VAR_12)
        return FUNC_0(VAR_5);

    VAR_8->user_opaque = VAR_12;
    VAR_8->free = VAR_7;

    VAR_16 = FUNC_2(VAR_10, "child_device", ((void*)0), 0);

    VAR_15 = ((void*)0);
    if (VAR_4) {
        VAR_13 = VAR_1;





        FUNC_3(&VAR_15, "kernel_driver", "i915", 0);
        FUNC_3(&VAR_15, "driver", "iHD", 0);
    } else if (VAR_3)
        VAR_13 = VAR_0;
    else {
        FUNC_5(VAR_8, VAR_2, "No supported child device type is enabled\n");
        return FUNC_0(VAR_6);
    }

    VAR_18 = FUNC_4(&VAR_12->child_device_ctx, VAR_13,
                                 VAR_16 ? VAR_16->value : ((void*)0), VAR_15, 0);

    FUNC_1(&VAR_15);
    if (VAR_18 < 0)
        return VAR_18;

    VAR_14 = (AVHWDeviceContext*)VAR_12->child_device_ctx->data;

    VAR_17 = FUNC_7(VAR_9);

    return FUNC_8(VAR_8, VAR_17, VAR_14, 0);
}
