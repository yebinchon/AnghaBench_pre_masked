
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int nb_programs; TYPE_1__** programs; } ;
struct TYPE_9__ {int id; int pmt_version; void* end_time; void* start_time; int pts_wrap_behavior; void* pts_wrap_reference; int discard; } ;
typedef TYPE_1__ AVProgram ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ,char*,int) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__***,int*,TYPE_1__*) ;

AVProgram *FUNC_3(AVFormatContext *VAR_4, int VAR_5)
{
    AVProgram *VAR_6 = ((void*)0);
    int VAR_7;

    FUNC_0(VAR_4, VAR_1, "new_program: id=0x%04x\n", VAR_5);

    for (VAR_7 = 0; VAR_7 < VAR_4->nb_programs; VAR_7++)
        if (VAR_4->programs[VAR_7]->id == VAR_5)
            VAR_6 = VAR_4->programs[VAR_7];

    if (!VAR_6) {
        VAR_6 = FUNC_1(sizeof(AVProgram));
        if (!VAR_6)
            return ((void*)0);
        FUNC_2(&VAR_4->programs, &VAR_4->nb_programs, VAR_6);
        VAR_6->discard = VAR_0;
        VAR_6->pmt_version = -1;
    }
    VAR_6->id = VAR_5;
    VAR_6->pts_wrap_reference = VAR_2;
    VAR_6->pts_wrap_behavior = VAR_3;

    VAR_6->start_time =
    VAR_6->end_time = VAR_2;

    return VAR_6;
}
