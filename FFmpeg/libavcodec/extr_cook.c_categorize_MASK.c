
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int samples_per_channel; int gb; } ;
struct TYPE_5__ {int numvector_size; int bits_per_subpacket; int total_subbands; } ;
typedef TYPE_1__ COOKSubpacket ;
typedef TYPE_2__ COOKContext ;


 int FUNC_0 (int,int) ;
 scalar_t__* VAR_0 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(COOKContext *VAR_1, COOKSubpacket *VAR_2, const int *VAR_3,
                       int *VAR_4, int *VAR_5)
{
    int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    int VAR_16[102] = { 0 };
    int VAR_17[102] = { 0 };

    int VAR_18[128 * 2] = { 0 };
    int VAR_19 = VAR_2->numvector_size;
    int VAR_20 = VAR_2->numvector_size;

    VAR_10 = VAR_2->bits_per_subpacket - FUNC_1(&VAR_1->gb);

    if (VAR_10 > VAR_1->samples_per_channel)
        VAR_10 = VAR_1->samples_per_channel +
                    ((VAR_10 - VAR_1->samples_per_channel) * 5) / 8;

    VAR_7 = -32;


    for (VAR_14 = 32; VAR_14 > 0; VAR_14 = VAR_14 / 2) {
        VAR_11 = 0;
        VAR_12 = 0;
        for (VAR_15 = VAR_2->total_subbands; VAR_15 > 0; VAR_15--) {
            VAR_6 = FUNC_0((VAR_14 - VAR_3[VAR_12] + VAR_7) / 2, 3);
            VAR_12++;
            VAR_11 += VAR_0[VAR_6];
        }
        if (VAR_11 >= VAR_10 - 32)
            VAR_7 += VAR_14;
    }


    VAR_11 = 0;
    for (VAR_14 = 0; VAR_14 < VAR_2->total_subbands; VAR_14++) {
        VAR_6 = FUNC_0((VAR_7 - VAR_3[VAR_14]) / 2, 3);
        VAR_11 += VAR_0[VAR_6];
        VAR_17[VAR_14] = VAR_6;
        VAR_16[VAR_14] = VAR_6;
    }
    VAR_8 = VAR_9 = VAR_11;

    for (VAR_15 = 1; VAR_15 < VAR_2->numvector_size; VAR_15++) {
        if (VAR_8 + VAR_9 > 2 * VAR_10) {
            int VAR_21 = -999999;
            VAR_12 = -1;
            for (VAR_14 = 0; VAR_14 < VAR_2->total_subbands; VAR_14++) {
                if (VAR_17[VAR_14] < 7) {
                    VAR_13 = (-2 * VAR_17[VAR_14]) - VAR_3[VAR_14] + VAR_7;
                    if (VAR_13 >= VAR_21) {
                        VAR_21 = VAR_13;
                        VAR_12 = VAR_14;
                    }
                }
            }
            if (VAR_12 == -1)
                break;
            VAR_18[VAR_19++] = VAR_12;
            VAR_8 -= VAR_0[VAR_17[VAR_12]] -
                        VAR_0[VAR_17[VAR_12] + 1];
            ++VAR_17[VAR_12];
        } else {
            int VAR_22 = 999999;
            VAR_12 = -1;
            for (VAR_14 = 0; VAR_14 < VAR_2->total_subbands; VAR_14++) {
                if (VAR_16[VAR_14] > 0) {
                    VAR_13 = (-2 * VAR_16[VAR_14]) - VAR_3[VAR_14] + VAR_7;
                    if (VAR_13 < VAR_22) {
                        VAR_22 = VAR_13;
                        VAR_12 = VAR_14;
                    }
                }
            }
            if (VAR_12 == -1)
                break;
            VAR_18[--VAR_20] = VAR_12;
            VAR_9 -= VAR_0[VAR_16[VAR_12]] -
                        VAR_0[VAR_16[VAR_12] - 1];
            --VAR_16[VAR_12];
        }
    }

    for (VAR_14 = 0; VAR_14 < VAR_2->total_subbands; VAR_14++)
        VAR_4[VAR_14] = VAR_16[VAR_14];

    for (VAR_14 = 0; VAR_14 < VAR_2->numvector_size - 1; VAR_14++)
        VAR_5[VAR_14] = VAR_18[VAR_20++];
}
