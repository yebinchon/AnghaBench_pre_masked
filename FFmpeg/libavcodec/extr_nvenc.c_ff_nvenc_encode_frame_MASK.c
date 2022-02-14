
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* priv_data; } ;
struct TYPE_6__ {int encoder_flushing; } ;
typedef TYPE_1__ NvencContext ;
typedef int AVPacket ;
typedef int AVFrame ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_2__*,int const*) ;

int FUNC_3(AVCodecContext *VAR_2, AVPacket *VAR_3,
                          const AVFrame *VAR_4, int *VAR_5)
{
    NvencContext *VAR_6 = VAR_2->priv_data;
    int VAR_7;

    if (!VAR_6->encoder_flushing) {
        VAR_7 = FUNC_2(VAR_2, VAR_4);
        if (VAR_7 < 0)
            return VAR_7;
    }

    VAR_7 = FUNC_1(VAR_2, VAR_3);
    if (VAR_7 == FUNC_0(VAR_1) || VAR_7 == VAR_0) {
        *VAR_5 = 0;
    } else if (VAR_7 < 0) {
        return VAR_7;
    } else {
        *VAR_5 = 1;
    }

    return 0;
}
