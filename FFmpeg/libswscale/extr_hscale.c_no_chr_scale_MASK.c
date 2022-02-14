
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* dst; } ;
struct TYPE_6__ {TYPE_1__* plane; } ;
struct TYPE_5__ {scalar_t__ available_lines; scalar_t__ sliceH; scalar_t__ sliceY; } ;
typedef TYPE_3__ SwsFilterDescriptor ;
typedef int SwsContext ;



__attribute__((used)) static int FUNC_0(SwsContext *VAR_0, SwsFilterDescriptor *VAR_1, int VAR_2, int VAR_3)
{
    VAR_1->dst->plane[1].sliceY = VAR_2 + VAR_3 - VAR_1->dst->plane[1].available_lines;
    VAR_1->dst->plane[1].sliceH = VAR_1->dst->plane[1].available_lines;
    VAR_1->dst->plane[2].sliceY = VAR_2 + VAR_3 - VAR_1->dst->plane[2].available_lines;
    VAR_1->dst->plane[2].sliceH = VAR_1->dst->plane[2].available_lines;
    return 0;
}
