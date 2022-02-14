
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* priv_data; } ;
struct TYPE_6__ {int queue_end; scalar_t__ queue; } ;
typedef TYPE_1__ FlacMuxerContext ;
typedef int AVPacket ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__*,int *,int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_0)
{
    FlacMuxerContext *VAR_1 = VAR_0->priv_data;
    AVPacket VAR_2;
    int VAR_3, VAR_4 = 1;

    VAR_3 = FUNC_2(VAR_0);
    if (VAR_3 < 0)
        VAR_4 = 0;

    while (VAR_1->queue) {
        FUNC_1(&VAR_1->queue, &VAR_1->queue_end, &VAR_2);
        if (VAR_4 && (VAR_3 = FUNC_3(VAR_0, &VAR_2)) < 0)
            VAR_4 = 0;
        FUNC_0(&VAR_2);
    }
    return VAR_3;
}
