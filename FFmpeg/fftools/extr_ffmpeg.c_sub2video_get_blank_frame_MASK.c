
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int height; int* linesize; int * data; int format; scalar_t__ width; } ;
struct TYPE_9__ {int h; TYPE_4__* frame; scalar_t__ w; } ;
struct TYPE_10__ {TYPE_2__ sub2video; TYPE_1__* dec_ctx; } ;
struct TYPE_8__ {int height; scalar_t__ width; } ;
typedef TYPE_3__ InputStream ;
typedef TYPE_4__ AVFrame ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(InputStream *VAR_1)
{
    int VAR_2;
    AVFrame *VAR_3 = VAR_1->sub2video.frame;

    FUNC_1(VAR_3);
    VAR_1->sub2video.frame->width = VAR_1->dec_ctx->width ? VAR_1->dec_ctx->width : VAR_1->sub2video.w;
    VAR_1->sub2video.frame->height = VAR_1->dec_ctx->height ? VAR_1->dec_ctx->height : VAR_1->sub2video.h;
    VAR_1->sub2video.frame->format = VAR_0;
    if ((VAR_2 = FUNC_0(VAR_3, 32)) < 0)
        return VAR_2;
    FUNC_2(VAR_3->data[0], 0, VAR_3->height * VAR_3->linesize[0]);
    return 0;
}
