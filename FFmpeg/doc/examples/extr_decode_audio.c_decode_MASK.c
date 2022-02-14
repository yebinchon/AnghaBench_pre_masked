
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int channels; int sample_fmt; } ;
struct TYPE_8__ {int nb_samples; scalar_t__* data; } ;
typedef int FILE ;
typedef int AVPacket ;
typedef TYPE_1__ AVFrame ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (scalar_t__,int,int,int *) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_7(AVCodecContext *VAR_3, AVPacket *VAR_4, AVFrame *VAR_5,
                   FILE *VAR_6)
{
    int VAR_7, VAR_8;
    int VAR_9, VAR_10;


    VAR_9 = FUNC_3(VAR_3, VAR_4);
    if (VAR_9 < 0) {
        FUNC_5(VAR_2, "Error submitting the packet to the decoder\n");
        FUNC_4(1);
    }


    while (VAR_9 >= 0) {
        VAR_9 = FUNC_2(VAR_3, VAR_5);
        if (VAR_9 == FUNC_0(VAR_1) || VAR_9 == VAR_0)
            return;
        else if (VAR_9 < 0) {
            FUNC_5(VAR_2, "Error during decoding\n");
            FUNC_4(1);
        }
        VAR_10 = FUNC_1(VAR_3->sample_fmt);
        if (VAR_10 < 0) {

            FUNC_5(VAR_2, "Failed to calculate data size\n");
            FUNC_4(1);
        }
        for (VAR_7 = 0; VAR_7 < VAR_5->nb_samples; VAR_7++)
            for (VAR_8 = 0; VAR_8 < VAR_3->channels; VAR_8++)
                FUNC_6(VAR_5->data[VAR_8] + VAR_10*VAR_7, 1, VAR_10, VAR_6);
    }
}
