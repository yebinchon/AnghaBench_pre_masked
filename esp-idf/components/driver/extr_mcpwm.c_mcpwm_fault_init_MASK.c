
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ mcpwm_unit_t ;
typedef int mcpwm_fault_signal_t ;
typedef void* mcpwm_fault_input_level_t ;
typedef int esp_err_t ;
struct TYPE_3__ {int f0_en; int f1_en; int f2_en; void* f2_pole; void* f1_pole; void* f0_pole; } ;
struct TYPE_4__ {TYPE_1__ fault_detect; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__** VAR_2 ;
 int FUNC_0 (int,int ,int ) ;



 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

esp_err_t FUNC_3(mcpwm_unit_t VAR_6, mcpwm_fault_input_level_t VAR_7, mcpwm_fault_signal_t VAR_8)
{
    FUNC_0(VAR_6 < VAR_3, VAR_4, VAR_0);
    FUNC_1(&VAR_5);
    switch (VAR_8) {
    case 130:
        VAR_2[VAR_6]->fault_detect.f0_en = 1;
        VAR_2[VAR_6]->fault_detect.f0_pole = VAR_7;
        break;
    case 129:
        VAR_2[VAR_6]->fault_detect.f1_en = 1;
        VAR_2[VAR_6]->fault_detect.f1_pole = VAR_7;
        break;
    case 128:
        VAR_2[VAR_6]->fault_detect.f2_en = 1;
        VAR_2[VAR_6]->fault_detect.f2_pole = VAR_7;

        break;
    default :
        break;
    }
    FUNC_2(&VAR_5);
    return VAR_1;
}
