
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_20__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_19__ ;
typedef struct TYPE_21__ TYPE_13__ ;


struct TYPE_25__ {unsigned int BufferType; unsigned int DataSize; unsigned int CompressedBufferType; scalar_t__ NumMBsInBuffer; } ;
typedef TYPE_2__ uint8_t ;
struct TYPE_21__ {unsigned int SliceBytesInBuffer; } ;
struct vp9_dxva2_picture_context {TYPE_13__ slice; int bitstream; } ;
struct TYPE_26__ {TYPE_1__* frames; } ;
typedef TYPE_3__ VP9SharedContext ;
struct TYPE_27__ {scalar_t__ pix_fmt; TYPE_3__* priv_data; } ;
struct TYPE_24__ {int decoder; int video_context; } ;
struct TYPE_23__ {struct vp9_dxva2_picture_context* hwaccel_picture_private; } ;
struct TYPE_22__ {int decoder; } ;
typedef TYPE_2__ DXVA2_DecodeBufferDesc ;
typedef TYPE_2__ DECODER_BUFFER_DESC ;
typedef TYPE_2__ D3D11_VIDEO_DECODER_BUFFER_DESC ;
typedef int AVDXVAContext ;
typedef TYPE_7__ AVCodecContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 TYPE_20__* FUNC_0 (int *) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 TYPE_19__* FUNC_1 (int *) ;
 unsigned int VAR_6 ;
 int * FUNC_2 (TYPE_7__*) ;
 scalar_t__ FUNC_3 (int ) ;
 unsigned int FUNC_4 (int,unsigned int) ;
 int FUNC_5 (int ,int ,unsigned int,unsigned int*,void**) ;
 int FUNC_6 (int ,int ,unsigned int) ;
 int FUNC_7 (int ,unsigned int,void**,unsigned int*) ;
 int FUNC_8 (int ,unsigned int) ;
 int FUNC_9 (TYPE_7__*,int ,char*) ;
 int FUNC_10 (TYPE_7__*,int *,TYPE_2__*,unsigned int,TYPE_13__*,int,int ) ;
 scalar_t__ FUNC_11 (TYPE_7__*) ;
 int FUNC_12 (TYPE_2__*,int ,unsigned int) ;
 int FUNC_13 (TYPE_2__*,int ,int) ;

__attribute__((used)) static int FUNC_14(AVCodecContext *VAR_7,
                                             DECODER_BUFFER_DESC *VAR_8,
                                             DECODER_BUFFER_DESC *VAR_9)
{
    const VP9SharedContext *VAR_10 = VAR_7->priv_data;
    AVDXVAContext *VAR_11 = FUNC_2(VAR_7);
    struct vp9_dxva2_picture_context *VAR_12 = VAR_10->frames[VAR_2].hwaccel_picture_private;
    void *VAR_13;
    uint8_t *VAR_14;
    unsigned VAR_15;
    unsigned VAR_16;
    unsigned VAR_17;
    VAR_14 = VAR_13;

    if (VAR_12->slice.SliceBytesInBuffer > VAR_15) {
        FUNC_9(VAR_7, VAR_0, "Failed to build bitstream");
        return -1;
    }

    FUNC_12(VAR_14, VAR_12->bitstream, VAR_12->slice.SliceBytesInBuffer);

    VAR_16 = FUNC_4(128 - ((VAR_12->slice.SliceBytesInBuffer) & 127), VAR_15 - VAR_12->slice.SliceBytesInBuffer);
    if (VAR_16 > 0) {
        FUNC_13(VAR_14 + VAR_12->slice.SliceBytesInBuffer, 0, VAR_16);
        VAR_12->slice.SliceBytesInBuffer += VAR_16;
    }
    return FUNC_10(VAR_7, VAR_11, VAR_9,
                                  VAR_17,
                                  &VAR_12->slice, sizeof(VAR_12->slice), 0);
}
