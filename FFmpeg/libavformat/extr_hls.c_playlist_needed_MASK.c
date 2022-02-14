
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct playlist {int n_main_streams; TYPE_1__** main_streams; int ctx; TYPE_3__* parent; } ;
struct TYPE_6__ {int nb_programs; TYPE_2__** programs; } ;
struct TYPE_5__ {scalar_t__ discard; int nb_stream_indexes; int* stream_index; } ;
struct TYPE_4__ {scalar_t__ discard; int index; } ;
typedef TYPE_2__ AVProgram ;
typedef TYPE_3__ AVFormatContext ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct playlist *VAR_1)
{
    AVFormatContext *VAR_2 = VAR_1->parent;
    int VAR_3, VAR_4;
    int VAR_5 = 0;
    int VAR_6;


    if (!VAR_1->ctx || !VAR_1->n_main_streams)
        return 1;


    for (VAR_3 = 0; VAR_3 < VAR_1->n_main_streams; VAR_3++) {
        if (VAR_1->main_streams[VAR_3]->discard < VAR_0) {
            VAR_5 = 1;
            break;
        }
    }



    if (!VAR_5)
        return 0;





    VAR_6 = VAR_1->main_streams[0]->index;

    for (VAR_3 = 0; VAR_3 < VAR_2->nb_programs; VAR_3++) {
        AVProgram *VAR_7 = VAR_2->programs[VAR_3];
        if (VAR_7->discard < VAR_0) {
            for (VAR_4 = 0; VAR_4 < VAR_7->nb_stream_indexes; VAR_4++) {
                if (VAR_7->stream_index[VAR_4] == VAR_6) {

                    return 1;
                }
            }
        }
    }


    return 0;
}
