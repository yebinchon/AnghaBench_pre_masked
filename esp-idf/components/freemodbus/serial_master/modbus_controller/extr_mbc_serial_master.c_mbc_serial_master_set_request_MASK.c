
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_7__ {int mb_param_type; int mb_size; int mb_reg_start; int mb_slave_addr; scalar_t__ param_key; } ;
typedef TYPE_1__ mb_parameter_descriptor_t ;
struct TYPE_8__ {int command; int reg_size; int reg_start; int slave_addr; } ;
typedef TYPE_2__ mb_param_request_t ;
typedef int mb_param_mode_t ;
struct TYPE_9__ {scalar_t__ mbm_param_descriptor_size; TYPE_1__* mbm_param_descriptor_table; } ;
typedef TYPE_3__ mb_master_options_t ;
typedef int esp_err_t ;
struct TYPE_10__ {TYPE_3__ opts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ,char*) ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 TYPE_4__* VAR_5 ;
 scalar_t__ FUNC_3 (char const*,char const*,size_t) ;
 size_t FUNC_4 (char const*) ;

__attribute__((used)) static esp_err_t FUNC_5(char* VAR_6, mb_param_mode_t VAR_7,
                                                mb_param_request_t* VAR_8,
                                                mb_parameter_descriptor_t* VAR_9)
{
    FUNC_1((VAR_5 != ((void*)0)),
                    VAR_1,
                    "Master interface uninitialized.");
    mb_master_options_t* VAR_10 = &VAR_5->opts;
    esp_err_t VAR_11 = VAR_2;
    FUNC_1((VAR_6 != ((void*)0)),
                        VAR_0, "mb incorrect parameter name.");
    FUNC_1((VAR_8 != ((void*)0)),
                        VAR_0, "mb incorrect request parameter.");
    FUNC_1((VAR_7 <= VAR_4),
                        VAR_0, "mb incorrect mode.");
    FUNC_0(VAR_10->mbm_param_descriptor_table != ((void*)0));
    const mb_parameter_descriptor_t* VAR_12 = VAR_10->mbm_param_descriptor_table;
    for (uint16_t VAR_13 = 0; VAR_13 < (VAR_10->mbm_param_descriptor_size); VAR_13++, VAR_12++)
    {


        size_t VAR_14 = FUNC_4((const char*)VAR_12->param_key);
        if (VAR_14 != FUNC_4((const char*)VAR_6)) {
            continue;
        }

        uint8_t VAR_15 = FUNC_3((const char*)VAR_6, (const char*)VAR_12->param_key, (size_t)VAR_14);
        if (VAR_15 == 0) {

            VAR_8->slave_addr = VAR_12->mb_slave_addr;
            VAR_8->reg_start = VAR_12->mb_reg_start;
            VAR_8->reg_size = VAR_12->mb_size;
            VAR_8->command = FUNC_2(VAR_12->mb_param_type, VAR_7);
            FUNC_1((VAR_8->command > 0),
                                VAR_0,
                                "mb incorrect command or parameter type.");
            if (VAR_9 != ((void*)0)) {
                *VAR_9 = *VAR_12;
            }
            VAR_11 = VAR_3;
            break;
        }
    }
    return VAR_11;
}
