
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_placement {scalar_t__ fpfn; scalar_t__ lpfn; } ;
struct TYPE_2__ {scalar_t__ num_pages; } ;
struct ttm_buffer_object {TYPE_1__ mem; } ;


 int FUNC_0 (int) ;

int FUNC_1(struct ttm_buffer_object *VAR_0,
    struct ttm_placement *VAR_1)
{
 FUNC_0((VAR_1->fpfn || VAR_1->lpfn) &&
        (VAR_0->mem.num_pages > (VAR_1->lpfn - VAR_1->fpfn)));

 return 0;
}
