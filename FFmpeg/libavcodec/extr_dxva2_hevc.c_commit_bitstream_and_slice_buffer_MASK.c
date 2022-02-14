
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int uint8_t ;
struct hevc_dxva2_picture_context {unsigned int slice_count; int const* bitstream; TYPE_3__* slice_short; } ;
typedef int start_code ;
struct TYPE_17__ {scalar_t__ pix_fmt; TYPE_2__* priv_data; } ;
struct TYPE_16__ {unsigned int BSNALunitDataLocation; unsigned int SliceBytesInBuffer; } ;
struct TYPE_15__ {TYPE_1__* ref; } ;
struct TYPE_14__ {struct hevc_dxva2_picture_context* hwaccel_picture_private; } ;
struct TYPE_13__ {int decoder; int video_context; } ;
struct TYPE_12__ {int decoder; } ;
typedef TYPE_1__ HEVCFrame ;
typedef TYPE_2__ HEVCContext ;
typedef TYPE_3__ DXVA_Slice_HEVC_Short ;
typedef int DXVA2_DecodeBufferDesc ;
typedef int DECODER_BUFFER_DESC ;
typedef int D3D11_VIDEO_DECODER_BUFFER_DESC ;
typedef int AVDXVAContext ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_11__* FUNC_0 (int *) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 TYPE_10__* FUNC_1 (int *) ;
 unsigned int VAR_5 ;
 int * FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (int ) ;
 unsigned int FUNC_4 (int,int) ;
 int FUNC_5 (int ,int ,unsigned int,unsigned int*,void**) ;
 int FUNC_6 (int ,int ,unsigned int) ;
 int FUNC_7 (int ,unsigned int,void**,unsigned int*) ;
 int FUNC_8 (int ,unsigned int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (TYPE_4__*,int ,char*) ;
 int FUNC_11 (TYPE_4__*,int *,int*,unsigned int,void*,unsigned int,int ) ;
 scalar_t__ FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (int*,int const*,unsigned int const) ;
 int FUNC_14 (int*,int ,int) ;

__attribute__((used)) static int FUNC_15(AVCodecContext *VAR_6,
                                             DECODER_BUFFER_DESC *VAR_7,
                                             DECODER_BUFFER_DESC *VAR_8)
{
    const HEVCContext *VAR_9 = VAR_6->priv_data;
    AVDXVAContext *VAR_10 = FUNC_2(VAR_6);
    const HEVCFrame *VAR_11 = VAR_9->ref;
    struct hevc_dxva2_picture_context *VAR_12 = VAR_11->hwaccel_picture_private;
    DXVA_Slice_HEVC_Short *VAR_13 = ((void*)0);
    void *VAR_14;
    uint8_t *VAR_15, *VAR_16, *VAR_17;
    unsigned VAR_18;
    void *VAR_19;
    unsigned VAR_20;
    unsigned VAR_21;
    unsigned VAR_22;
    unsigned VAR_23;
    VAR_15 = VAR_14;
    VAR_16 = VAR_15;
    VAR_17 = VAR_15 + VAR_18;

    for (VAR_22 = 0; VAR_22 < VAR_12->slice_count; VAR_22++) {
        static const uint8_t VAR_24[] = { 0, 0, 1 };
        static const unsigned VAR_25 = sizeof(VAR_24);
        unsigned VAR_26, VAR_27;

        VAR_13 = &VAR_12->slice_short[VAR_22];

        VAR_26 = VAR_13->BSNALunitDataLocation;
        VAR_27 = VAR_13->SliceBytesInBuffer;
        if (VAR_25 + VAR_27 > VAR_17 - VAR_16) {
            FUNC_10(VAR_6, VAR_0, "Failed to build bitstream");
            break;
        }

        VAR_13->BSNALunitDataLocation = VAR_16 - VAR_15;
        VAR_13->SliceBytesInBuffer = VAR_25 + VAR_27;

        FUNC_13(VAR_16, VAR_24, VAR_25);
        VAR_16 += VAR_25;

        FUNC_13(VAR_16, &VAR_12->bitstream[VAR_26], VAR_27);
        VAR_16 += VAR_27;
    }
    VAR_21 = FUNC_4(128 - ((VAR_16 - VAR_15) & 127), VAR_17 - VAR_16);
    if (VAR_13 && VAR_21 > 0) {
        FUNC_14(VAR_16, 0, VAR_21);
        VAR_16 += VAR_21;

        VAR_13->SliceBytesInBuffer += VAR_21;
    }
    if (VAR_22 < VAR_12->slice_count)
        return -1;
    VAR_19 = VAR_12->slice_short;
    VAR_20 = VAR_12->slice_count * sizeof(*VAR_12->slice_short);

    FUNC_9(((VAR_16 - VAR_15) & 127) == 0);
    return FUNC_11(VAR_6, VAR_10, VAR_8,
                                  VAR_23,
                                  VAR_19, VAR_20, 0);
}
