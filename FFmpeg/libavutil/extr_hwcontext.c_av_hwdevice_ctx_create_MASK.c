
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef enum AVHWDeviceType { ____Placeholder_AVHWDeviceType } AVHWDeviceType ;
struct TYPE_13__ {scalar_t__ data; } ;
struct TYPE_12__ {TYPE_2__* internal; } ;
struct TYPE_11__ {TYPE_1__* hw_type; } ;
struct TYPE_10__ {int (* device_create ) (TYPE_3__*,char const*,int *,int) ;} ;
typedef TYPE_3__ AVHWDeviceContext ;
typedef int AVDictionary ;
typedef TYPE_4__ AVBufferRef ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_4__**) ;
 TYPE_4__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_3__*,char const*,int *,int) ;

int FUNC_5(AVBufferRef **VAR_2, enum AVHWDeviceType VAR_3,
                           const char *VAR_4, AVDictionary *VAR_5, int VAR_6)
{
    AVBufferRef *VAR_7 = ((void*)0);
    AVHWDeviceContext *VAR_8;
    int VAR_9 = 0;

    VAR_7 = FUNC_2(VAR_3);
    if (!VAR_7) {
        VAR_9 = FUNC_0(VAR_0);
        goto fail;
    }
    VAR_8 = (AVHWDeviceContext*)VAR_7->data;

    if (!VAR_8->internal->hw_type->device_create) {
        VAR_9 = FUNC_0(VAR_1);
        goto fail;
    }

    VAR_9 = VAR_8->internal->hw_type->device_create(VAR_8, VAR_4,
                                                       VAR_5, VAR_6);
    if (VAR_9 < 0)
        goto fail;

    VAR_9 = FUNC_3(VAR_7);
    if (VAR_9 < 0)
        goto fail;

    *VAR_2 = VAR_7;
    return 0;
fail:
    FUNC_1(&VAR_7);
    *VAR_2 = ((void*)0);
    return VAR_9;
}
