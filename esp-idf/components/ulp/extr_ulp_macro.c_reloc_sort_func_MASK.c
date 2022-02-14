
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ label; scalar_t__ type; } ;
typedef TYPE_1__ reloc_info_t ;



__attribute__((used)) static int FUNC_0(const void* VAR_0, const void* VAR_1)
{
    const reloc_info_t VAR_2 = *(const reloc_info_t*) VAR_0;
    const reloc_info_t VAR_3 = *(const reloc_info_t*) VAR_1;
    if (VAR_2.label < VAR_3.label) {
        return -1;
    } else if (VAR_2.label > VAR_3.label) {
        return 1;
    }

    if (VAR_2.type < VAR_3.type) {
        return -1;
    } else if (VAR_2.type > VAR_3.type) {
        return 1;
    }


    return 0;
}
