
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int nb_streams; TYPE_1__** streams; } ;
struct TYPE_10__ {scalar_t__ size; } ;
struct TYPE_11__ {TYPE_2__ page; } ;
struct TYPE_9__ {TYPE_3__* priv_data; } ;
typedef TYPE_3__ OGGStreamContext ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_1 (TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_0)
{
    int VAR_1;


    for (VAR_1 = 0; VAR_1 < VAR_0->nb_streams; VAR_1++) {
        OGGStreamContext *VAR_2 = VAR_0->streams[VAR_1]->priv_data;

        if (VAR_2->page.size > 0)
            FUNC_0(VAR_0, VAR_2);
    }

    FUNC_1(VAR_0, 1);

    return 0;
}
