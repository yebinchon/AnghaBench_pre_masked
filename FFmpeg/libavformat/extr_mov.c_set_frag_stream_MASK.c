
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {size_t current; size_t nb_items; TYPE_2__* item; } ;
struct TYPE_6__ {int nb_stream_info; int current; TYPE_1__* stream_info; } ;
struct TYPE_5__ {int id; } ;
typedef TYPE_2__ MOVFragmentIndexItem ;
typedef TYPE_3__ MOVFragmentIndex ;



__attribute__((used)) static void FUNC_0(MOVFragmentIndex *VAR_0, int VAR_1)
{
    int VAR_2;
    MOVFragmentIndexItem * VAR_3;

    if (VAR_0->current < 0 ||
        VAR_0->current >= VAR_0->nb_items)
        return;

    VAR_3 = &VAR_0->item[VAR_0->current];
    for (VAR_2 = 0; VAR_2 < VAR_3->nb_stream_info; VAR_2++)
        if (VAR_3->stream_info[VAR_2].id == VAR_1) {
            VAR_3->current = VAR_2;
            return;
        }


    VAR_3->current = -1;
}
