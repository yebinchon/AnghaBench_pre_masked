
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef enum OpusBandwidth { ____Placeholder_OpusBandwidth } OpusBandwidth ;
struct TYPE_7__ {int output; scalar_t__ coded; } ;
struct TYPE_6__ {int subframes; int sflength; int flength; int bandwidth; int wb; int prev_coded_channels; int output_channels; scalar_t__ midonly; TYPE_3__* frame; int avctx; } ;
typedef TYPE_1__ SilkContext ;
typedef int OpusRangeCoder ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (float*,int,int) ;
 int FUNC_5 (TYPE_1__*,int *,int,int,int,int,int) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_1__*,float*,float*) ;

int FUNC_8(SilkContext *VAR_5, OpusRangeCoder *VAR_6,
                              float *VAR_7[2],
                              enum OpusBandwidth VAR_8,
                              int VAR_9,
                              int VAR_10)
{
    int VAR_11[2][6], VAR_12[2];
    int VAR_13, VAR_14, VAR_15;

    if (VAR_8 > VAR_3 ||
        VAR_9 > 2 || VAR_10 > 60) {
        FUNC_1(VAR_5->avctx, VAR_1, "Invalid parameters passed "
               "to the SILK decoder.\n");
        return FUNC_0(VAR_2);
    }

    VAR_13 = 1 + (VAR_10 > 20) + (VAR_10 > 40);
    VAR_5->subframes = VAR_10 / VAR_13 / 5;
    VAR_5->sflength = 20 * (VAR_8 + 2);
    VAR_5->flength = VAR_5->sflength * VAR_5->subframes;
    VAR_5->bandwidth = VAR_8;
    VAR_5->wb = VAR_8 == VAR_3;


    if (VAR_9 > VAR_5->prev_coded_channels)
        FUNC_6(&VAR_5->frame[1]);
    VAR_5->prev_coded_channels = VAR_9;


    for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
        for (VAR_15 = 0; VAR_15 < VAR_13; VAR_15++)
            VAR_11[VAR_14][VAR_15] = FUNC_3(VAR_6, 1);

        VAR_12[VAR_14] = FUNC_3(VAR_6, 1);
        if (VAR_12[VAR_14]) {
            FUNC_2(VAR_5->avctx, "LBRR frames");
            return VAR_0;
        }
    }

    for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
        for (VAR_15 = 0; VAR_15 < VAR_9 && !VAR_5->midonly; VAR_15++)
            FUNC_5(VAR_5, VAR_6, VAR_14, VAR_15, VAR_9, VAR_11[VAR_15][VAR_14], VAR_11[1][VAR_14]);


        if (VAR_5->midonly && VAR_5->frame[1].coded)
            FUNC_6(&VAR_5->frame[1]);

        if (VAR_9 == 1 || VAR_5->output_channels == 1) {
            for (VAR_15 = 0; VAR_15 < VAR_5->output_channels; VAR_15++) {
                FUNC_4(VAR_7[VAR_15] + VAR_14 * VAR_5->flength,
                       VAR_5->frame[0].output + VAR_4 - VAR_5->flength - 2,
                       VAR_5->flength * sizeof(float));
            }
        } else {
            FUNC_7(VAR_5, VAR_7[0] + VAR_14 * VAR_5->flength, VAR_7[1] + VAR_14 * VAR_5->flength);
        }

        VAR_5->midonly = 0;
    }

    return VAR_13 * VAR_5->flength;
}
