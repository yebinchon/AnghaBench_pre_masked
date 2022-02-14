
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_3__ {int dstH; int chrDstH; int* vLumFilterPos; int* vChrFilterPos; int vLumFilterSize; int vChrFilterSize; int chrSrcVSubSample; } ;
typedef TYPE_1__ SwsContext ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(SwsContext *VAR_0, int *VAR_1, int *VAR_2)
{
    int VAR_3;
    int VAR_4 = VAR_0->dstH;
    int VAR_5 = VAR_0->chrDstH;
    int *VAR_6 = VAR_0->vLumFilterPos;
    int *VAR_7 = VAR_0->vChrFilterPos;
    int VAR_8 = VAR_0->vLumFilterSize;
    int VAR_9 = VAR_0->vChrFilterSize;
    int VAR_10 = VAR_0->chrSrcVSubSample;

    *VAR_1 = VAR_8;
    *VAR_2 = VAR_9;

    for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
        int VAR_11 = (int64_t)VAR_3 * VAR_5 / VAR_4;
        int VAR_12 = FUNC_0(VAR_6[VAR_3] + VAR_8 - 1,
                              ((VAR_7[VAR_11] + VAR_9 - 1)
                               << VAR_10));

        VAR_12 >>= VAR_10;
        VAR_12 <<= VAR_10;
        (*VAR_1) = FUNC_0((*VAR_1), VAR_12 - VAR_6[VAR_3]);
        (*VAR_2) = FUNC_0((*VAR_2), (VAR_12 >> VAR_10) - VAR_7[VAR_11]);
    }
}
