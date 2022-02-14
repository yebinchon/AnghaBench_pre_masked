
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ start; } ;
typedef TYPE_1__ soc_reserved_region_t ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
    const soc_reserved_region_t *VAR_2 = (soc_reserved_region_t *)VAR_0;
    const soc_reserved_region_t *VAR_3 = (soc_reserved_region_t *)VAR_1;
    return (int)VAR_2->start - (int)VAR_3->start;
}
