
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tBTM_RMT_NAME_CALLBACK ;
struct TYPE_2__ {int ** p_rmt_name_callback; } ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;

BOOLEAN FUNC_0 (tBTM_RMT_NAME_CALLBACK *VAR_4)
{
    int VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
        if (VAR_3.p_rmt_name_callback[VAR_5] == VAR_4) {
            VAR_3.p_rmt_name_callback[VAR_5] = ((void*)0);
            return (VAR_2);
        }
    }
    return (VAR_1);
}
