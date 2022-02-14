
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum AVHWDeviceType { ____Placeholder_AVHWDeviceType } AVHWDeviceType ;
struct TYPE_3__ {int hw_device_ctx; } ;
typedef TYPE_1__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int const,int *,int *,int ) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_2, const enum AVHWDeviceType VAR_3)
{
    int VAR_4 = 0;

    if ((VAR_4 = FUNC_1(&VAR_0, VAR_3,
                                      ((void*)0), ((void*)0), 0)) < 0) {
        FUNC_2(VAR_1, "Failed to create specified HW device.\n");
        return VAR_4;
    }
    VAR_2->hw_device_ctx = FUNC_0(VAR_0);

    return VAR_4;
}
