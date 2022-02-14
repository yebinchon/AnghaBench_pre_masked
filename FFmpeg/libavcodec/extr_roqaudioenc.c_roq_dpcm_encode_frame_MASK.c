
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_13__ {int channels; int frame_size; TYPE_1__* priv_data; } ;
struct TYPE_12__ {int pts; scalar_t__* data; } ;
struct TYPE_11__ {int duration; int pts; int * data; } ;
struct TYPE_10__ {int input_frames; size_t buffered_samples; int* lastSample; int first_pts; int * frame_buffer; } ;
typedef TYPE_1__ ROQDPCMContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int **,int) ;
 int FUNC_2 (int **,int) ;
 int FUNC_3 (int **,int) ;
 int FUNC_4 (int*,int ) ;
 int FUNC_5 (TYPE_4__*,TYPE_2__*,scalar_t__,int ) ;
 int FUNC_6 (int *,int const*,int) ;

__attribute__((used)) static int FUNC_7(AVCodecContext *VAR_1, AVPacket *VAR_2,
                                 const AVFrame *VAR_3, int *VAR_4)
{
    int VAR_5, VAR_6, VAR_7, VAR_8;
    const int16_t *VAR_9 = VAR_3 ? (const int16_t *)VAR_3->data[0] : ((void*)0);
    uint8_t *VAR_10;
    ROQDPCMContext *VAR_11 = VAR_1->priv_data;

    VAR_6 = (VAR_1->channels == 2);

    if (!VAR_9 && VAR_11->input_frames >= 8)
        return 0;

    if (VAR_9 && VAR_11->input_frames < 8) {
        FUNC_6(&VAR_11->frame_buffer[VAR_11->buffered_samples * VAR_1->channels],
               VAR_9, VAR_1->frame_size * VAR_1->channels * sizeof(*VAR_9));
        VAR_11->buffered_samples += VAR_1->frame_size;
        if (VAR_11->input_frames == 0)
            VAR_11->first_pts = VAR_3->pts;
        if (VAR_11->input_frames < 7) {
            VAR_11->input_frames++;
            return 0;
        }
    }
    if (VAR_11->input_frames < 8)
        VAR_9 = VAR_11->frame_buffer;

    if (VAR_6) {
        VAR_11->lastSample[0] &= 0xFF00;
        VAR_11->lastSample[1] &= 0xFF00;
    }

    if (VAR_11->input_frames == 7)
        VAR_7 = VAR_1->channels * VAR_11->buffered_samples;
    else
        VAR_7 = VAR_1->channels * VAR_1->frame_size;

    if ((VAR_8 = FUNC_5(VAR_1, VAR_2, VAR_0 + VAR_7, 0)) < 0)
        return VAR_8;
    VAR_10 = VAR_2->data;

    FUNC_1(&VAR_10, VAR_6 ? 0x21 : 0x20);
    FUNC_1(&VAR_10, 0x10);
    FUNC_3(&VAR_10, VAR_7);

    if (VAR_6) {
        FUNC_1(&VAR_10, (VAR_11->lastSample[1])>>8);
        FUNC_1(&VAR_10, (VAR_11->lastSample[0])>>8);
    } else
        FUNC_2(&VAR_10, VAR_11->lastSample[0]);


    for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++)
        *VAR_10++ = FUNC_4(&VAR_11->lastSample[VAR_5 & 1], *VAR_9++);

    VAR_2->pts = VAR_11->input_frames <= 7 ? VAR_11->first_pts : VAR_3->pts;
    VAR_2->duration = VAR_7 / VAR_1->channels;

    VAR_11->input_frames++;
    if (!VAR_9)
        VAR_11->input_frames = FUNC_0(VAR_11->input_frames, 8);

    *VAR_4 = 1;
    return 0;
}
