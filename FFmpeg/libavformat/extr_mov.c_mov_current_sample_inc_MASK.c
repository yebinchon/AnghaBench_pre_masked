
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ current_index; TYPE_1__* current_index_range; scalar_t__ index_ranges; int current_sample; } ;
struct TYPE_4__ {scalar_t__ end; scalar_t__ start; } ;
typedef TYPE_2__ MOVStreamContext ;



__attribute__((used)) static void FUNC_0(MOVStreamContext *VAR_0)
{
    VAR_0->current_sample++;
    VAR_0->current_index++;
    if (VAR_0->index_ranges &&
        VAR_0->current_index >= VAR_0->current_index_range->end &&
        VAR_0->current_index_range->end) {
        VAR_0->current_index_range++;
        VAR_0->current_index = VAR_0->current_index_range->start;
    }
}
