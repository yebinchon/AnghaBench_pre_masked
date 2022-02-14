
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int nb_streams; TYPE_1__** streams; } ;
struct TYPE_7__ {int fifo; } ;
struct TYPE_6__ {TYPE_2__* priv_data; } ;
typedef TYPE_2__ StreamInfo ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_0)
{
    StreamInfo *VAR_1;
    int VAR_2;

    for (;;) {
        int VAR_3 = FUNC_2(VAR_0, 1);
        if (VAR_3 < 0)
            return VAR_3;
        else if (VAR_3 == 0)
            break;
    }







    for (VAR_2 = 0; VAR_2 < VAR_0->nb_streams; VAR_2++) {
        VAR_1 = VAR_0->streams[VAR_2]->priv_data;

        FUNC_0(FUNC_1(VAR_1->fifo) == 0);
    }
    return 0;
}
