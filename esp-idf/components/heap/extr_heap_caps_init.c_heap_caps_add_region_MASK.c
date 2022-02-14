
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {intptr_t start; intptr_t size; size_t type; } ;
typedef TYPE_1__ soc_memory_region_t ;
typedef int esp_err_t ;
struct TYPE_5__ {int * caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*,intptr_t,intptr_t) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 TYPE_2__* VAR_4 ;

esp_err_t FUNC_1(intptr_t VAR_5, intptr_t VAR_6)
{
    if (VAR_5 == 0) {
        return VAR_0;
    }

    for (int VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
        const soc_memory_region_t *VAR_8 = &VAR_3[VAR_7];

        if (VAR_8->start <= VAR_5 && (VAR_8->start + VAR_8->size) > VAR_5) {
            const uint32_t *VAR_9 = VAR_4[VAR_8->type].caps;
            return FUNC_0(VAR_9, VAR_5, VAR_6);
        }
    }

    return VAR_1;
}
