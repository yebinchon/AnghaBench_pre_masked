
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* priv_data; } ;
struct TYPE_5__ {int qsv; } ;
typedef TYPE_1__ QSVMJPEGEncContext ;
typedef int AVPacket ;
typedef int AVFrame ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (TYPE_2__*,int *,int *,int const*,int*) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_0, AVPacket *VAR_1,
                         const AVFrame *VAR_2, int *VAR_3)
{
    QSVMJPEGEncContext *VAR_4 = VAR_0->priv_data;

    return FUNC_0(VAR_0, &VAR_4->qsv, VAR_1, VAR_2, VAR_3);
}
