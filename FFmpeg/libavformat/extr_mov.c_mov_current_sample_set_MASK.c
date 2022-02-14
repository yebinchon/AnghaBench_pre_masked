
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_5__ {int current_sample; int current_index; TYPE_1__* current_index_range; TYPE_1__* index_ranges; } ;
struct TYPE_4__ {int end; int start; } ;
typedef TYPE_2__ MOVStreamContext ;



__attribute__((used)) static void FUNC_0(MOVStreamContext *VAR_0, int VAR_1)
{
    int64_t VAR_2;

    VAR_0->current_sample = VAR_1;
    VAR_0->current_index = VAR_1;
    if (!VAR_0->index_ranges) {
        return;
    }

    for (VAR_0->current_index_range = VAR_0->index_ranges;
        VAR_0->current_index_range->end;
        VAR_0->current_index_range++) {
        VAR_2 = VAR_0->current_index_range->end - VAR_0->current_index_range->start;
        if (VAR_2 > VAR_1) {
            VAR_0->current_index = VAR_0->current_index_range->start + VAR_1;
            break;
        }
        VAR_1 -= VAR_2;
    }
}
