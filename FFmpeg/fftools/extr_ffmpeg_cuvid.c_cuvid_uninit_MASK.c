
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* opaque; } ;
struct TYPE_4__ {int hw_frames_ctx; } ;
typedef TYPE_1__ InputStream ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(AVCodecContext *VAR_0)
{
    InputStream *VAR_1 = VAR_0->opaque;
    FUNC_0(&VAR_1->hw_frames_ctx);
}
