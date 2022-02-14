
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int isamplesiz; int remap; scalar_t__ ibytes; int list; int * buf; scalar_t__ input_done; } ;
typedef TYPE_2__ hb_work_private_t ;
typedef int UInt32 ;
struct TYPE_7__ {TYPE_1__* mBuffers; } ;
struct TYPE_5__ {int mDataByteSize; int * mData; } ;
typedef int OSStatus ;
typedef int AudioStreamPacketDescription ;
typedef int AudioConverterRef ;
typedef TYPE_3__ AudioBufferList ;


 int FUNC_0 (scalar_t__,int) ;
 int * FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int **,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *,int,int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static OSStatus FUNC_6(AudioConverterRef VAR_1, UInt32 *VAR_2,
                                AudioBufferList *VAR_3,
                                AudioStreamPacketDescription **VAR_4,
                                void *VAR_5)
{
    hb_work_private_t *VAR_6 = VAR_5;

    if (!VAR_6->ibytes)
    {
        *VAR_2 = 0;
        if (VAR_6->input_done)
        {

            VAR_3->mBuffers[0].mDataByteSize = 0;
            return VAR_0;
        }
        else
        {

            return 1;
        }
    }

    if (VAR_6->buf != ((void*)0))
    {
        FUNC_2(VAR_6->buf);
    }

    VAR_3->mBuffers[0].mDataByteSize = FUNC_0(VAR_6->ibytes,
                                             VAR_6->isamplesiz * *VAR_2);
    VAR_6->buf = FUNC_1(1, VAR_3->mBuffers[0].mDataByteSize);
    VAR_3->mBuffers[0].mData = VAR_6->buf;

    if (FUNC_4(VAR_6->list) >= VAR_3->mBuffers[0].mDataByteSize)
    {
        FUNC_5(VAR_6->list, VAR_3->mBuffers[0].mData,
                         VAR_3->mBuffers[0].mDataByteSize, ((void*)0), ((void*)0));
    }
    else
    {
        *VAR_2 = 0;
        return 1;
    }

    *VAR_2 = VAR_3->mBuffers[0].mDataByteSize / VAR_6->isamplesiz;
    VAR_6->ibytes -= VAR_3->mBuffers[0].mDataByteSize;

    FUNC_3(VAR_6->remap, (uint8_t**)(&VAR_3->mBuffers[0].mData),
                   (int)(*VAR_2));

    return VAR_0;
}
