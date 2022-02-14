
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef size_t mcpwm_unit_t ;
typedef scalar_t__ mcpwm_capture_signal_t ;
struct TYPE_3__ {scalar_t__ cap2_edge; scalar_t__ cap1_edge; scalar_t__ cap0_edge; } ;
struct TYPE_4__ {TYPE_1__ cap_status; } ;


 int VAR_0 ;
 TYPE_2__** VAR_1 ;
 int FUNC_0 (int,int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;

uint32_t FUNC_1(mcpwm_unit_t VAR_6, mcpwm_capture_signal_t VAR_7)
{
    FUNC_0(VAR_6 < VAR_4, VAR_5, VAR_0);
    if (VAR_7 == VAR_2) {
        return ( VAR_1[VAR_6]->cap_status.cap0_edge + 1);
    } else if (VAR_7 == VAR_3) {
        return (VAR_1[VAR_6]->cap_status.cap1_edge + 1);
    } else {
        return (VAR_1[VAR_6]->cap_status.cap2_edge + 1);
    }
    return 0;
}
