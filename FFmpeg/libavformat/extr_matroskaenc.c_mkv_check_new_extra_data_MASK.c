
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_22__ {int sample_rate; void* codecpriv_offset; void* sample_rate_offset; } ;
typedef TYPE_3__ mkv_track ;
typedef void* int64_t ;
struct TYPE_26__ {int codec_id; int extradata_size; int extradata; } ;
struct TYPE_25__ {TYPE_2__* pb; TYPE_1__** streams; TYPE_4__* priv_data; } ;
struct TYPE_24__ {size_t stream_index; } ;
struct TYPE_23__ {int tracks_bc; int is_live; TYPE_3__* tracks; } ;
struct TYPE_21__ {int seekable; } ;
struct TYPE_20__ {TYPE_7__* codecpar; } ;
typedef TYPE_4__ MatroskaMuxContext ;
typedef TYPE_5__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_6__ AVFormatContext ;
typedef TYPE_7__ AVCodecParameters ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_6__*,int ,char*,...) ;
 int * FUNC_4 (TYPE_5__*,int ,int*) ;
 TYPE_7__* FUNC_5 () ;
 int FUNC_6 (TYPE_7__*,TYPE_7__*) ;
 int FUNC_7 (TYPE_7__**) ;
 int FUNC_8 (int *,int **) ;
 int FUNC_9 (int **) ;
 int FUNC_10 (int ,void*,int ) ;
 void* FUNC_11 (int ) ;
 int FUNC_12 (TYPE_7__*,int) ;
 int FUNC_13 (int *,int *,int) ;
 int FUNC_14 (TYPE_6__*,int *,int,int*,int*) ;
 int FUNC_15 (int ,int *,int) ;
 int FUNC_16 (TYPE_6__*,int ,TYPE_7__*,int,int ) ;
 int FUNC_17 (int ,int ,int *,int) ;
 int FUNC_18 (int ,int ,int) ;
 int FUNC_19 (int ,int) ;

__attribute__((used)) static int FUNC_20(AVFormatContext *VAR_12, AVPacket *VAR_13)
{
    MatroskaMuxContext *VAR_14 = VAR_12->priv_data;
    mkv_track *VAR_15 = &VAR_14->tracks[VAR_13->stream_index];
    AVCodecParameters *VAR_16 = VAR_12->streams[VAR_13->stream_index]->codecpar;
    uint8_t *VAR_17;
    int VAR_18 = 0, VAR_19;

    VAR_17 = FUNC_4(VAR_13, VAR_4,
                                        &VAR_18);

    switch (VAR_16->codec_id) {
    case 130:
        if (VAR_18 && (VAR_12->pb->seekable & VAR_1) && !VAR_14->is_live) {
            int VAR_20, VAR_21 = 0;
            int64_t VAR_22;
            VAR_19 = FUNC_14(VAR_12, VAR_17, VAR_18, &VAR_15->sample_rate,
                                       &VAR_21);
            if (VAR_19 < 0)
                return VAR_19;
            if (!VAR_21)
                VAR_21 = VAR_15->sample_rate;
            FUNC_2(&VAR_16->extradata);
            VAR_19 = FUNC_12(VAR_16, VAR_18);
            if (VAR_19 < 0)
                return VAR_19;
            FUNC_15(VAR_16->extradata, VAR_17, VAR_18);
            VAR_22 = FUNC_11(VAR_14->tracks_bc);
            FUNC_10(VAR_14->tracks_bc, VAR_15->codecpriv_offset, VAR_11);
            FUNC_16(VAR_12, VAR_14->tracks_bc, VAR_16, 1, 0);
            VAR_20 = VAR_10 + 2 + 4 - (FUNC_11(VAR_14->tracks_bc) - VAR_15->codecpriv_offset);
            if (VAR_20)
                FUNC_19(VAR_14->tracks_bc, VAR_20);
            FUNC_10(VAR_14->tracks_bc, VAR_15->sample_rate_offset, VAR_11);
            FUNC_18(VAR_14->tracks_bc, VAR_8, VAR_15->sample_rate);
            FUNC_18(VAR_14->tracks_bc, VAR_7, VAR_21);
            FUNC_10(VAR_14->tracks_bc, VAR_22, VAR_11);
        } else if (!VAR_16->extradata_size && !VAR_15->sample_rate) {

            FUNC_3(VAR_12, VAR_3, "Error parsing AAC extradata, unable to determine samplerate.\n");
            return FUNC_0(VAR_5);
        }
        break;
    case 128:
        if (VAR_18 && (VAR_12->pb->seekable & VAR_1) && !VAR_14->is_live) {
            AVCodecParameters *VAR_23;
            int64_t VAR_24;
            if (VAR_18 != VAR_16->extradata_size) {
                FUNC_3(VAR_12, VAR_3, "Invalid FLAC STREAMINFO metadata for output stream %d\n",
                       VAR_13->stream_index);
                return FUNC_0(VAR_5);
            }
            VAR_23 = FUNC_5();
            if (!VAR_23)
                return FUNC_0(VAR_6);
            VAR_19 = FUNC_6(VAR_23, VAR_16);
            if (VAR_19 < 0) {
                FUNC_7(&VAR_23);
                return VAR_19;
            }
            FUNC_15(VAR_23->extradata, VAR_17, VAR_18);
            VAR_24 = FUNC_11(VAR_14->tracks_bc);
            FUNC_10(VAR_14->tracks_bc, VAR_15->codecpriv_offset, VAR_11);
            FUNC_16(VAR_12, VAR_14->tracks_bc, VAR_23, 1, 0);
            FUNC_10(VAR_14->tracks_bc, VAR_24, VAR_11);
            FUNC_7(&VAR_23);
        }
        break;


    case 129:
        if (VAR_18 && (VAR_12->pb->seekable & VAR_1) && !VAR_14->is_live &&
            !VAR_16->extradata_size) {
            AVIOContext *VAR_25;
            uint8_t *VAR_26;
            int VAR_27;
            int64_t VAR_28;
            VAR_19 = FUNC_9(&VAR_25);
            if (VAR_19 < 0)
                return VAR_19;
            FUNC_13(VAR_25, VAR_17, VAR_18);
            VAR_27 = FUNC_8(VAR_25, &VAR_26);
            if (!VAR_27) {
                FUNC_1(VAR_26);
                return VAR_0;
            }
            VAR_28 = FUNC_11(VAR_14->tracks_bc);
            FUNC_10(VAR_14->tracks_bc, VAR_15->codecpriv_offset, VAR_11);

            FUNC_17(VAR_14->tracks_bc, VAR_9, VAR_26, 4);
            FUNC_1(VAR_26);
            FUNC_10(VAR_14->tracks_bc, VAR_28, VAR_11);
            VAR_19 = FUNC_12(VAR_16, VAR_18);
            if (VAR_19 < 0)
                return VAR_19;
            FUNC_15(VAR_16->extradata, VAR_17, VAR_18);
        } else if (!VAR_16->extradata_size)
            return VAR_0;
        break;
    default:
        if (VAR_18)
            FUNC_3(VAR_12, VAR_2, "Ignoring new extradata in a packet for stream %d.\n", VAR_13->stream_index);
        break;
    }

    return 0;
}
