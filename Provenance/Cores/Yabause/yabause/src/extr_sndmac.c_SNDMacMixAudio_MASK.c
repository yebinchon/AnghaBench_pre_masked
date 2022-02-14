
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UInt32 ;
struct TYPE_5__ {TYPE_1__* mBuffers; } ;
struct TYPE_4__ {scalar_t__ mDataByteSize; void* mData; } ;
typedef int OSStatus ;
typedef int AudioUnitRenderActionFlags ;
typedef int AudioTimeStamp ;
typedef TYPE_2__ AudioBufferList ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (void*,scalar_t__,scalar_t__) ;
 int FUNC_1 (void*,int ,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static OSStatus FUNC_4(void *VAR_7,
                               AudioUnitRenderActionFlags *VAR_8,
                               const AudioTimeStamp *VAR_9,
                               UInt32 VAR_10,
                               UInt32 VAR_11,
                               AudioBufferList *VAR_12) {
    UInt32 VAR_13 = VAR_12->mBuffers[0].mDataByteSize;
    void *VAR_14 = VAR_12->mBuffers[0].mData;

    FUNC_2(&VAR_3);

    if(VAR_2 || (VAR_5 + VAR_13 > VAR_6 && VAR_6 > VAR_5)) {
        FUNC_1(VAR_14, 0, VAR_13);
    }
    else {
        FUNC_0(VAR_14, VAR_1 + VAR_5, VAR_13);

        VAR_5 += VAR_13;
        VAR_5 &= (VAR_0 - 1);
    }

    FUNC_3(&VAR_3);

    return VAR_4;
}
