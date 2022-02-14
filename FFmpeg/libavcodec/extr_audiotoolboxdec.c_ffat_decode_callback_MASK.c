
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_15__ {scalar_t__ size; scalar_t__ data; } ;
struct TYPE_11__ {scalar_t__ mDataByteSize; } ;
struct TYPE_14__ {TYPE_8__ in_pkt; TYPE_2__ pkt_desc; int new_in_pkt; scalar_t__ eof; } ;
struct TYPE_13__ {TYPE_5__* priv_data; } ;
struct TYPE_12__ {int mNumberBuffers; TYPE_1__* mBuffers; } ;
struct TYPE_10__ {scalar_t__ mData; scalar_t__ mDataByteSize; scalar_t__ mNumberChannels; } ;
typedef int OSStatus ;
typedef TYPE_2__ AudioStreamPacketDescription ;
typedef int AudioConverterRef ;
typedef TYPE_3__ AudioBufferList ;
typedef TYPE_4__ AVCodecContext ;
typedef TYPE_5__ ATDecodeContext ;


 int FUNC_0 (TYPE_8__*,int *) ;
 int FUNC_1 (TYPE_8__*) ;

__attribute__((used)) static OSStatus FUNC_2(AudioConverterRef VAR_0, UInt32 *VAR_1,
                                     AudioBufferList *VAR_2,
                                     AudioStreamPacketDescription **VAR_3,
                                     void *VAR_4)
{
    AVCodecContext *VAR_5 = VAR_4;
    ATDecodeContext *VAR_6 = VAR_5->priv_data;

    if (VAR_6->eof) {
        *VAR_1 = 0;
        if (VAR_3) {
            *VAR_3 = &VAR_6->pkt_desc;
            VAR_6->pkt_desc.mDataByteSize = 0;
        }
        return 0;
    }

    FUNC_1(&VAR_6->in_pkt);
    FUNC_0(&VAR_6->in_pkt, &VAR_6->new_in_pkt);

    if (!VAR_6->in_pkt.data) {
        *VAR_1 = 0;
        return 1;
    }

    VAR_2->mNumberBuffers = 1;
    VAR_2->mBuffers[0].mNumberChannels = 0;
    VAR_2->mBuffers[0].mDataByteSize = VAR_6->in_pkt.size;
    VAR_2->mBuffers[0].mData = VAR_6->in_pkt.data;
    *VAR_1 = 1;

    if (VAR_3) {
        *VAR_3 = &VAR_6->pkt_desc;
        VAR_6->pkt_desc.mDataByteSize = VAR_6->in_pkt.size;
    }

    return 0;
}
