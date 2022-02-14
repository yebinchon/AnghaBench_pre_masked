
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int codec_id; } ;
struct TYPE_10__ {int refcounted_frames; int thread_count; } ;
struct TYPE_9__ {TYPE_4__* codec_ctx; TYPE_1__* st; } ;
struct TYPE_8__ {TYPE_5__* codecpar; } ;
typedef TYPE_2__ MovieStream ;
typedef int AVFilterContext ;
typedef int AVCodec ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,char*) ;
 TYPE_4__* FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*,int *,int *) ;
 int FUNC_5 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(AVFilterContext *VAR_3, MovieStream *VAR_4)
{
    AVCodec *VAR_5;
    int VAR_6;

    VAR_5 = FUNC_3(VAR_4->st->codecpar->codec_id);
    if (!VAR_5) {
        FUNC_1(VAR_3, VAR_0, "Failed to find any codec\n");
        return FUNC_0(VAR_1);
    }

    VAR_4->codec_ctx = FUNC_2(VAR_5);
    if (!VAR_4->codec_ctx)
        return FUNC_0(VAR_2);

    VAR_6 = FUNC_5(VAR_4->codec_ctx, VAR_4->st->codecpar);
    if (VAR_6 < 0)
        return VAR_6;

    VAR_4->codec_ctx->refcounted_frames = 1;
    VAR_4->codec_ctx->thread_count = FUNC_6(VAR_3);

    if ((VAR_6 = FUNC_4(VAR_4->codec_ctx, VAR_5, ((void*)0))) < 0) {
        FUNC_1(VAR_3, VAR_0, "Failed to open codec\n");
        return VAR_6;
    }

    return 0;
}
