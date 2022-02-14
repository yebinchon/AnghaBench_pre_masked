
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ code_counterA; scalar_t__ code_counterB; scalar_t__ count_peak_extend; scalar_t__ count_sustain_expired; scalar_t__ sustain; scalar_t__ code_counterC_unmatched; scalar_t__ code_counterB_checkfails; scalar_t__ code_counterA_almost; int max_gain; int count_transient_filter; } ;
typedef TYPE_1__ hdcd_state ;
typedef int hdcd_pe ;
struct TYPE_6__ {int uses_transient_filter; int cdt_expirations; int _active_count; int errors; int max_gain_adjustment; int peak_extend; int packet_type; int total_packets; } ;
typedef TYPE_2__ hdcd_detection_data ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_2(hdcd_state *VAR_5, hdcd_detection_data *VAR_6) {
    hdcd_pe VAR_7 = VAR_1;
    VAR_6->uses_transient_filter |= !!(VAR_5->count_transient_filter);
    VAR_6->total_packets += VAR_5->code_counterA + VAR_5->code_counterB;
    if (VAR_5->code_counterA) VAR_6->packet_type |= VAR_3;
    if (VAR_5->code_counterB) VAR_6->packet_type |= VAR_4;
    if (VAR_5->count_peak_extend) {

        if (VAR_5->count_peak_extend == VAR_5->code_counterA + VAR_5->code_counterB)
            VAR_7 = VAR_2;
        else
            VAR_7 = VAR_0;
        if (VAR_6->peak_extend != VAR_0)
            VAR_6->peak_extend = VAR_7;
    }
    VAR_6->max_gain_adjustment = FUNC_0(VAR_6->max_gain_adjustment, FUNC_1(VAR_5->max_gain));
    VAR_6->errors += VAR_5->code_counterA_almost
        + VAR_5->code_counterB_checkfails
        + VAR_5->code_counterC_unmatched;
    if (VAR_5->sustain) VAR_6->_active_count++;
    if (VAR_5->count_sustain_expired >= 0) {
        if (VAR_6->cdt_expirations == -1) VAR_6->cdt_expirations = 0;
        VAR_6->cdt_expirations += VAR_5->count_sustain_expired;
    }
}
