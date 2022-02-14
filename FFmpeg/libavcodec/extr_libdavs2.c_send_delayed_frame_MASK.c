
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* priv_data; } ;
struct TYPE_6__ {int out_frame; int decoder; int headerset; } ;
typedef TYPE_1__ DAVS2Context ;
typedef int AVFrame ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int ,char*) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_2__*,int *,int*,int *,int,int *) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_5, AVFrame *VAR_6, int *VAR_7)
{
    DAVS2Context *VAR_8 = VAR_5->priv_data;
    int VAR_9 = VAR_2;

    VAR_9 = FUNC_1(VAR_8->decoder, &VAR_8->headerset, &VAR_8->out_frame);
    if (VAR_9 == VAR_3) {
        FUNC_0(VAR_5, VAR_1, "Decoder error: can't flush delayed frame\n");
        return VAR_0;
    }
    if (VAR_9 == VAR_4) {
        VAR_9 = FUNC_3(VAR_5, &VAR_8->out_frame, VAR_7, &VAR_8->headerset, VAR_9, VAR_6);
        FUNC_2(VAR_8->decoder, &VAR_8->out_frame);
    }
    return VAR_9;
}
