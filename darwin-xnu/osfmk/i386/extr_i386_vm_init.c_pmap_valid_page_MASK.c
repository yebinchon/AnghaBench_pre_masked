
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ppnum_t ;
struct TYPE_3__ {scalar_t__ base; scalar_t__ end; } ;
typedef TYPE_1__ pmap_memory_region_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 TYPE_1__* VAR_3 ;

boolean_t
FUNC_0(
 ppnum_t VAR_4)
{
        unsigned int VAR_5;
 pmap_memory_region_t *VAR_6 = VAR_3;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++, VAR_6++) {
         if ( (VAR_4 >= VAR_6->base) && (VAR_4 <= VAR_6->end) )
                 return VAR_1;
 }
 return VAR_0;
}
