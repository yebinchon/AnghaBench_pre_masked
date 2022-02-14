
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int channels; int sample_fmt; } ;
typedef TYPE_1__ AVCodecContext ;
typedef int AVAudioFifo ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(AVAudioFifo **VAR_2, AVCodecContext *VAR_3)
{

    if (!(*VAR_2 = FUNC_1(VAR_3->sample_fmt,
                                      VAR_3->channels, 1))) {
        FUNC_2(VAR_1, "Could not allocate FIFO\n");
        return FUNC_0(VAR_0);
    }
    return 0;
}
