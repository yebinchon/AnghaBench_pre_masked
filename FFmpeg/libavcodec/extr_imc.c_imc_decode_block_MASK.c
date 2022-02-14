
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


struct TYPE_26__ {scalar_t__ codec_id; int channels; } ;
struct TYPE_25__ {int decoder_reset; double* old_floor; int* levlCoeffBuf; scalar_t__* flcoeffs1; int* flcoeffs2; int* bandWidthT; int* flcoeffs3; double* flcoeffs5; int* bitsBandT; int* CWlengthT; void** skipFlags; void** codewords; scalar_t__* sumLenArr; void** bandFlagsBuf; scalar_t__* CWdecoded; } ;
struct TYPE_24__ {int gb; TYPE_2__* chctx; } ;
typedef TYPE_1__ IMCContext ;
typedef TYPE_2__ IMCChannel ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_3__*,int ,char*,...) ;
 int* VAR_6 ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*,int,scalar_t__,int) ;
 int FUNC_2 (int *,int) ;
 void* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,scalar_t__*,int*,int*,int*,double*) ;
 int FUNC_6 (TYPE_1__*,int*,scalar_t__*,int*) ;
 int FUNC_7 (TYPE_1__*,int*,double*,scalar_t__*,int*) ;
 int FUNC_8 (TYPE_1__*,int*,scalar_t__*,int*) ;
 int FUNC_9 (TYPE_3__*,TYPE_1__*,TYPE_2__*) ;
 int FUNC_10 (TYPE_1__*,TYPE_2__*,int ) ;
 int FUNC_11 (TYPE_1__*,int,int*) ;
 int FUNC_12 (TYPE_1__*,int,int*) ;
 int FUNC_13 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_14 (TYPE_1__*,TYPE_2__*,int) ;
 int FUNC_15 (double*,scalar_t__*,int) ;
 int FUNC_16 (void**,int ,int) ;

__attribute__((used)) static int FUNC_17(AVCodecContext *VAR_7, IMCContext *VAR_8, int VAR_9)
{
    int VAR_10;
    int VAR_11, VAR_12, VAR_13, VAR_14;
    int VAR_15;
    int VAR_16;
    int VAR_17, VAR_18;
    IMCChannel *VAR_19 = VAR_8->chctx + VAR_9;



    VAR_11 = FUNC_2(&VAR_8->gb, 9);
    if (VAR_11 & 0x18) {
        FUNC_0(VAR_7, VAR_2, "frame header check failed!\n");
        FUNC_0(VAR_7, VAR_2, "got %X.\n", VAR_11);
        return VAR_0;
    }
    VAR_10 = FUNC_2(&VAR_8->gb, 3);

    if (VAR_10 & 0x04)
        VAR_19->decoder_reset = 1;

    if (VAR_19->decoder_reset) {
        for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++)
            VAR_19->old_floor[VAR_12] = 1.0;
        for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++)
            VAR_19->CWdecoded[VAR_12] = 0;
        VAR_19->decoder_reset = 0;
    }

    VAR_15 = FUNC_3(&VAR_8->gb);
    if (VAR_10 & 0x1)
        FUNC_12(VAR_8, VAR_10, VAR_19->levlCoeffBuf);
    else
        FUNC_11(VAR_8, VAR_10, VAR_19->levlCoeffBuf);

    if (VAR_10 & 0x1)
        FUNC_8(VAR_8, VAR_19->levlCoeffBuf,
                                          VAR_19->flcoeffs1, VAR_19->flcoeffs2);
    else if (VAR_10 & 0x4)
        FUNC_6(VAR_8, VAR_19->levlCoeffBuf,
                                      VAR_19->flcoeffs1, VAR_19->flcoeffs2);
    else
        FUNC_7(VAR_8, VAR_19->levlCoeffBuf, VAR_19->old_floor,
                                       VAR_19->flcoeffs1, VAR_19->flcoeffs2);

    for(VAR_12=0; VAR_12<VAR_3; VAR_12++) {
        if(VAR_19->flcoeffs1[VAR_12] > VAR_5) {
            FUNC_0(VAR_7, VAR_2, "scalefactor out of range\n");
            return VAR_0;
        }
    }

    FUNC_15(VAR_19->old_floor, VAR_19->flcoeffs1, 32 * sizeof(float));

    VAR_17 = 0;
    if (VAR_10 & 0x1) {
        for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
            VAR_19->bandWidthT[VAR_12] = VAR_6[VAR_12 + 1] - VAR_6[VAR_12];
            VAR_19->bandFlagsBuf[VAR_12] = 0;
            VAR_19->flcoeffs3[VAR_12] = VAR_19->flcoeffs2[VAR_12] * 2;
            VAR_19->flcoeffs5[VAR_12] = 1.0;
        }
    } else {
        for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
            if (VAR_19->levlCoeffBuf[VAR_12] == 16) {
                VAR_19->bandWidthT[VAR_12] = 0;
                VAR_17++;
            } else
                VAR_19->bandWidthT[VAR_12] = VAR_6[VAR_12 + 1] - VAR_6[VAR_12];
        }

        FUNC_16(VAR_19->bandFlagsBuf, 0, VAR_3 * sizeof(int));
        for (VAR_12 = 0; VAR_12 < VAR_3 - 1; VAR_12++)
            if (VAR_19->bandWidthT[VAR_12])
                VAR_19->bandFlagsBuf[VAR_12] = FUNC_3(&VAR_8->gb);

        FUNC_5(VAR_8, VAR_19->flcoeffs1, VAR_19->flcoeffs2,
                             VAR_19->bandWidthT, VAR_19->flcoeffs3,
                             VAR_19->flcoeffs5);
    }

    VAR_18 = 0;

    if (VAR_10 & 0x2) {
        VAR_18 += 15;

        VAR_19->bitsBandT[0] = 5;
        VAR_19->CWlengthT[0] = 5;
        VAR_19->CWlengthT[1] = 5;
        VAR_19->CWlengthT[2] = 5;
        for (VAR_12 = 1; VAR_12 < 4; VAR_12++) {
            if (VAR_10 & 0x1)
                VAR_16 = 5;
            else
                VAR_16 = (VAR_19->levlCoeffBuf[VAR_12] == 16) ? 0 : 5;
            VAR_19->bitsBandT[VAR_12] = VAR_16;
            for (VAR_13 = VAR_6[VAR_12]; VAR_13 < VAR_6[VAR_12 + 1]; VAR_13++) {
                VAR_19->CWlengthT[VAR_13] = VAR_16;
                VAR_18 += VAR_16;
            }
        }
    }
    if (VAR_7->codec_id == VAR_1) {
        VAR_18 += !!VAR_19->bandWidthT[VAR_3 - 1];
        if (!(VAR_10 & 0x2))
            VAR_18 += 16;
    }

    if ((VAR_14 = FUNC_1(VAR_8, VAR_19, VAR_10,
                              512 - VAR_18 - FUNC_4(&VAR_8->gb),
                              VAR_15)) < 0) {
        FUNC_0(VAR_7, VAR_2, "Bit allocations failed\n");
        VAR_19->decoder_reset = 1;
        return VAR_14;
    }

    if (VAR_10 & 0x1) {
        for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++)
            VAR_19->skipFlags[VAR_12] = 0;
    } else {
        FUNC_13(VAR_8, VAR_19);
    }

    for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
        VAR_19->sumLenArr[VAR_12] = 0;

        for (VAR_13 = VAR_6[VAR_12]; VAR_13 < VAR_6[VAR_12 + 1]; VAR_13++)
            if (!VAR_19->skipFlags[VAR_13])
                VAR_19->sumLenArr[VAR_12] += VAR_19->CWlengthT[VAR_13];
    }

    FUNC_16(VAR_19->codewords, 0, sizeof(VAR_19->codewords));

    FUNC_9(VAR_7, VAR_8, VAR_19);

    if (FUNC_14(VAR_8, VAR_19, VAR_10) < 0) {
        FUNC_0(VAR_7, VAR_2, "Inverse quantization of coefficients failed\n");
        VAR_19->decoder_reset = 1;
        return VAR_0;
    }

    FUNC_16(VAR_19->skipFlags, 0, sizeof(VAR_19->skipFlags));

    FUNC_10(VAR_8, VAR_19, VAR_7->channels);

    return 0;
}
