
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t current; size_t nb_items; TYPE_1__* item; } ;
struct TYPE_4__ {size_t current; size_t nb_stream_info; int * stream_info; } ;
typedef int MOVFragmentStreamInfo ;
typedef TYPE_1__ MOVFragmentIndexItem ;
typedef TYPE_2__ MOVFragmentIndex ;



__attribute__((used)) static MOVFragmentStreamInfo * FUNC_0(
    MOVFragmentIndex *VAR_0)
{
    MOVFragmentIndexItem *VAR_1;
    if (VAR_0->current < 0 ||
        VAR_0->current >= VAR_0->nb_items)
        return ((void*)0);

    VAR_1 = &VAR_0->item[VAR_0->current];
    if (VAR_1->current >= 0 && VAR_1->current < VAR_1->nb_stream_info)
        return &VAR_1->stream_info[VAR_1->current];


    return ((void*)0);
}
