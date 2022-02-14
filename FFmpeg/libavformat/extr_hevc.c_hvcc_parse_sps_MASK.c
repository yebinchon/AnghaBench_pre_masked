
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int chromaFormat; void* bitDepthChromaMinus8; void* bitDepthLumaMinus8; scalar_t__ temporalIdNested; int numTemporalLayers; } ;
typedef TYPE_1__ HEVCDecoderConfigurationRecord ;
typedef int GetBitContext ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (unsigned int,int) ;
 int VAR_1 ;
 unsigned int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *) ;
 void* FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_1__*,unsigned int) ;
 int FUNC_6 (int *,TYPE_1__*,unsigned int) ;
 int FUNC_7 (int *,unsigned int,unsigned int,unsigned int*) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(GetBitContext *VAR_2,
                          HEVCDecoderConfigurationRecord *VAR_3)
{
    unsigned int VAR_4, VAR_5, VAR_6;
    unsigned int VAR_7, VAR_8[VAR_1];

    FUNC_8(VAR_2, 4);

    VAR_5 = FUNC_2 (VAR_2, 3);
    VAR_3->numTemporalLayers = FUNC_0(VAR_3->numTemporalLayers,
                                    VAR_5 + 1);

    VAR_3->temporalIdNested = FUNC_3(VAR_2);

    FUNC_5(VAR_2, VAR_3, VAR_5);

    FUNC_4(VAR_2);

    VAR_3->chromaFormat = FUNC_4(VAR_2);

    if (VAR_3->chromaFormat == 3)
        FUNC_9(VAR_2);

    FUNC_4(VAR_2);
    FUNC_4(VAR_2);

    if (FUNC_3(VAR_2)) {
        FUNC_4(VAR_2);
        FUNC_4(VAR_2);
        FUNC_4(VAR_2);
        FUNC_4(VAR_2);
    }

    VAR_3->bitDepthLumaMinus8 = FUNC_4(VAR_2);
    VAR_3->bitDepthChromaMinus8 = FUNC_4(VAR_2);
    VAR_6 = FUNC_4(VAR_2);


    VAR_4 = FUNC_3(VAR_2) ? 0 : VAR_5;
    for (; VAR_4 <= VAR_5; VAR_4++)
        FUNC_11(VAR_2);

    FUNC_4(VAR_2);
    FUNC_4(VAR_2);
    FUNC_4(VAR_2);
    FUNC_4(VAR_2);
    FUNC_4(VAR_2);
    FUNC_4(VAR_2);

    if (FUNC_3(VAR_2) &&
        FUNC_3(VAR_2))
        FUNC_10(VAR_2);

    FUNC_9(VAR_2);
    FUNC_9(VAR_2);

    if (FUNC_3(VAR_2)) {
        FUNC_8 (VAR_2, 4);
        FUNC_8 (VAR_2, 4);
        FUNC_4(VAR_2);
        FUNC_4(VAR_2);
        FUNC_9 (VAR_2);
    }

    VAR_7 = FUNC_4(VAR_2);
    if (VAR_7 > VAR_1)
        return VAR_0;

    for (VAR_4 = 0; VAR_4 < VAR_7; VAR_4++) {
        int VAR_9 = FUNC_7(VAR_2, VAR_4, VAR_7, VAR_8);
        if (VAR_9 < 0)
            return VAR_9;
    }

    if (FUNC_3(VAR_2)) {
        unsigned VAR_10 = FUNC_4(VAR_2);
        if (VAR_10 > 31U)
            return VAR_0;
        for (VAR_4 = 0; VAR_4 < VAR_10; VAR_4++) {
            int VAR_11 = FUNC_1(VAR_6 + 4, 16);
            FUNC_8 (VAR_2, VAR_11);
            FUNC_9(VAR_2);
        }
    }

    FUNC_9(VAR_2);
    FUNC_9(VAR_2);

    if (FUNC_3(VAR_2))
        FUNC_6(VAR_2, VAR_3, VAR_5);


    return 0;
}
