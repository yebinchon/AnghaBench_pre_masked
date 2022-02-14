
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef enum AVHWDeviceType { ____Placeholder_AVHWDeviceType } AVHWDeviceType ;
struct TYPE_4__ {int type; } ;
typedef TYPE_1__ HWDevice ;


 TYPE_1__** VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static HWDevice *FUNC_0(enum AVHWDeviceType VAR_2)
{
    HWDevice *VAR_3 = ((void*)0);
    int VAR_4;
    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
        if (VAR_0[VAR_4]->type == VAR_2) {
            if (VAR_3)
                return ((void*)0);
            VAR_3 = VAR_0[VAR_4];
        }
    }
    return VAR_3;
}
