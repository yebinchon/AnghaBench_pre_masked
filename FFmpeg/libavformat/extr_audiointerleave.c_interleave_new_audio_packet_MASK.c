
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__** streams; } ;
struct TYPE_10__ {int size; int stream_index; int duration; int pts; int dts; int data; } ;
struct TYPE_9__ {int time_base; TYPE_1__* priv_data; } ;
struct TYPE_8__ {int* samples; int sample_size; int* samples_per_frame; int dts; int time_base; int fifo; } ;
typedef TYPE_1__ AudioInterleaveContext ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ,int,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (int,int ,int ) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_0, AVPacket *VAR_1,
                                       int VAR_2, int VAR_3)
{
    AVStream *VAR_4 = VAR_0->streams[VAR_2];
    AudioInterleaveContext *VAR_5 = VAR_4->priv_data;
    int VAR_6;
    int VAR_7 = *VAR_5->samples * VAR_5->sample_size;
    int VAR_8 = FUNC_0(FUNC_2(VAR_5->fifo), VAR_7);
    if (!VAR_8 || (!VAR_3 && VAR_8 == FUNC_2(VAR_5->fifo)))
        return 0;

    VAR_6 = FUNC_3(VAR_1, VAR_7);
    if (VAR_6 < 0)
        return VAR_6;
    FUNC_1(VAR_5->fifo, VAR_1->data, VAR_8, ((void*)0));

    if (VAR_8 < VAR_1->size)
        FUNC_5(VAR_1->data + VAR_8, 0, VAR_1->size - VAR_8);

    VAR_1->dts = VAR_1->pts = VAR_5->dts;
    VAR_1->duration = FUNC_4(*VAR_5->samples, VAR_4->time_base, VAR_5->time_base);
    VAR_1->stream_index = VAR_2;
    VAR_5->dts += VAR_1->duration;

    VAR_5->samples++;
    if (!*VAR_5->samples)
        VAR_5->samples = VAR_5->samples_per_frame;

    return VAR_1->size;
}
