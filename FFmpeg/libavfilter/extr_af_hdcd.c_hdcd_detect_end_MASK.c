
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int _active_count; int hdcd_detected; scalar_t__ peak_extend; scalar_t__ max_gain_adjustment; } ;
typedef TYPE_1__ hdcd_detection_data ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(hdcd_detection_data *VAR_2, int VAR_3) {


    if (VAR_2->_active_count == VAR_3) {
        if (VAR_2->max_gain_adjustment || VAR_2->peak_extend)
            VAR_2->hdcd_detected = VAR_0;
        else
            VAR_2->hdcd_detected = VAR_1;
    }
}
