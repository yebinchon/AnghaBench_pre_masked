
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t nlevels; TYPE_1__* levels; } ;
typedef TYPE_2__ bitmap_info_t ;
struct TYPE_4__ {size_t group_offset; } ;


 size_t VAR_0 ;

size_t
FUNC_0(const bitmap_info_t *VAR_1)
{

 return (VAR_1->levels[VAR_1->nlevels].group_offset << VAR_0);
}
