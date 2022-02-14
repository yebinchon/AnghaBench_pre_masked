
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_15__ {scalar_t__ pix_fmt; } ;
struct TYPE_14__ {unsigned int BufferType; unsigned int DataSize; unsigned int NumMBsInBuffer; unsigned int CompressedBufferType; } ;
struct TYPE_13__ {int decoder; int video_context; } ;
struct TYPE_12__ {int decoder; } ;
typedef scalar_t__ HRESULT ;
typedef TYPE_1__ DXVA2_DecodeBufferDesc ;
typedef TYPE_1__ DECODER_BUFFER_DESC ;
typedef TYPE_1__ D3D11_VIDEO_DECODER_BUFFER_DESC ;
typedef int AVDXVAContext ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_11__* FUNC_0 (int *) ;
 TYPE_10__* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ,unsigned int,unsigned int*,void**) ;
 scalar_t__ FUNC_4 (int ,int ,unsigned int) ;
 scalar_t__ FUNC_5 (int ,unsigned int,void**,unsigned int*) ;
 scalar_t__ FUNC_6 (int ,unsigned int) ;
 int FUNC_7 (TYPE_4__*,int ,char*,unsigned int,...) ;
 scalar_t__ FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (void*,void const*,unsigned int) ;
 int FUNC_10 (TYPE_1__*,int ,int) ;

int FUNC_11(AVCodecContext *VAR_2,
                           AVDXVAContext *VAR_3,
                           DECODER_BUFFER_DESC *VAR_4,
                           unsigned VAR_5, const void *VAR_6, unsigned VAR_7,
                           unsigned VAR_8)
{
    void *VAR_9;
    unsigned VAR_10;
    int VAR_11;
    HRESULT VAR_12 = 0;
    if (FUNC_2(VAR_12)) {
        FUNC_7(VAR_2, VAR_0, "Failed to get a buffer for %u: 0x%x\n",
               VAR_5, (unsigned)VAR_12);
        return -1;
    }
    if (VAR_7 <= VAR_10) {
        FUNC_9(VAR_9, VAR_6, VAR_7);
        VAR_11 = 0;
    } else {
        FUNC_7(VAR_2, VAR_0, "Buffer for type %u was too small\n", VAR_5);
        VAR_11 = -1;
    }
    if (FUNC_2(VAR_12)) {
        FUNC_7(VAR_2, VAR_0,
               "Failed to release buffer type %u: 0x%x\n",
               VAR_5, (unsigned)VAR_12);
        VAR_11 = -1;
    }
    return VAR_11;
}
