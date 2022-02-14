
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct MuxChain {TYPE_3__* rtp_ctx; TYPE_3__* mpegts_ctx; } ;
struct TYPE_6__ {int pb; } ;
struct TYPE_5__ {struct MuxChain* priv_data; } ;
typedef TYPE_1__ AVFormatContext ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_0)
{
    struct MuxChain *VAR_1 = VAR_0->priv_data;

    if (VAR_1->mpegts_ctx) {
        FUNC_0(VAR_1->mpegts_ctx);
        FUNC_2(&VAR_1->mpegts_ctx->pb);
        FUNC_1(VAR_1->mpegts_ctx);
    }
    if (VAR_1->rtp_ctx) {
        FUNC_0(VAR_1->rtp_ctx);
        FUNC_1(VAR_1->rtp_ctx);
    }
    return 0;
}
