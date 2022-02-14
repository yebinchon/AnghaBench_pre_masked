
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum AVHWDeviceType { ____Placeholder_AVHWDeviceType } AVHWDeviceType ;
struct TYPE_2__ {int type; } ;


 int VAR_0 ;
 TYPE_1__** VAR_1 ;

enum AVHWDeviceType FUNC_0(enum AVHWDeviceType VAR_2)
{
    enum AVHWDeviceType VAR_3;
    int VAR_4, VAR_5 = 0;
    for (VAR_4 = 0; VAR_1[VAR_4]; VAR_4++) {
        if (VAR_2 != VAR_0 && VAR_1[VAR_4]->type <= VAR_2)
            continue;
        if (!VAR_5 || VAR_1[VAR_4]->type < VAR_3) {
            VAR_3 = VAR_1[VAR_4]->type;
            VAR_5 = 1;
        }
    }
    return VAR_5 ? VAR_3 : VAR_0;
}
