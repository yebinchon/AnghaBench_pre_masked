
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int nb_items; TYPE_2__* item; } ;
struct TYPE_7__ {int nb_stream_info; TYPE_1__* stream_info; } ;
struct TYPE_6__ {int id; } ;
typedef TYPE_1__ MOVFragmentStreamInfo ;
typedef TYPE_2__ MOVFragmentIndexItem ;
typedef TYPE_3__ MOVFragmentIndex ;



__attribute__((used)) static MOVFragmentStreamInfo * FUNC_0(
    MOVFragmentIndex *VAR_0,
    int VAR_1,
    int VAR_2)
{
    int VAR_3;
    MOVFragmentIndexItem * VAR_4;

    if (VAR_1 < 0 || VAR_1 >= VAR_0->nb_items)
        return ((void*)0);
    VAR_4 = &VAR_0->item[VAR_1];
    for (VAR_3 = 0; VAR_3 < VAR_4->nb_stream_info; VAR_3++)
        if (VAR_4->stream_info[VAR_3].id == VAR_2)
            return &VAR_4->stream_info[VAR_3];


    return ((void*)0);
}
