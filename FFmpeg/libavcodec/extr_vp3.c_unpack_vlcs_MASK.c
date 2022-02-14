
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_6__ {int dc; } ;
typedef TYPE_1__ Vp3Fragment ;
struct TYPE_7__ {int** num_coded_frags; int*** dct_tokens; int** coded_fragment_list; int avctx; TYPE_1__* all_fragments; } ;
typedef TYPE_2__ Vp3DecodeContext ;
struct TYPE_8__ {int table; } ;
typedef TYPE_3__ VLC ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,char*,...) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int,int*) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int *,int,int) ;
 int * VAR_4 ;

__attribute__((used)) static int FUNC_9(Vp3DecodeContext *VAR_5, GetBitContext *VAR_6,
                       VLC *VAR_7, int VAR_8,
                       int VAR_9,
                       int VAR_10)
{
    int VAR_11, VAR_12 = 0;
    int VAR_13;
    int VAR_14 = 0;
    int16_t VAR_15 = 0;
    int VAR_16;
    int VAR_17 = 0;
    int VAR_18 = VAR_5->num_coded_frags[VAR_9][VAR_8];
    int16_t *VAR_19 = VAR_5->dct_tokens[VAR_9][VAR_8];


    int *VAR_20 = VAR_5->coded_fragment_list[VAR_9];
    Vp3Fragment *VAR_21 = VAR_5->all_fragments;
    FUNC_3(*VAR_4)[2] = VAR_7->table;

    if (VAR_18 < 0) {
        FUNC_4(VAR_5->avctx, VAR_2,
               "Invalid number of coefficients at level %d\n", VAR_8);
        return VAR_0;
    }

    if (VAR_10 > VAR_18) {
        VAR_17 =
        VAR_16 = VAR_18;
        VAR_10 -= VAR_18;
    } else {
        VAR_17 =
        VAR_16 = VAR_10;
        VAR_10 = 0;
    }


    if (VAR_16)
        VAR_19[VAR_12++] = VAR_16 << 2;

    while (VAR_17 < VAR_18 && FUNC_5(VAR_6) > 0) {

        VAR_13 = FUNC_8(VAR_6, VAR_4, 11, 3);

        if ((unsigned) VAR_13 <= 6U) {
            VAR_10 = FUNC_7(VAR_6, VAR_13);
            if (!VAR_10)
                VAR_10 = VAR_3;



            if (VAR_10 > VAR_18 - VAR_17) {
                VAR_19[VAR_12++] = FUNC_1(VAR_18 - VAR_17);
                VAR_16 += VAR_18 - VAR_17;
                VAR_10 -= VAR_18 - VAR_17;
                VAR_17 = VAR_18;
            } else {
                VAR_19[VAR_12++] = FUNC_1(VAR_10);
                VAR_16 += VAR_10;
                VAR_17 += VAR_10;
                VAR_10 = 0;
            }
        } else if (VAR_13 >= 0) {
            VAR_14 = FUNC_6(VAR_6, VAR_13, &VAR_15);

            if (VAR_14) {
                VAR_19[VAR_12++] = FUNC_2(VAR_15, VAR_14);
            } else {




                if (!VAR_8)
                    VAR_21[VAR_20[VAR_17]].dc = VAR_15;

                VAR_19[VAR_12++] = FUNC_0(VAR_15);
            }

            if (VAR_8 + VAR_14 > 64) {
                FUNC_4(VAR_5->avctx, VAR_1,
                       "Invalid zero run of %d with %d coeffs left\n",
                       VAR_14, 64 - VAR_8);
                VAR_14 = 64 - VAR_8;
            }



            for (VAR_11 = VAR_8 + 1; VAR_11 <= VAR_8 + VAR_14; VAR_11++)
                VAR_5->num_coded_frags[VAR_9][VAR_11]--;
            VAR_17++;
        } else {
            FUNC_4(VAR_5->avctx, VAR_2, "Invalid token %d\n", VAR_13);
            return -1;
        }
    }

    if (VAR_16 > VAR_5->num_coded_frags[VAR_9][VAR_8])
        FUNC_4(VAR_5->avctx, VAR_2, "More blocks ended than coded!\n");



    if (VAR_16)
        for (VAR_11 = VAR_8 + 1; VAR_11 < 64; VAR_11++)
            VAR_5->num_coded_frags[VAR_9][VAR_11] -= VAR_16;


    if (VAR_9 < 2)
        VAR_5->dct_tokens[VAR_9 + 1][VAR_8] = VAR_19 + VAR_12;
    else if (VAR_8 < 63)
        VAR_5->dct_tokens[0][VAR_8 + 1] = VAR_19 + VAR_12;

    return VAR_10;
}
