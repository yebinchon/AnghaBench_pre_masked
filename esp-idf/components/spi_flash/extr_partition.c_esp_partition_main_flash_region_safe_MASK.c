
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t address; size_t size; } ;
typedef TYPE_1__ esp_partition_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__* FUNC_0 () ;

bool FUNC_1(size_t VAR_2, size_t VAR_3)
{
    bool VAR_4 = 1;
    if (VAR_2 <= VAR_1 + VAR_0) {
        return 0;
    }
    const esp_partition_t *VAR_5 = FUNC_0();
    if (VAR_2 >= VAR_5->address && VAR_2 < VAR_5->address + VAR_5->size) {
        return 0;
    }
    if (VAR_2 < VAR_5->address && VAR_2 + VAR_3 > VAR_5->address) {
        return 0;
    }
    return VAR_4;
}
