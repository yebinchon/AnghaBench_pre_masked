
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct speex_params {int seq; int packet_size; } ;
struct ogg_stream {int pstart; int psize; struct speex_params* private; int * buf; } ;
struct ogg {struct ogg_stream* streams; } ;
typedef int int64_t ;
struct TYPE_11__ {scalar_t__ sample_rate; int channels; int extradata_size; int extradata; int channel_layout; int codec_id; int codec_type; } ;
struct TYPE_10__ {TYPE_1__** streams; struct ogg* priv_data; } ;
struct TYPE_9__ {TYPE_6__* codecpar; } ;
typedef TYPE_1__ AVStream ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_2__*,int ,char*,...) ;
 struct speex_params* FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,int,int,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_6__*,int) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__*,int *,int) ;
 int FUNC_7 (int ,int *,int ) ;

__attribute__((used)) static int FUNC_8(AVFormatContext *VAR_8, int VAR_9) {
    struct ogg *VAR_10 = VAR_8->priv_data;
    struct ogg_stream *VAR_11 = VAR_10->streams + VAR_9;
    struct speex_params *VAR_12 = VAR_11->private;
    AVStream *VAR_13 = VAR_8->streams[VAR_9];
    uint8_t *VAR_14 = VAR_11->buf + VAR_11->pstart;

    if (!VAR_12) {
        VAR_12 = FUNC_3(sizeof(*VAR_12));
        if (!VAR_12)
            return FUNC_0(VAR_6);
        VAR_11->private = VAR_12;
    }

    if (VAR_12->seq > 1)
        return 0;

    if (VAR_12->seq == 0) {
        int VAR_15;
        VAR_13->codecpar->codec_type = VAR_1;
        VAR_13->codecpar->codec_id = VAR_4;

        if (VAR_11->psize < 68) {
            FUNC_2(VAR_8, VAR_5, "speex packet too small\n");
            return VAR_0;
        }

        VAR_13->codecpar->sample_rate = FUNC_1(VAR_14 + 36);
        if (VAR_13->codecpar->sample_rate <= 0) {
            FUNC_2(VAR_8, VAR_5, "Invalid sample rate %d\n", VAR_13->codecpar->sample_rate);
            return VAR_0;
        }
        VAR_13->codecpar->channels = FUNC_1(VAR_14 + 48);
        if (VAR_13->codecpar->channels < 1 || VAR_13->codecpar->channels > 2) {
            FUNC_2(VAR_8, VAR_5, "invalid channel count. Speex must be mono or stereo.\n");
            return VAR_0;
        }
        VAR_13->codecpar->channel_layout = VAR_13->codecpar->channels == 1 ? VAR_2 :
                                                                     VAR_3;

        VAR_12->packet_size = FUNC_1(VAR_14 + 56);
        VAR_15 = FUNC_1(VAR_14 + 64);
        if (VAR_12->packet_size < 0 ||
            VAR_15 < 0 ||
            VAR_12->packet_size * (int64_t)VAR_15 > VAR_7 / 256) {
            FUNC_2(VAR_8, VAR_5, "invalid packet_size, frames_per_packet %d %d\n", VAR_12->packet_size, VAR_15);
            VAR_12->packet_size = 0;
            return VAR_0;
        }
        if (VAR_15)
            VAR_12->packet_size *= VAR_15;

        if (FUNC_5(VAR_13->codecpar, VAR_11->psize) < 0)
            return FUNC_0(VAR_6);
        FUNC_7(VAR_13->codecpar->extradata, VAR_14, VAR_13->codecpar->extradata_size);

        FUNC_4(VAR_13, 64, 1, VAR_13->codecpar->sample_rate);
    } else
        FUNC_6(VAR_8, VAR_13, VAR_14, VAR_11->psize);

    VAR_12->seq++;
    return 1;
}
