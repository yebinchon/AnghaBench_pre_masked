
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct audio_buf_info {scalar_t__ bytes; } ;
typedef int int64_t ;
struct TYPE_10__ {TYPE_1__* priv_data; } ;
struct TYPE_9__ {int size; int pts; scalar_t__ data; } ;
struct TYPE_8__ {int sample_rate; int channels; scalar_t__ flip_left; int fd; int frame_size; } ;
typedef TYPE_1__ OSSAudioData ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int ,int ,struct audio_buf_info*) ;
 int FUNC_5 (int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_3, AVPacket *VAR_4)
{
    OSSAudioData *VAR_5 = VAR_3->priv_data;
    int VAR_6, VAR_7;
    int64_t VAR_8;
    struct audio_buf_info VAR_9;

    if ((VAR_6=FUNC_2(VAR_4, VAR_5->frame_size)) < 0)
        return VAR_6;

    VAR_6 = FUNC_5(VAR_5->fd, VAR_4->data, VAR_4->size);
    if (VAR_6 <= 0){
        FUNC_3(VAR_4);
        VAR_4->size = 0;
        if (VAR_6<0) return FUNC_0(VAR_2);
        else return VAR_0;
    }
    VAR_4->size = VAR_6;


    VAR_8 = FUNC_1();
    VAR_7 = VAR_6;
    if (FUNC_4(VAR_5->fd, VAR_1, &VAR_9) == 0) {
        VAR_7 += VAR_9.bytes;
    }

    VAR_8 -= (VAR_7 * 1000000LL) / (VAR_5->sample_rate * VAR_5->channels);


    VAR_4->pts = VAR_8;

    if (VAR_5->flip_left && VAR_5->channels == 2) {
        int VAR_10;
        short *VAR_11 = (short *) VAR_4->data;

        for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10 += 4) {
            *VAR_11 = ~*VAR_11;
            VAR_11 += 2;
        }
    }
    return 0;
}
