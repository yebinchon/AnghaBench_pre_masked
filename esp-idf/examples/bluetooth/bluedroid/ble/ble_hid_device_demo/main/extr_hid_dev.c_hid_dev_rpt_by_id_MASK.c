
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_4__ {scalar_t__ id; scalar_t__ type; scalar_t__ mode; } ;
typedef TYPE_1__ hid_report_map_t ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static hid_report_map_t *FUNC_0(uint8_t VAR_3, uint8_t VAR_4)
{
    hid_report_map_t *VAR_5 = VAR_1;

    for (uint8_t VAR_6 = VAR_2; VAR_6 > 0; VAR_6--, VAR_5++) {
        if (VAR_5->id == VAR_3 && VAR_5->type == VAR_4 && VAR_5->mode == VAR_0) {
            return VAR_5;
        }
    }

    return ((void*)0);
}
