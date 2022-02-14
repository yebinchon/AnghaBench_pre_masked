
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {unsigned int id; scalar_t__ nb_stream_indexes; } ;
struct TYPE_6__ {TYPE_1__* stream; } ;
struct TYPE_5__ {int nb_programs; TYPE_3__** programs; } ;
typedef TYPE_2__ MpegTSContext ;
typedef TYPE_3__ AVProgram ;



__attribute__((used)) static void FUNC_0(MpegTSContext *VAR_0, unsigned int VAR_1)
{
    AVProgram *VAR_2 = ((void*)0);
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_0->stream->nb_programs; VAR_3++)
        if (VAR_0->stream->programs[VAR_3]->id == VAR_1) {
            VAR_2 = VAR_0->stream->programs[VAR_3];
            break;
        }
    if (!VAR_2)
        return;
    VAR_2->nb_stream_indexes = 0;
}
