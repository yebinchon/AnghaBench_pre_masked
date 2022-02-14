
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int cid; scalar_t__ mb_size; int * param_key; } ;
typedef TYPE_1__ mb_parameter_descriptor_t ;
struct TYPE_6__ {int mbm_param_descriptor_size; TYPE_1__ const* mbm_param_descriptor_table; } ;
typedef TYPE_2__ mb_master_options_t ;
typedef int esp_err_t ;
struct TYPE_7__ {TYPE_2__ opts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,char*) ;
 TYPE_3__* VAR_2 ;

__attribute__((used)) static esp_err_t FUNC_1(const mb_parameter_descriptor_t* VAR_3, const uint16_t VAR_4)
{
    FUNC_0((VAR_3 != ((void*)0)),
                        VAR_0, "mb incorrect descriptor.");
    FUNC_0((VAR_4 >= 1),
                        VAR_0, "mb table size is incorrect.");
    mb_master_options_t* VAR_5 = &VAR_2->opts;
    const mb_parameter_descriptor_t *VAR_6 = VAR_3;

    for (uint16_t VAR_7 = 0; VAR_7 < (VAR_4); VAR_7++, VAR_6++)
    {

        FUNC_0((VAR_6->cid == VAR_7),
                            VAR_0, "mb descriptor cid field is incorrect.");
        FUNC_0((VAR_6->param_key != ((void*)0)),
                            VAR_0, "mb descriptor param key is incorrect.");
        FUNC_0((VAR_6->mb_size > 0),
                            VAR_0, "mb descriptor param size is incorrect.");
    }
    VAR_5->mbm_param_descriptor_table = VAR_3;
    VAR_5->mbm_param_descriptor_size = VAR_4;
    return VAR_1;
}
