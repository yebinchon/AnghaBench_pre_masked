
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_15__ ;


struct TYPE_25__ {int bytes; int granulepos; struct TYPE_25__* packet; } ;
typedef TYPE_3__ ogg_packet ;
struct TYPE_29__ {int initial_padding; TYPE_4__* priv_data; } ;
struct TYPE_28__ {int nb_samples; int * extended_data; } ;
struct TYPE_27__ {int duration; int pts; int size; TYPE_3__* data; } ;
struct TYPE_22__ {int remaining_samples; TYPE_2__* frames; int remaining_delay; scalar_t__ frame_alloc; } ;
struct TYPE_23__ {int channels; } ;
struct TYPE_26__ {int eof; TYPE_15__ afq; int vp; int pkt_fifo; int vd; int vb; TYPE_1__ vi; } ;
struct TYPE_24__ {int duration; scalar_t__ pts; } ;
typedef TYPE_4__ LibvorbisEncContext ;
typedef TYPE_5__ AVPacket ;
typedef TYPE_6__ AVFrame ;
typedef TYPE_7__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_3__*,int,int *) ;
 int FUNC_2 (int ,TYPE_3__*,int,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_7__*,int ,char*) ;
 int FUNC_6 (int ,TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_15__*,TYPE_6__ const*) ;
 int FUNC_8 (TYPE_15__*,int,int *,int *) ;
 int FUNC_9 (TYPE_7__*,TYPE_5__*,int,int ) ;
 int FUNC_10 (TYPE_7__*,int ) ;
 int** VAR_3 ;
 int FUNC_11 (float*,int ,int const) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,int *) ;
 float** FUNC_14 (int *,int const) ;
 int FUNC_15 (int *,int const) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,TYPE_3__*) ;
 int FUNC_18 (int) ;

__attribute__((used)) static int FUNC_19(AVCodecContext *VAR_4, AVPacket *VAR_5,
                                  const AVFrame *VAR_6, int *VAR_7)
{
    LibvorbisEncContext *VAR_8 = VAR_4->priv_data;
    ogg_packet VAR_9;
    int VAR_10, VAR_11;


    if (VAR_6) {
        const int VAR_12 = VAR_6->nb_samples;
        float **VAR_13;
        int VAR_14, VAR_15 = VAR_8->vi.channels;

        VAR_13 = FUNC_14(&VAR_8->vd, VAR_12);
        for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
            int VAR_16 = (VAR_15 > 8) ? VAR_14 :
                     VAR_3[VAR_15 - 1][VAR_14];
            FUNC_11(VAR_13[VAR_14], VAR_6->extended_data[VAR_16],
                   VAR_12 * sizeof(*VAR_13[VAR_14]));
        }
        if ((VAR_10 = FUNC_15(&VAR_8->vd, VAR_12)) < 0) {
            FUNC_5(VAR_4, VAR_1, "error in vorbis_analysis_wrote()\n");
            return FUNC_18(VAR_10);
        }
        if ((VAR_10 = FUNC_7(&VAR_8->afq, VAR_6)) < 0)
            return VAR_10;
    } else {
        if (!VAR_8->eof && VAR_8->afq.frame_alloc)
            if ((VAR_10 = FUNC_15(&VAR_8->vd, 0)) < 0) {
                FUNC_5(VAR_4, VAR_1, "error in vorbis_analysis_wrote()\n");
                return FUNC_18(VAR_10);
            }
        VAR_8->eof = 1;
    }


    while ((VAR_10 = FUNC_13(&VAR_8->vd, &VAR_8->vb)) == 1) {
        if ((VAR_10 = FUNC_12(&VAR_8->vb, ((void*)0))) < 0)
            break;
        if ((VAR_10 = FUNC_16(&VAR_8->vb)) < 0)
            break;


        while ((VAR_10 = FUNC_17(&VAR_8->vd, &VAR_9)) == 1) {
            if (FUNC_4(VAR_8->pkt_fifo) < sizeof(ogg_packet) + VAR_9.bytes) {
                FUNC_5(VAR_4, VAR_1, "packet buffer is too small\n");
                return VAR_0;
            }
            FUNC_2(VAR_8->pkt_fifo, &VAR_9, sizeof(ogg_packet), ((void*)0));
            FUNC_2(VAR_8->pkt_fifo, VAR_9.packet, VAR_9.bytes, ((void*)0));
        }
        if (VAR_10 < 0) {
            FUNC_5(VAR_4, VAR_1, "error getting available packets\n");
            break;
        }
    }
    if (VAR_10 < 0) {
        FUNC_5(VAR_4, VAR_1, "error getting available packets\n");
        return FUNC_18(VAR_10);
    }


    if (FUNC_3(VAR_8->pkt_fifo) < sizeof(ogg_packet))
        return 0;

    FUNC_1(VAR_8->pkt_fifo, &VAR_9, sizeof(ogg_packet), ((void*)0));

    if ((VAR_10 = FUNC_9(VAR_4, VAR_5, VAR_9.bytes, 0)) < 0)
        return VAR_10;
    FUNC_1(VAR_8->pkt_fifo, VAR_5->data, VAR_9.bytes, ((void*)0));

    VAR_5->pts = FUNC_10(VAR_4, VAR_9.granulepos);

    VAR_11 = FUNC_6(VAR_8->vp, VAR_5->data, VAR_5->size);
    if (VAR_11 > 0) {


        if (!VAR_4->initial_padding && VAR_8->afq.frames) {
            VAR_4->initial_padding = VAR_11;
            FUNC_0(!VAR_8->afq.remaining_delay);
            VAR_8->afq.frames->duration += VAR_11;
            if (VAR_8->afq.frames->pts != VAR_2)
                VAR_8->afq.frames->pts -= VAR_11;
            VAR_8->afq.remaining_samples += VAR_11;
        }
        FUNC_8(&VAR_8->afq, VAR_11, &VAR_5->pts, &VAR_5->duration);
    }

    *VAR_7 = 1;
    return 0;
}
