
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* avf; int * bsfs; int * stream_map; scalar_t__ header_written; } ;
typedef TYPE_1__ TeeSlave ;
struct TYPE_8__ {unsigned int nb_streams; int pb; } ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_5(TeeSlave *VAR_0)
{
    AVFormatContext *VAR_1;
    unsigned VAR_2;
    int VAR_3 = 0;

    VAR_1 = VAR_0->avf;
    if (!VAR_1)
        return 0;

    if (VAR_0->header_written)
        VAR_3 = FUNC_2(VAR_1);

    if (VAR_0->bsfs) {
        for (VAR_2 = 0; VAR_2 < VAR_1->nb_streams; ++VAR_2)
            FUNC_0(&VAR_0->bsfs[VAR_2]);
    }
    FUNC_1(&VAR_0->stream_map);
    FUNC_1(&VAR_0->bsfs);

    FUNC_4(VAR_1, &VAR_1->pb);
    FUNC_3(VAR_1);
    VAR_0->avf = ((void*)0);
    return VAR_3;
}
