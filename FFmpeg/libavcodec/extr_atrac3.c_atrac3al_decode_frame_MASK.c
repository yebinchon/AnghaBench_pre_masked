
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ extended_data; int nb_samples; } ;
struct TYPE_5__ {int size; int data; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFrame ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int,float**) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *,TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_2, void *VAR_3,
                                 int *VAR_4, AVPacket *VAR_5)
{
    AVFrame *VAR_6 = VAR_3;
    int VAR_7;

    VAR_6->nb_samples = VAR_1;
    if ((VAR_7 = FUNC_2(VAR_2, VAR_6, 0)) < 0)
        return VAR_7;

    VAR_7 = FUNC_0(VAR_2, VAR_5->data, VAR_5->size,
                          (float **)VAR_6->extended_data);
    if (VAR_7) {
        FUNC_1(VAR_2, VAR_0, "Frame decoding error!\n");
        return VAR_7;
    }

    *VAR_4 = 1;

    return VAR_5->size;
}
