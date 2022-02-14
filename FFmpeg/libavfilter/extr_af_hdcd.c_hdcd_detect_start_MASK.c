
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cdt_expirations; scalar_t__ _active_count; scalar_t__ total_packets; scalar_t__ errors; } ;
typedef TYPE_1__ hdcd_detection_data ;



__attribute__((used)) static void FUNC_0(hdcd_detection_data *VAR_0) {
    VAR_0->errors = 0;
    VAR_0->total_packets = 0;
    VAR_0->_active_count = 0;
    VAR_0->cdt_expirations = -1;
}
