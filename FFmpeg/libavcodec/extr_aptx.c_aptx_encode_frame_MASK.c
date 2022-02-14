
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_15__ {TYPE_1__* priv_data; } ;
struct TYPE_14__ {int nb_samples; int ** data; } ;
struct TYPE_13__ {int duration; int pts; scalar_t__ data; } ;
struct TYPE_12__ {int block_size; int afq; } ;
typedef TYPE_1__ AptXContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int**,scalar_t__) ;
 int FUNC_2 (int *,TYPE_3__ const*) ;
 int FUNC_3 (int *,int,int *,int *) ;
 int FUNC_4 (TYPE_4__*,TYPE_2__*,int,int ) ;

__attribute__((used)) static int FUNC_5(AVCodecContext *VAR_1, AVPacket *VAR_2,
                             const AVFrame *VAR_3, int *VAR_4)
{
    AptXContext *VAR_5 = VAR_1->priv_data;
    int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;

    if ((VAR_11 = FUNC_2(&VAR_5->afq, VAR_3)) < 0)
        return VAR_11;

    VAR_10 = VAR_5->block_size * VAR_3->nb_samples/4;
    if ((VAR_11 = FUNC_4(VAR_1, VAR_2, VAR_10, 0)) < 0)
        return VAR_11;

    for (VAR_6 = 0, VAR_7 = 0; VAR_6 < VAR_10; VAR_6 += VAR_5->block_size, VAR_7 += 4) {
        int32_t VAR_12[VAR_0][4];

        for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
            for (VAR_9 = 0; VAR_9 < 4; VAR_9++)
                VAR_12[VAR_8][VAR_9] = (int32_t)FUNC_0(&VAR_3->data[VAR_8][4*(VAR_7+VAR_9)]) >> 8;

        FUNC_1(VAR_5, VAR_12, VAR_2->data + VAR_6);
    }

    FUNC_3(&VAR_5->afq, VAR_3->nb_samples, &VAR_2->pts, &VAR_2->duration);
    *VAR_4 = 1;
    return 0;
}
