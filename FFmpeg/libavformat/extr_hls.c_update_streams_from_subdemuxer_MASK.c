
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct playlist {int n_main_streams; int main_streams; int index; TYPE_1__* ctx; } ;
struct TYPE_9__ {int id; } ;
struct TYPE_8__ {int nb_streams; TYPE_2__** streams; } ;
typedef TYPE_2__ AVStream ;
typedef int AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct playlist*,TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int*,TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,struct playlist*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_1, struct playlist *VAR_2)
{
    int VAR_3;

    while (VAR_2->n_main_streams < VAR_2->ctx->nb_streams) {
        int VAR_4 = VAR_2->n_main_streams;
        AVStream *VAR_5 = FUNC_2(VAR_1, ((void*)0));
        AVStream *VAR_6 = VAR_2->ctx->streams[VAR_4];

        if (!VAR_5)
            return FUNC_0(VAR_0);

        VAR_5->id = VAR_2->index;
        FUNC_3(&VAR_2->main_streams, &VAR_2->n_main_streams, VAR_5);

        FUNC_1(VAR_1, VAR_2, VAR_5);

        VAR_3 = FUNC_4(VAR_5, VAR_2, VAR_6);
        if (VAR_3 < 0)
            return VAR_3;
    }

    return 0;
}
