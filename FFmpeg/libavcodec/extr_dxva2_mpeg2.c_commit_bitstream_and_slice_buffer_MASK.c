
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_18__ ;
typedef struct TYPE_19__ TYPE_17__ ;


typedef int uint8_t ;
struct dxva2_picture_context {unsigned int slice_count; TYPE_2__* slice; int * bitstream; } ;
struct MpegEncContext {scalar_t__ picture_structure; int const mb_width; int const mb_height; TYPE_1__* current_picture_ptr; } ;
struct TYPE_24__ {scalar_t__ pix_fmt; struct MpegEncContext* priv_data; } ;
struct TYPE_23__ {unsigned int BufferType; int DataSize; unsigned int NumMBsInBuffer; unsigned int CompressedBufferType; } ;
struct TYPE_22__ {unsigned int dwSliceDataLocation; int dwSliceBitsInBuffer; scalar_t__ wNumberMBsInSlice; } ;
struct TYPE_21__ {struct dxva2_picture_context* hwaccel_picture_private; } ;
struct TYPE_20__ {int decoder; int video_context; } ;
struct TYPE_19__ {int decoder; } ;
typedef TYPE_2__ DXVA_SliceInfo ;
typedef TYPE_3__ DXVA2_DecodeBufferDesc ;
typedef TYPE_3__ DECODER_BUFFER_DESC ;
typedef TYPE_3__ D3D11_VIDEO_DECODER_BUFFER_DESC ;
typedef int AVDXVAContext ;
typedef TYPE_6__ AVCodecContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_18__* FUNC_0 (int *) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 TYPE_17__* FUNC_1 (int *) ;
 unsigned int VAR_5 ;
 int * FUNC_2 (TYPE_6__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,unsigned int,unsigned int*,void**) ;
 int FUNC_5 (int ,int ,unsigned int) ;
 int FUNC_6 (int ,unsigned int,void**,unsigned int*) ;
 int FUNC_7 (int ,unsigned int) ;
 scalar_t__ VAR_6 ;
 int FUNC_8 (TYPE_6__*,int ,char*) ;
 int FUNC_9 (TYPE_6__*,int *,TYPE_3__*,unsigned int,TYPE_2__*,int,unsigned int const) ;
 scalar_t__ FUNC_10 (TYPE_6__*) ;
 int FUNC_11 (int *,int *,unsigned int) ;
 int FUNC_12 (TYPE_3__*,int ,int) ;

__attribute__((used)) static int FUNC_13(AVCodecContext *VAR_7,
                                             DECODER_BUFFER_DESC *VAR_8,
                                             DECODER_BUFFER_DESC *VAR_9)
{
    const struct MpegEncContext *VAR_10 = VAR_7->priv_data;
    AVDXVAContext *VAR_11 = FUNC_2(VAR_7);
    struct dxva2_picture_context *VAR_12 =
        VAR_10->current_picture_ptr->hwaccel_picture_private;
    const int VAR_13 = VAR_10->picture_structure != VAR_6;
    const unsigned VAR_14 = VAR_10->mb_width * (VAR_10->mb_height >> VAR_13);
    void *VAR_15;
    uint8_t *VAR_16, *VAR_17, *VAR_18;
    unsigned VAR_19;
    unsigned VAR_20;
    unsigned VAR_21;
    VAR_16 = VAR_15;
    VAR_17 = VAR_16;
    VAR_18 = VAR_16 + VAR_19;

    for (VAR_20 = 0; VAR_20 < VAR_12->slice_count; VAR_20++) {
        DXVA_SliceInfo *VAR_22 = &VAR_12->slice[VAR_20];
        unsigned VAR_23 = VAR_22->dwSliceDataLocation;
        unsigned VAR_24 = VAR_22->dwSliceBitsInBuffer / 8;
        if (VAR_24 > VAR_18 - VAR_17) {
            FUNC_8(VAR_7, VAR_0, "Failed to build bitstream");
            break;
        }
        VAR_22->dwSliceDataLocation = VAR_17 - VAR_16;

        if (VAR_20 < VAR_12->slice_count - 1)
            VAR_22->wNumberMBsInSlice =
                VAR_22[1].wNumberMBsInSlice - VAR_22[0].wNumberMBsInSlice;
        else
            VAR_22->wNumberMBsInSlice =
                VAR_14 - VAR_22[0].wNumberMBsInSlice;

        FUNC_11(VAR_17, &VAR_12->bitstream[VAR_23], VAR_24);
        VAR_17 += VAR_24;
    }
    if (VAR_20 < VAR_12->slice_count)
        return -1;
    return FUNC_9(VAR_7, VAR_11, VAR_9,
                                  VAR_21,
                                  VAR_12->slice,
                                  VAR_12->slice_count * sizeof(*VAR_12->slice),
                                  VAR_14);
}
