
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* opaque; } ;
struct TYPE_4__ {int hw_frames_ctx; } ;
typedef TYPE_1__ InputStream ;
typedef int AVFrame ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (int ,int *,int ) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_0, AVFrame *VAR_1, int VAR_2)
{
    InputStream *VAR_3 = VAR_0->opaque;

    return FUNC_0(VAR_3->hw_frames_ctx, VAR_1, 0);
}
