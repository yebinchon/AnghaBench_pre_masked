
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* priv_data; } ;
struct TYPE_5__ {int out_frame; int decoder; int headerset; } ;
typedef TYPE_1__ DAVS2Context ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,char*) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(AVCodecContext *VAR_3)
{
    DAVS2Context *VAR_4 = VAR_3->priv_data;
    int VAR_5 = VAR_2;

    while (VAR_5 == VAR_2) {
        VAR_5 = FUNC_1(VAR_4->decoder, &VAR_4->headerset, &VAR_4->out_frame);
        FUNC_2(VAR_4->decoder, &VAR_4->out_frame);
    }

    if (VAR_5 == VAR_1) {
        FUNC_0(VAR_3, VAR_0, "Decoder flushing failed.\n");
    }
}
