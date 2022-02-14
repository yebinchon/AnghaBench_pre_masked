
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ peak; } ;
typedef TYPE_1__ vm_allocation_zone_total_t ;
typedef int vm_allocation_site_t ;
typedef size_t uint32_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int ** VAR_3 ;
 int VAR_4 ;
 TYPE_1__** VAR_5 ;

uint32_t
FUNC_2(void)
{
    vm_allocation_site_t * VAR_6;
    uint32_t VAR_7;
    uint32_t VAR_8;

 FUNC_0(&VAR_4);
 for (VAR_7 = VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
    {
  VAR_6 = VAR_3[VAR_8];
  if (!VAR_6) continue;
  VAR_7++;
    }
 FUNC_1(&VAR_4);


    VAR_7 += 8;
    VAR_7 += VAR_0;

    return (VAR_7);
}
