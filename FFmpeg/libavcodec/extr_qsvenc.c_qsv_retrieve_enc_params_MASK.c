
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_9__ ;
typedef struct TYPE_37__ TYPE_8__ ;
typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_23__ ;
typedef struct TYPE_29__ TYPE_1__ ;
typedef struct TYPE_28__ TYPE_14__ ;
typedef struct TYPE_27__ TYPE_13__ ;
typedef struct TYPE_26__ TYPE_12__ ;
typedef struct TYPE_25__ TYPE_11__ ;
typedef struct TYPE_24__ TYPE_10__ ;


typedef int vps_buf ;
typedef int uint8_t ;
typedef int sps_buf ;
typedef int pps_buf ;
struct TYPE_34__ {int BufferSz; int BufferId; } ;
struct TYPE_36__ {int VPSBufSize; int * VPSBuffer; TYPE_5__ Header; } ;
typedef TYPE_7__ mfxExtCodingOptionVPS ;
struct TYPE_29__ {int BufferSz; int BufferId; } ;
struct TYPE_37__ {int SPSBufSize; int PPSBufSize; int * PPSBuffer; int * SPSBuffer; TYPE_1__ Header; } ;
typedef TYPE_8__ mfxExtCodingOptionSPSPPS ;
struct TYPE_33__ {int BufferSz; int BufferId; } ;
struct TYPE_38__ {TYPE_4__ Header; } ;
typedef TYPE_9__ mfxExtCodingOption3 ;
struct TYPE_32__ {int BufferSz; int BufferId; } ;
struct TYPE_24__ {TYPE_3__ Header; } ;
typedef TYPE_10__ mfxExtCodingOption2 ;
struct TYPE_31__ {int BufferSz; int BufferId; } ;
struct TYPE_25__ {TYPE_2__ Header; } ;
typedef TYPE_11__ mfxExtCodingOption ;
typedef int mfxExtBuffer ;
typedef int extradata_vps ;
typedef int extradata ;
typedef int co3 ;
typedef int co2 ;
typedef int co ;
struct TYPE_35__ {int BufferSizeInKB; int BRCParamMultiplier; } ;
struct TYPE_30__ {int NumExtParam; TYPE_6__ mfx; int ** ExtParam; } ;
struct TYPE_28__ {int buffer_size; int avg_bitrate; int min_bitrate; int max_bitrate; } ;
struct TYPE_27__ {scalar_t__ codec_id; int extradata_size; int extradata; int rc_buffer_size; int bit_rate; int rc_min_rate; int rc_max_rate; } ;
struct TYPE_26__ {int hevc_vps; int packet_size; TYPE_23__ param; int session; int ver; } ;
typedef TYPE_12__ QSVEncContext ;
typedef TYPE_13__ AVCodecContext ;
typedef TYPE_14__ AVCPBProperties ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,TYPE_23__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_2 (int ,int,int) ;
 int FUNC_3 (TYPE_13__*,int ,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_13__*,TYPE_12__*,int **) ;
 TYPE_14__* FUNC_6 (TYPE_13__*) ;
 int FUNC_7 (TYPE_13__*,int,char*) ;
 int FUNC_8 (int,int *,int) ;
 int FUNC_9 (int,int ,int) ;

__attribute__((used)) static int FUNC_10(AVCodecContext *VAR_14, QSVEncContext *VAR_15)
{
    AVCPBProperties *VAR_16;

    uint8_t VAR_17[128];
    uint8_t VAR_18[128];

    mfxExtCodingOptionSPSPPS VAR_19 = {
        .Header.BufferId = VAR_9,
        .Header.BufferSz = sizeof(VAR_19),
        .SPSBuffer = VAR_17, .SPSBufSize = sizeof(VAR_17),
        .PPSBuffer = VAR_18, .PPSBufSize = sizeof(VAR_18)
    };

    mfxExtCodingOption VAR_20 = {
        .Header.BufferId = VAR_6,
        .Header.BufferSz = sizeof(VAR_20),
    };
    mfxExtBuffer *VAR_21[2 + VAR_11 + VAR_12 + VAR_13];

    int VAR_22 = VAR_14->codec_id != VAR_2;
    int VAR_23, VAR_24 = 0, VAR_25 = 0;

    VAR_21[VAR_24++] = (mfxExtBuffer*)&VAR_19;
    VAR_21[VAR_24++] = (mfxExtBuffer*)&VAR_20;
    VAR_15->param.ExtParam = VAR_21;
    VAR_15->param.NumExtParam = VAR_24;

    VAR_23 = FUNC_1(VAR_15->session, &VAR_15->param);
    if (VAR_23 < 0)
        return FUNC_7(VAR_14, VAR_23,
                                  "Error calling GetVideoParam");

    VAR_15->packet_size = VAR_15->param.mfx.BufferSizeInKB * VAR_15->param.mfx.BRCParamMultiplier * 1000;

    if (!VAR_19.SPSBufSize || (VAR_22 && !VAR_19.PPSBufSize)



    ) {
        FUNC_3(VAR_14, VAR_4, "No extradata returned from libmfx.\n");
        return VAR_0;
    }

    VAR_14->extradata_size = VAR_19.SPSBufSize + VAR_22 * VAR_19.PPSBufSize;




    VAR_14->extradata = FUNC_4(VAR_14->extradata_size + VAR_3);
    if (!VAR_14->extradata)
        return FUNC_0(VAR_5);
    FUNC_8(VAR_14->extradata + VAR_25, VAR_17, VAR_19.SPSBufSize);
    VAR_25 += VAR_19.SPSBufSize;
    if (VAR_22) {
        FUNC_8(VAR_14->extradata + VAR_25, VAR_18, VAR_19.PPSBufSize);
        VAR_25 += VAR_19.PPSBufSize;
    }
    FUNC_9(VAR_14->extradata + VAR_14->extradata_size, 0, VAR_3);

    VAR_16 = FUNC_6(VAR_14);
    if (!VAR_16)
        return FUNC_0(VAR_5);
    VAR_16->max_bitrate = VAR_14->rc_max_rate;
    VAR_16->min_bitrate = VAR_14->rc_min_rate;
    VAR_16->avg_bitrate = VAR_14->bit_rate;
    VAR_16->buffer_size = VAR_14->rc_buffer_size;

    FUNC_5(VAR_14, VAR_15, VAR_21 + 1);

    return 0;
}
