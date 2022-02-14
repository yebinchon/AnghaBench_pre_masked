
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int int8_t ;
struct TYPE_3__ {int stride; int qpStride; int* yHistogram; int forcedQPTable; int stdQPTable; int nonBQPTable; int deintTemp; int * tempBlurredPast; int * tempBlurred; int tempBlocks; int tempSrc; int tempDst; } ;
typedef TYPE_1__ PPContext ;


 int FUNC_0 (void**,int) ;

__attribute__((used)) static void FUNC_1(PPContext *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4){
    int VAR_5 = (VAR_1+15)>>4;
    int VAR_6= (VAR_2+15)>>4;
    int VAR_7;

    VAR_0->stride= VAR_3;
    VAR_0->qpStride= VAR_4;

    FUNC_0((void **)&VAR_0->tempDst, VAR_3*24+32);
    FUNC_0((void **)&VAR_0->tempSrc, VAR_3*24);
    FUNC_0((void **)&VAR_0->tempBlocks, 2*16*8);
    FUNC_0((void **)&VAR_0->yHistogram, 256*sizeof(uint64_t));
    for(VAR_7=0; VAR_7<256; VAR_7++)
            VAR_0->yHistogram[VAR_7]= VAR_1*VAR_2/64*15/256;

    for(VAR_7=0; VAR_7<3; VAR_7++){

        FUNC_0((void **)&VAR_0->tempBlurred[VAR_7], VAR_3*VAR_6*16 + 17*1024);
        FUNC_0((void **)&VAR_0->tempBlurredPast[VAR_7], 256*((VAR_2+7)&(~7))/2 + 17*1024);
    }

    FUNC_0((void **)&VAR_0->deintTemp, 2*VAR_1+32);
    FUNC_0((void **)&VAR_0->nonBQPTable, VAR_4*VAR_6*sizeof(int8_t));
    FUNC_0((void **)&VAR_0->stdQPTable, VAR_4*VAR_6*sizeof(int8_t));
    FUNC_0((void **)&VAR_0->forcedQPTable, VAR_5*sizeof(int8_t));
}
