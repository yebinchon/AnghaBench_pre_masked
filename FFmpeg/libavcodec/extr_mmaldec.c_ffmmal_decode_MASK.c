
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ extradata_size; int extradata; TYPE_1__* priv_data; } ;
struct TYPE_13__ {scalar_t__ size; int data; int member_0; } ;
struct TYPE_12__ {int extradata_sent; } ;
typedef TYPE_1__ MMALDecodeContext ;
typedef TYPE_2__ AVPacket ;
typedef int AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int *,int*) ;

__attribute__((used)) static int FUNC_5(AVCodecContext *VAR_0, void *VAR_1, int *VAR_2,
                         AVPacket *VAR_3)
{
    MMALDecodeContext *VAR_4 = VAR_0->priv_data;
    AVFrame *VAR_5 = VAR_1;
    int VAR_6 = 0;

    if (VAR_0->extradata_size && !VAR_4->extradata_sent) {
        AVPacket VAR_7 = {0};
        FUNC_0(&VAR_7);
        VAR_7.data = VAR_0->extradata;
        VAR_7.size = VAR_0->extradata_size;
        VAR_4->extradata_sent = 1;
        if ((VAR_6 = FUNC_1(VAR_0, &VAR_7, 1)) < 0)
            return VAR_6;
    }

    if ((VAR_6 = FUNC_1(VAR_0, VAR_3, 0)) < 0)
        return VAR_6;

    if ((VAR_6 = FUNC_2(VAR_0)) < 0)
        return VAR_6;

    if ((VAR_6 = FUNC_3(VAR_0)) < 0)
        return VAR_6;

    if ((VAR_6 = FUNC_4(VAR_0, VAR_5, VAR_2)) < 0)
        return VAR_6;




    if ((VAR_6 = FUNC_3(VAR_0)) < 0)
        return VAR_6;

    if ((VAR_6 = FUNC_2(VAR_0)) < 0)
        return VAR_6;

    return VAR_6;
}
