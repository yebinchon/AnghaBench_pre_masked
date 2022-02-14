
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ snd_pcm_sframes_t ;
typedef int int64_t ;
struct TYPE_12__ {TYPE_1__* priv_data; } ;
struct TYPE_11__ {int size; int pts; int data; } ;
struct TYPE_10__ {int period_size; int frame_size; int last_period; int timefilter; int sample_rate; int h; } ;
typedef TYPE_1__ AlsaData ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_3__*,int ,char*,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (scalar_t__,int,int ) ;
 scalar_t__ FUNC_6 (TYPE_3__*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,scalar_t__*) ;
 int FUNC_10 (int ,int ,int) ;
 int FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(AVFormatContext *VAR_3, AVPacket *VAR_4)
{
    AlsaData *VAR_5 = VAR_3->priv_data;
    int VAR_6;
    int64_t VAR_7;
    snd_pcm_sframes_t VAR_8 = 0;

    if (FUNC_3(VAR_4, VAR_5->period_size * VAR_5->frame_size) < 0) {
        return FUNC_0(VAR_2);
    }

    while ((VAR_6 = FUNC_10(VAR_5->h, VAR_4->data, VAR_5->period_size)) < 0) {
        if (VAR_6 == -VAR_1) {
            FUNC_4(VAR_4);

            return FUNC_0(VAR_1);
        }
        if (FUNC_6(VAR_3, VAR_6) < 0) {
            FUNC_2(VAR_3, VAR_0, "ALSA read error: %s\n",
                   FUNC_11(VAR_6));
            FUNC_4(VAR_4);

            return FUNC_0(VAR_2);
        }
        FUNC_7(VAR_5->timefilter);
    }

    VAR_7 = FUNC_1();
    FUNC_9(VAR_5->h, &VAR_8);
    VAR_7 -= FUNC_5(VAR_8 + VAR_6, 1000000, VAR_5->sample_rate);
    VAR_4->pts = FUNC_8(VAR_5->timefilter, VAR_7, VAR_5->last_period);
    VAR_5->last_period = VAR_6;

    VAR_4->size = VAR_6 * VAR_5->frame_size;

    return 0;
}
