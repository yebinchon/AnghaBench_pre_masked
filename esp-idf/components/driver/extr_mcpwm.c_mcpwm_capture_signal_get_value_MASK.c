
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t mcpwm_unit_t ;
typedef size_t mcpwm_capture_signal_t ;
struct TYPE_2__ {int * cap_val_ch; } ;


 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 int FUNC_0 (int,int ,int ) ;
 size_t VAR_2 ;
 int VAR_3 ;

uint32_t FUNC_1(mcpwm_unit_t VAR_4, mcpwm_capture_signal_t VAR_5)
{
    FUNC_0(VAR_4 < VAR_2, VAR_3, VAR_0);
    return VAR_1[VAR_4]->cap_val_ch[VAR_5];
}
