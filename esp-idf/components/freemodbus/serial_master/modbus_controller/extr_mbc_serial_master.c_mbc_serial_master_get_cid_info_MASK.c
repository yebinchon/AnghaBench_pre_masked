
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_5__ {int * param_key; } ;
typedef TYPE_1__ mb_parameter_descriptor_t ;
struct TYPE_6__ {size_t mbm_param_descriptor_size; TYPE_1__* mbm_param_descriptor_table; } ;
typedef TYPE_2__ mb_master_options_t ;
typedef int esp_err_t ;
struct TYPE_7__ {TYPE_2__ opts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,char*) ;
 TYPE_3__* VAR_4 ;

__attribute__((used)) static esp_err_t FUNC_1(uint16_t VAR_5, const mb_parameter_descriptor_t** VAR_6)
{
    FUNC_0((VAR_4 != ((void*)0)),
                    VAR_1,
                    "Master interface uninitialized.");
    mb_master_options_t* VAR_7 = &VAR_4->opts;

    FUNC_0((VAR_6 != ((void*)0)),
                        VAR_0, "mb incorrect data buffer pointer.");
    FUNC_0((VAR_7->mbm_param_descriptor_table != ((void*)0)),
                        VAR_0, "mb incorrect descriptor table or not set.");
    FUNC_0((VAR_5 < VAR_7->mbm_param_descriptor_size),
                        VAR_2, "mb incorrect cid of characteristic.");


    const mb_parameter_descriptor_t* VAR_8 = &VAR_7->mbm_param_descriptor_table[VAR_5];

    FUNC_0((VAR_8->param_key != ((void*)0)),
                        VAR_0, "mb incorrect characteristic key.");
    *VAR_6 = VAR_8;
    return VAR_3;
}
