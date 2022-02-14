
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int entry; scalar_t__ data_offset; TYPE_1__* cluster; } ;
struct TYPE_4__ {scalar_t__ pos; } ;
typedef TYPE_2__ MOVTrack ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(const MOVTrack *VAR_1)
{
    if (VAR_1->entry > 0 && VAR_1->cluster[VAR_1->entry - 1].pos + VAR_1->data_offset > VAR_0)
        return 1;
    return 0;
}
