
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;


struct TYPE_32__ {TYPE_1__* codecpar; TYPE_8__* priv_data; } ;
struct TYPE_31__ {unsigned int fifo_size; int dts; int fifo; } ;
struct TYPE_30__ {size_t stream_index; unsigned int size; int member_0; scalar_t__ duration; int dts; int pts; int data; } ;
struct TYPE_29__ {int nb_streams; TYPE_9__** streams; } ;
struct TYPE_28__ {scalar_t__ codec_type; } ;
typedef TYPE_8__ AudioInterleaveContext ;
typedef TYPE_9__ AVStream ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,unsigned int,int *) ;
 scalar_t__ FUNC_2 (int ,unsigned int) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*,int (*) (TYPE_2__*,TYPE_3__ const*,TYPE_3__ const*)) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*,int,int) ;

int FUNC_6(AVFormatContext *VAR_2, AVPacket *VAR_3, AVPacket *VAR_4, int VAR_5,
                        int (*VAR_6)(AVFormatContext *, AVPacket *, AVPacket *, int),
                        int (*VAR_7)(AVFormatContext *, const AVPacket *, const AVPacket *))
{
    int VAR_8, VAR_9;

    if (VAR_4) {
        AVStream *VAR_10 = VAR_2->streams[VAR_4->stream_index];
        AudioInterleaveContext *VAR_11 = VAR_10->priv_data;
        if (VAR_10->codecpar->codec_type == VAR_0) {
            unsigned VAR_12 = FUNC_3(VAR_11->fifo) + VAR_4->size;
            if (VAR_12 > VAR_11->fifo_size) {
                if (FUNC_2(VAR_11->fifo, VAR_12) < 0)
                    return FUNC_0(VAR_1);
                VAR_11->fifo_size = VAR_12;
            }
            FUNC_1(VAR_11->fifo, VAR_4->data, VAR_4->size, ((void*)0));
        } else {

            VAR_4->pts = VAR_4->dts = VAR_11->dts;
            VAR_11->dts += VAR_4->duration;
            if ((VAR_9 = FUNC_4(VAR_2, VAR_4, VAR_7)) < 0)
                return VAR_9;
        }
        VAR_4 = ((void*)0);
    }

    for (VAR_8 = 0; VAR_8 < VAR_2->nb_streams; VAR_8++) {
        AVStream *VAR_13 = VAR_2->streams[VAR_8];
        if (VAR_13->codecpar->codec_type == VAR_0) {
            AVPacket VAR_14 = { 0 };
            while ((VAR_9 = FUNC_5(VAR_2, &VAR_14, VAR_8, VAR_5)) > 0) {
                if ((VAR_9 = FUNC_4(VAR_2, &VAR_14, VAR_7)) < 0)
                    return VAR_9;
            }
            if (VAR_9 < 0)
                return VAR_9;
        }
    }

    return VAR_6(VAR_2, VAR_3, ((void*)0), VAR_5);
}
