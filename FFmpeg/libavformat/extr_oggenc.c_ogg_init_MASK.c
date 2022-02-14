
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_11__ ;


typedef int uint8_t ;
struct TYPE_27__ {int nb_streams; int flags; int nb_chapters; int chapters; int metadata; TYPE_5__** streams; TYPE_4__* priv_data; } ;
struct TYPE_22__ {int num; int den; } ;
struct TYPE_26__ {TYPE_1__ time_base; TYPE_11__* codecpar; int metadata; TYPE_3__* priv_data; } ;
struct TYPE_25__ {int serial_offset; scalar_t__ pref_size; } ;
struct TYPE_23__ {int stream_index; } ;
struct TYPE_24__ {unsigned int serial_num; int** header; int kfgshift; int vrev; int * header_len; TYPE_2__ page; } ;
struct TYPE_21__ {scalar_t__ codec_type; scalar_t__ codec_id; int sample_rate; int extradata_size; int extradata; } ;
typedef TYPE_3__ OGGStreamContext ;
typedef TYPE_4__ OGGContext ;
typedef TYPE_5__ AVStream ;
typedef TYPE_6__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (TYPE_3__**) ;
 unsigned int FUNC_4 () ;
 int FUNC_5 (TYPE_6__*,int ,char*,...) ;
 TYPE_3__* FUNC_6 (int) ;
 int FUNC_7 (TYPE_5__*,int,int,int) ;
 scalar_t__ FUNC_8 (int ,int ,int,int const**,int *) ;
 int FUNC_9 (int**,char const*,int) ;
 int FUNC_10 (int**,int) ;
 int FUNC_11 (TYPE_11__*,TYPE_3__*,int,int *) ;
 int FUNC_12 (TYPE_11__*,TYPE_3__*,int,int *,int ,int ) ;
 int FUNC_13 (TYPE_11__*,TYPE_3__*,int,int *) ;
 int FUNC_14 (TYPE_6__*,TYPE_5__*,TYPE_3__*,int) ;
 int* FUNC_15 (int,int,int *,int *,int,int *,int ) ;

__attribute__((used)) static int FUNC_16(AVFormatContext *VAR_15)
{
    OGGContext *VAR_16 = VAR_15->priv_data;
    OGGStreamContext *VAR_17 = ((void*)0);
    int VAR_18, VAR_19;

    if (VAR_16->pref_size)
        FUNC_5(VAR_15, VAR_12, "The pagesize option is deprecated\n");

    for (VAR_18 = 0; VAR_18 < VAR_15->nb_streams; VAR_18++) {
        AVStream *VAR_20 = VAR_15->streams[VAR_18];
        unsigned VAR_21 = VAR_18 + VAR_16->serial_offset;

        if (VAR_20->codecpar->codec_type == VAR_2) {
            if (VAR_20->codecpar->codec_id == VAR_4)

                FUNC_7(VAR_20, 64, 1, 48000);
            else
                FUNC_7(VAR_20, 64, 1, VAR_20->codecpar->sample_rate);
        }

        if (VAR_20->codecpar->codec_id != VAR_7 &&
            VAR_20->codecpar->codec_id != VAR_6 &&
            VAR_20->codecpar->codec_id != VAR_5 &&
            VAR_20->codecpar->codec_id != VAR_3 &&
            VAR_20->codecpar->codec_id != VAR_4 &&
            VAR_20->codecpar->codec_id != VAR_8) {
            FUNC_5(VAR_15, VAR_11, "Unsupported codec id in stream %d\n", VAR_18);
            return FUNC_0(VAR_13);
        }

        if ((!VAR_20->codecpar->extradata || !VAR_20->codecpar->extradata_size) &&
            VAR_20->codecpar->codec_id != VAR_8) {
            FUNC_5(VAR_15, VAR_11, "No extradata present\n");
            return VAR_0;
        }
        VAR_17 = FUNC_6(sizeof(*VAR_17));
        if (!VAR_17)
            return FUNC_0(VAR_14);

        VAR_17->page.stream_index = VAR_18;

        if (!(VAR_15->flags & VAR_1))
            do {
                VAR_21 = FUNC_4();
                for (VAR_19 = 0; VAR_19 < VAR_18; VAR_19++) {
                    OGGStreamContext *VAR_22 = VAR_15->streams[VAR_19]->priv_data;
                    if (VAR_21 == VAR_22->serial_num)
                        break;
                }
            } while (VAR_19 < VAR_18);
        VAR_17->serial_num = VAR_21;

        FUNC_2(&VAR_20->metadata, VAR_15->metadata, VAR_9);

        VAR_20->priv_data = VAR_17;
        if (VAR_20->codecpar->codec_id == VAR_3) {
            int VAR_23 = FUNC_11(VAR_20->codecpar, VAR_17,
                                             VAR_15->flags & VAR_1,
                                             &VAR_20->metadata);
            if (VAR_23) {
                FUNC_5(VAR_15, VAR_11, "Error writing FLAC headers\n");
                FUNC_3(&VAR_20->priv_data);
                return VAR_23;
            }
        } else if (VAR_20->codecpar->codec_id == VAR_5) {
            int VAR_24 = FUNC_13(VAR_20->codecpar, VAR_17,
                                              VAR_15->flags & VAR_1,
                                              &VAR_20->metadata);
            if (VAR_24) {
                FUNC_5(VAR_15, VAR_11, "Error writing Speex headers\n");
                FUNC_3(&VAR_20->priv_data);
                return VAR_24;
            }
        } else if (VAR_20->codecpar->codec_id == VAR_4) {
            int VAR_25 = FUNC_12(VAR_20->codecpar, VAR_17,
                                             VAR_15->flags & VAR_1,
                                             &VAR_20->metadata, VAR_15->chapters, VAR_15->nb_chapters);
            if (VAR_25) {
                FUNC_5(VAR_15, VAR_11, "Error writing Opus headers\n");
                FUNC_3(&VAR_20->priv_data);
                return VAR_25;
            }
        } else if (VAR_20->codecpar->codec_id == VAR_8) {
            int VAR_26 = FUNC_14(VAR_15, VAR_20, VAR_17,
                                            VAR_15->flags & VAR_1);
            if (VAR_26) {
                FUNC_5(VAR_15, VAR_11, "Error writing VP8 headers\n");
                FUNC_3(&VAR_20->priv_data);
                return VAR_26;
            }
        } else {
            uint8_t *VAR_27;
            const char *VAR_28 = VAR_20->codecpar->codec_id == VAR_7 ? "vorbis" : "theora";
            int VAR_29 = VAR_20->codecpar->codec_id == VAR_7 ? 3 : 0x81;
            int VAR_30 = VAR_20->codecpar->codec_id == VAR_7 ? 1 : 0;

            if (FUNC_8(VAR_20->codecpar->extradata, VAR_20->codecpar->extradata_size,
                                      VAR_20->codecpar->codec_id == VAR_7 ? 30 : 42,
                                      (const uint8_t**)VAR_17->header, VAR_17->header_len) < 0) {
                FUNC_5(VAR_15, VAR_11, "Extradata corrupted\n");
                FUNC_3(&VAR_20->priv_data);
                return VAR_0;
            }

            VAR_27 = FUNC_15(7, VAR_15->flags & VAR_1,
                                        &VAR_17->header_len[1], &VAR_20->metadata,
                                        VAR_30, ((void*)0), 0);
            VAR_17->header[1] = VAR_27;
            if (!VAR_27)
                return FUNC_0(VAR_14);

            FUNC_10(&VAR_27, VAR_29);
            FUNC_9(&VAR_27, VAR_28, 6);

            if (VAR_20->codecpar->codec_id == VAR_6) {
                int VAR_31 = FUNC_1(VAR_17->header[0] + 22), VAR_32 = FUNC_1(VAR_17->header[0] + 26);


                if (VAR_20->time_base.num != VAR_32 || VAR_20->time_base.den != VAR_31) {
                    FUNC_5(VAR_15, VAR_10, "Changing time base from %d/%d to %d/%d\n",
                           VAR_20->time_base.num, VAR_20->time_base.den, VAR_32, VAR_31);
                    FUNC_7(VAR_20, 64, VAR_32, VAR_31);
                }


                VAR_17->kfgshift = ((VAR_17->header[0][40]&3)<<3)|(VAR_17->header[0][41]>>5);
                VAR_17->vrev = VAR_17->header[0][9];
                FUNC_5(VAR_15, VAR_10, "theora kfgshift %d, vrev %d\n",
                       VAR_17->kfgshift, VAR_17->vrev);
            }
        }
    }

    return 0;
}
