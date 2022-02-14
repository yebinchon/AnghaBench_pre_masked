
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_13__ ;
typedef struct TYPE_14__ TYPE_12__ ;


typedef int uint8_t ;
struct dxva2_picture_context {unsigned int slice_count; int const* bitstream; TYPE_4__* slice; } ;
typedef int start_code ;
struct TYPE_18__ {unsigned int mb_width; unsigned int mb_height; TYPE_1__* current_picture_ptr; } ;
struct TYPE_17__ {unsigned int field_mode; scalar_t__ second_field; TYPE_3__ s; } ;
typedef TYPE_2__ VC1Context ;
struct TYPE_20__ {scalar_t__ codec_id; scalar_t__ pix_fmt; TYPE_2__* priv_data; } ;
struct TYPE_19__ {unsigned int dwSliceDataLocation; int dwSliceBitsInBuffer; scalar_t__ wNumberMBsInSlice; } ;
struct TYPE_16__ {struct dxva2_picture_context* hwaccel_picture_private; } ;
struct TYPE_15__ {int decoder; int video_context; } ;
struct TYPE_14__ {int decoder; } ;
typedef TYPE_3__ MpegEncContext ;
typedef TYPE_4__ DXVA_SliceInfo ;
typedef int DXVA2_DecodeBufferDesc ;
typedef int DECODER_BUFFER_DESC ;
typedef int D3D11_VIDEO_DECODER_BUFFER_DESC ;
typedef int AVDXVAContext ;
typedef TYPE_5__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_13__* FUNC_0 (int *) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 TYPE_12__* FUNC_1 (int *) ;
 unsigned int VAR_6 ;
 int * FUNC_2 (TYPE_5__*) ;
 scalar_t__ FUNC_3 (int ) ;
 unsigned int FUNC_4 (int,int) ;
 int FUNC_5 (int ,int ,unsigned int,unsigned int*,void**) ;
 int FUNC_6 (int ,int ,unsigned int) ;
 int FUNC_7 (int ,unsigned int,void**,unsigned int*) ;
 int FUNC_8 (int ,unsigned int) ;
 int FUNC_9 (TYPE_5__*,int ,char*) ;
 int FUNC_10 (TYPE_5__*,int *,int*,unsigned int,TYPE_4__*,int,unsigned int const) ;
 scalar_t__ FUNC_11 (TYPE_5__*) ;
 int FUNC_12 (int*,int const*,unsigned int const) ;
 int FUNC_13 (int*,int ,int) ;

__attribute__((used)) static int FUNC_14(AVCodecContext *VAR_7,
                                             DECODER_BUFFER_DESC *VAR_8,
                                             DECODER_BUFFER_DESC *VAR_9)
{
    const VC1Context *VAR_10 = VAR_7->priv_data;
    AVDXVAContext *VAR_11 = FUNC_2(VAR_7);
    const MpegEncContext *VAR_12 = &VAR_10->s;
    struct dxva2_picture_context *VAR_13 = VAR_12->current_picture_ptr->hwaccel_picture_private;

    static const uint8_t VAR_14[] = { 0, 0, 1, 0x0d };
    const unsigned VAR_15 = VAR_7->codec_id == VAR_0 ? sizeof(VAR_14) : 0;
    const unsigned VAR_16 = VAR_12->mb_width * (VAR_12->mb_height >> VAR_10->field_mode);
    DXVA_SliceInfo *VAR_17 = ((void*)0);
    void *VAR_18;
    uint8_t *VAR_19, *VAR_20, *VAR_21;
    unsigned VAR_22;
    unsigned VAR_23;
    unsigned VAR_24;
    unsigned VAR_25;
    VAR_19 = VAR_18;
    VAR_20 = VAR_19;
    VAR_21 = VAR_19 + VAR_22;

    for (VAR_24 = 0; VAR_24 < VAR_13->slice_count; VAR_24++) {
        unsigned VAR_26, VAR_27;
        VAR_17 = &VAR_13->slice[VAR_24];
        VAR_26 = VAR_17->dwSliceDataLocation;
        VAR_27 = VAR_17->dwSliceBitsInBuffer / 8;
        if (VAR_15 + VAR_27 > VAR_21 - VAR_20) {
            FUNC_9(VAR_7, VAR_1, "Failed to build bitstream");
            break;
        }
        VAR_17->dwSliceDataLocation = VAR_20 - VAR_19;

        if (VAR_24 < VAR_13->slice_count - 1)
            VAR_17->wNumberMBsInSlice =
                VAR_17[1].wNumberMBsInSlice - VAR_17[0].wNumberMBsInSlice;
        else
            VAR_17->wNumberMBsInSlice =
                VAR_16 - VAR_17[0].wNumberMBsInSlice;


        if (VAR_15) {
            FUNC_12(VAR_20, VAR_14, VAR_15);
            if (VAR_24 == 0 && VAR_10->second_field)
                VAR_20[3] = 0x0c;
            else if (VAR_24 > 0)
                VAR_20[3] = 0x0b;

            VAR_20 += VAR_15;
            VAR_17->dwSliceBitsInBuffer += VAR_15 * 8;
        }

        FUNC_12(VAR_20, &VAR_13->bitstream[VAR_26], VAR_27);
        VAR_20 += VAR_27;
    }
    VAR_23 = FUNC_4(128 - ((VAR_20 - VAR_19) & 127), VAR_21 - VAR_20);
    if (VAR_17 && VAR_23 > 0) {
        FUNC_13(VAR_20, 0, VAR_23);
        VAR_20 += VAR_23;
        VAR_17->dwSliceBitsInBuffer += VAR_23 * 8;
    }
    if (VAR_24 < VAR_13->slice_count)
        return -1;
    return FUNC_10(VAR_7, VAR_11, VAR_9,
                                  VAR_25,
                                  VAR_13->slice,
                                  VAR_13->slice_count * sizeof(*VAR_13->slice),
                                  VAR_16);
}
