
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int nb_samples_pch; int nb_ch; int format; } ;
typedef TYPE_1__ TestStruct ;
struct TYPE_16__ {int nb_samples; } ;
typedef TYPE_2__ AVAudioFifo ;


 int FUNC_0 (char*) ;
 TYPE_2__* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,void**,int) ;
 int FUNC_5 (TYPE_2__*,void**,int,int) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,void**) ;
 int FUNC_8 (TYPE_1__ const*,void**,int) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (TYPE_2__*,void***,int ) ;
 int FUNC_11 (TYPE_2__*,TYPE_1__ const*,int ,int ) ;

__attribute__((used)) static void FUNC_12(const TestStruct *VAR_0)
{
    int VAR_1, VAR_2;
    void **VAR_3 = ((void*)0);
    AVAudioFifo *VAR_4 = FUNC_1(VAR_0->format, VAR_0->nb_ch,
                                            VAR_0->nb_samples_pch);
    if (!VAR_4) {
        FUNC_0("ERROR: av_audio_fifo_alloc returned NULL!");
    }
    VAR_1 = FUNC_11(VAR_4, VAR_0, VAR_0->nb_samples_pch, 0);
    if (VAR_1 < 0){
        FUNC_0("ERROR: av_audio_fifo_write failed!");
    }
    FUNC_9("written: %d\n", VAR_1);

    VAR_1 = FUNC_11(VAR_4, VAR_0, VAR_0->nb_samples_pch, 0);
    if (VAR_1 < 0){
        FUNC_0("ERROR: av_audio_fifo_write failed!");
    }
    FUNC_9("written: %d\n", VAR_1);
    FUNC_9("remaining samples in audio_fifo: %d\n\n", FUNC_6(VAR_4));

    VAR_1 = FUNC_10(VAR_4, &VAR_3, VAR_0->nb_samples_pch);
    if (VAR_1 < 0){
        FUNC_0("ERROR: av_audio_fifo_read failed!");
    }
    FUNC_9("read: %d\n", VAR_1);
    FUNC_8(VAR_0, VAR_3, VAR_1);
    FUNC_9("remaining samples in audio_fifo: %d\n\n", FUNC_6(VAR_4));


    VAR_1 = FUNC_4(VAR_4, VAR_3, VAR_4->nb_samples);
    if (VAR_1 < 0){
        FUNC_0("ERROR: av_audio_fifo_peek failed!");
    }
    FUNC_9("peek:\n");
    FUNC_8(VAR_0, VAR_3, VAR_1);
    FUNC_9("\n");


    FUNC_9("peek_at:\n");
    for (VAR_2 = 0; VAR_2 < VAR_4->nb_samples; ++VAR_2){
        VAR_1 = FUNC_5(VAR_4, VAR_3, 1, VAR_2);
        if (VAR_1 < 0){
            FUNC_0("ERROR: av_audio_fifo_peek_at failed!");
        }
        FUNC_9("%d:\n", VAR_2);
        FUNC_8(VAR_0, VAR_3, VAR_1);
    }
    FUNC_9("\n");


    VAR_1 = FUNC_2(VAR_4, VAR_4->nb_samples);
    if (VAR_1 < 0){
        FUNC_0("ERROR: av_audio_fifo_drain failed!");
    }
    if (VAR_4->nb_samples){
        FUNC_0("drain failed to flush all samples in audio_fifo!");
    }


    FUNC_7(VAR_4, VAR_3);
    FUNC_3(VAR_4);
}
