
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct playlist {int n_segments; int target_duration; TYPE_1__** segments; } ;
typedef int int64_t ;
struct TYPE_2__ {int duration; } ;



__attribute__((used)) static int64_t FUNC_0(struct playlist *VAR_0)
{
    return VAR_0->n_segments > 0 ?
                          VAR_0->segments[VAR_0->n_segments - 1]->duration :
                          VAR_0->target_duration;
}
