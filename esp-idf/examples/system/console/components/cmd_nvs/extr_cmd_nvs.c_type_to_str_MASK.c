
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; char const* str; } ;
typedef TYPE_1__ type_str_pair_t ;
typedef scalar_t__ nvs_type_t ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static const char *FUNC_0(nvs_type_t VAR_2)
{
    for (int VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
        const type_str_pair_t *VAR_4 = &VAR_1[VAR_3];
        if (VAR_4->type == VAR_2) {
            return VAR_4->str;
        }
    }

    return "Unknown";
}
