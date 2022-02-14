
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double max_gain_adjustment; int cdt_expirations; scalar_t__ _active_count; scalar_t__ uses_transient_filter; int peak_extend; scalar_t__ errors; scalar_t__ total_packets; int packet_type; int hdcd_detected; } ;
typedef TYPE_1__ hdcd_detection_data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(hdcd_detection_data *VAR_3) {
    VAR_3->hdcd_detected = VAR_0;
    VAR_3->packet_type = VAR_2;
    VAR_3->total_packets = 0;
    VAR_3->errors = 0;
    VAR_3->peak_extend = VAR_1;
    VAR_3->uses_transient_filter = 0;
    VAR_3->max_gain_adjustment = 0.0;
    VAR_3->cdt_expirations = -1;
    VAR_3->_active_count = 0;
}
