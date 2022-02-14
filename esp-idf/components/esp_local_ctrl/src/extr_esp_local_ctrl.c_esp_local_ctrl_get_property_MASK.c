
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int esp_local_ctrl_prop_t ;
struct TYPE_2__ {int const** props; } ;


 int FUNC_0 (int ,char*,char const*) ;
 int VAR_0 ;
 int FUNC_1 (char const*) ;
 TYPE_1__* VAR_1 ;

const esp_local_ctrl_prop_t *FUNC_2(const char *VAR_2)
{
    int VAR_3 = FUNC_1(VAR_2);
    if (VAR_3 < 0) {
        FUNC_0(VAR_0, "Property %s not found", VAR_2);
        return ((void*)0);
    }

    return VAR_1->props[VAR_3];
}
