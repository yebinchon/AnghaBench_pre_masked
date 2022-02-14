
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* priv_data; } ;
struct TYPE_5__ {int ctx; int buffered_pkt; } ;
typedef TYPE_1__ MediaCodecH264DecContext ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_2(AVCodecContext *VAR_0)
{
    MediaCodecH264DecContext *VAR_1 = VAR_0->priv_data;

    FUNC_0(&VAR_1->buffered_pkt);

    FUNC_1(VAR_0, VAR_1->ctx);
}
