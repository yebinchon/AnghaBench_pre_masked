
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_9__ {int mtype; } ;
struct TYPE_8__ {size_t mb_skip_run; int*** last_mv; int qscale; int dquant; int pb; scalar_t__ loop_filter; int mb_intra; int skip_count; } ;
typedef TYPE_1__ MpegEncContext ;
typedef TYPE_2__ H261Context ;


 scalar_t__ FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (int) ;
 int** VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 size_t* VAR_5 ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int **) ;
 int FUNC_6 (TYPE_2__*,int *,int) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (int *,int,int) ;

void FUNC_9(MpegEncContext *VAR_6, int16_t VAR_7[6][64],
                       int VAR_8, int VAR_9)
{
    H261Context *VAR_10 = (H261Context *)VAR_6;
    int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    VAR_15 = 63;
    VAR_11 = 0;

    VAR_10->mtype = 0;

    if (!VAR_6->mb_intra) {

        VAR_15 = FUNC_5(VAR_6, VAR_7);


        VAR_11 = VAR_8 | VAR_9;

        if ((VAR_15 | VAR_11) == 0) {

            VAR_6->skip_count++;
            VAR_6->mb_skip_run++;
            VAR_6->last_mv[0][0][0] = 0;
            VAR_6->last_mv[0][0][1] = 0;
            VAR_6->qscale -= VAR_6->dquant;
            return;
        }
    }


    FUNC_8(&VAR_6->pb,
             VAR_1[VAR_6->mb_skip_run],
             VAR_2[VAR_6->mb_skip_run]);
    VAR_6->mb_skip_run = 0;


    if (!VAR_6->mb_intra) {
        VAR_10->mtype++;

        if (VAR_11 || VAR_6->loop_filter)
            VAR_10->mtype += 3;
        if (VAR_6->loop_filter)
            VAR_10->mtype += 3;
        if (VAR_15)
            VAR_10->mtype++;
        FUNC_3(VAR_10->mtype > 1);
    }

    if (VAR_6->dquant && VAR_15) {
        VAR_10->mtype++;
    } else
        VAR_6->qscale -= VAR_6->dquant;

    FUNC_8(&VAR_6->pb,
             VAR_3[VAR_10->mtype],
             VAR_4[VAR_10->mtype]);

    VAR_10->mtype = VAR_5[VAR_10->mtype];

    if (FUNC_2(VAR_10->mtype)) {
        FUNC_4(VAR_6, VAR_6->qscale + VAR_6->dquant);
        FUNC_8(&VAR_6->pb, 5, VAR_6->qscale);
    }

    if (FUNC_1(VAR_10->mtype)) {
        VAR_12 = (VAR_8 >> 1) - VAR_6->last_mv[0][0][0];
        VAR_13 = (VAR_9 >> 1) - VAR_6->last_mv[0][0][1];
        VAR_6->last_mv[0][0][0] = (VAR_8 >> 1);
        VAR_6->last_mv[0][0][1] = (VAR_9 >> 1);
        FUNC_7(VAR_10, VAR_12);
        FUNC_7(VAR_10, VAR_13);
    }

    if (FUNC_0(VAR_10->mtype)) {
        FUNC_3(VAR_15 > 0);
        FUNC_8(&VAR_6->pb,
                 VAR_0[VAR_15 - 1][1],
                 VAR_0[VAR_15 - 1][0]);
    }
    for (VAR_14 = 0; VAR_14 < 6; VAR_14++)

        FUNC_6(VAR_10, VAR_7[VAR_14], VAR_14);

    if (!FUNC_1(VAR_10->mtype)) {
        VAR_6->last_mv[0][0][0] = 0;
        VAR_6->last_mv[0][0][1] = 0;
    }
}
