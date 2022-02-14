
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mfxStatus ;
typedef int mfxHDL ;
struct TYPE_3__ {size_t NumFrameActual; int * mids; } ;
typedef TYPE_1__ mfxFrameAllocResponse ;
typedef int AVBufferRef ;


 int VAR_0 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (int **) ;

__attribute__((used)) static mfxStatus FUNC_2(mfxHDL VAR_1, mfxFrameAllocResponse *VAR_2)
{
    FUNC_0((AVBufferRef**)&VAR_2->mids[VAR_2->NumFrameActual]);
    FUNC_0((AVBufferRef**)&VAR_2->mids[VAR_2->NumFrameActual + 1]);
    FUNC_1(&VAR_2->mids);
    return VAR_0;
}
