
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_2__ {int * ap_list_sorted; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 size_t VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;

uint16_t FUNC_3(void)
{
    uint16_t VAR_4 = 0;
    if (!VAR_3) {
        FUNC_1(VAR_1, "Provisioning manager not initialized");
        return VAR_4;
    }

    FUNC_0(VAR_3);
    if (!VAR_2) {
        FUNC_1(VAR_1, "Provisioning manager not initialized");
        FUNC_2(VAR_3);
        return VAR_4;
    }

    while (VAR_4 < VAR_0) {
        if (!VAR_2->ap_list_sorted[VAR_4]) {
            break;
        }
        VAR_4++;
    }
    FUNC_2(VAR_3);
    return VAR_4;
}
