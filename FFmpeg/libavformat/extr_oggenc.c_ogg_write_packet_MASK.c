
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int nb_streams; TYPE_1__** streams; } ;
struct TYPE_11__ {scalar_t__ segments_count; } ;
struct TYPE_12__ {TYPE_2__ page; } ;
struct TYPE_10__ {TYPE_3__* priv_data; } ;
typedef TYPE_3__ OGGStreamContext ;
typedef int AVPacket ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_1 (TYPE_4__*,int *) ;
 int FUNC_2 (TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_0, AVPacket *VAR_1)
{
    int VAR_2;

    if (VAR_1)
        return FUNC_1(VAR_0, VAR_1);

    for (VAR_2 = 0; VAR_2 < VAR_0->nb_streams; VAR_2++) {
        OGGStreamContext *VAR_3 = VAR_0->streams[VAR_2]->priv_data;
        if (VAR_3->page.segments_count)
            FUNC_0(VAR_0, VAR_3);
    }

    FUNC_2(VAR_0, 2);
    return 1;
}
