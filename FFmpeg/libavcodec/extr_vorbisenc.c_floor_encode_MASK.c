
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


struct TYPE_15__ {int subclass; size_t masterbook; int dim; int* books; } ;
typedef TYPE_1__ vorbis_enc_floor_class ;
struct TYPE_16__ {int multiplier; int values; int partitions; size_t* partition_to_class; TYPE_13__* list; TYPE_1__* classes; } ;
typedef TYPE_2__ vorbis_enc_floor ;
struct TYPE_17__ {TYPE_4__* codebooks; } ;
typedef TYPE_3__ vorbis_enc_context ;
struct TYPE_18__ {int nentries; } ;
typedef TYPE_4__ vorbis_enc_codebook ;
typedef int uint16_t ;
struct TYPE_19__ {int size_in_bits; } ;
struct TYPE_14__ {size_t low; size_t high; int x; } ;
typedef TYPE_5__ PutBitContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_13__*,int,int*,int*,int,float*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_5__*,int,int) ;
 int FUNC_6 (TYPE_5__*) ;
 scalar_t__ FUNC_7 (TYPE_5__*,TYPE_4__*,int) ;
 int FUNC_8 (int ,int,int ,int,int ) ;

__attribute__((used)) static int FUNC_9(vorbis_enc_context *VAR_2, vorbis_enc_floor *VAR_3,
                        PutBitContext *VAR_4, uint16_t *VAR_5,
                        float *VAR_6, int VAR_7)
{
    int VAR_8 = 255 / VAR_3->multiplier + 1;
    int VAR_9[VAR_1];
    int VAR_10, VAR_11;

    if (VAR_4->size_in_bits - FUNC_6(VAR_4) < 1 + 2 * FUNC_4(VAR_8 - 1))
        return FUNC_0(VAR_0);
    FUNC_5(VAR_4, 1, 1);
    FUNC_5(VAR_4, FUNC_4(VAR_8 - 1), VAR_5[0]);
    FUNC_5(VAR_4, FUNC_4(VAR_8 - 1), VAR_5[1]);
    VAR_9[0] = VAR_9[1] = 1;

    for (VAR_10 = 2; VAR_10 < VAR_3->values; VAR_10++) {
        int VAR_12 = FUNC_8(VAR_3->list[VAR_3->list[VAR_10].low].x,
                                     VAR_5[VAR_3->list[VAR_10].low],
                                     VAR_3->list[VAR_3->list[VAR_10].high].x,
                                     VAR_5[VAR_3->list[VAR_10].high],
                                     VAR_3->list[VAR_10].x);
        int VAR_13 = VAR_8 - VAR_12;
        int VAR_14 = VAR_12;
        int VAR_15 = FUNC_1(VAR_13, VAR_14);
        if (VAR_12 == VAR_5[VAR_10]) {
            VAR_9[VAR_10] = 0;
            continue;
        } else {
            if (!VAR_9[VAR_3->list[VAR_10].low ])
                VAR_9[VAR_3->list[VAR_10].low ] = -1;
            if (!VAR_9[VAR_3->list[VAR_10].high])
                VAR_9[VAR_3->list[VAR_10].high] = -1;
        }
        if (VAR_5[VAR_10] > VAR_12) {
            if (VAR_5[VAR_10] - VAR_12 > VAR_15)
                VAR_9[VAR_10] = VAR_5[VAR_10] - VAR_12 + VAR_14;
            else
                VAR_9[VAR_10] = (VAR_5[VAR_10] - VAR_12) << 1;
        } else {
            if (VAR_12 - VAR_5[VAR_10] > VAR_15)
                VAR_9[VAR_10] = VAR_12 - VAR_5[VAR_10] + VAR_13 - 1;
            else
                VAR_9[VAR_10] = ((VAR_12 - VAR_5[VAR_10]) << 1) - 1;
        }
    }

    VAR_11 = 2;
    for (VAR_10 = 0; VAR_10 < VAR_3->partitions; VAR_10++) {
        vorbis_enc_floor_class * VAR_16 = &VAR_3->classes[VAR_3->partition_to_class[VAR_10]];
        int VAR_17, VAR_18 = 0, VAR_19 = 1<<VAR_16->subclass;
        if (VAR_16->subclass) {
            vorbis_enc_codebook * VAR_20 = &VAR_2->codebooks[VAR_16->masterbook];
            int VAR_21 = 0;
            for (VAR_17 = 0; VAR_17 < VAR_16->dim; VAR_17++) {
                int VAR_22;
                for (VAR_22 = 0; VAR_22 < VAR_19; VAR_22++) {
                    int VAR_23 = 1;
                    if (VAR_16->books[VAR_22] != -1)
                        VAR_23 = VAR_2->codebooks[VAR_16->books[VAR_22]].nentries;

                    if (VAR_9[VAR_11 + VAR_17] < VAR_23)
                        break;
                }
                FUNC_2(VAR_22 != VAR_19);
                VAR_18 |= VAR_22 << VAR_21;
                VAR_21 += VAR_16->subclass;
            }
            if (FUNC_7(VAR_4, VAR_20, VAR_18))
                return FUNC_0(VAR_0);
        }
        for (VAR_17 = 0; VAR_17 < VAR_16->dim; VAR_17++) {
            int VAR_24 = VAR_16->books[VAR_18 & (VAR_19-1)];
            int VAR_25 = VAR_9[VAR_11++];
            VAR_18 >>= VAR_16->subclass;
            if (VAR_24 == -1)
                continue;
            if (VAR_25 == -1)
                VAR_25 = 0;
            if (FUNC_7(VAR_4, &VAR_2->codebooks[VAR_24], VAR_25))
                return FUNC_0(VAR_0);
        }
    }

    FUNC_3(VAR_3->list, VAR_3->values, VAR_5, VAR_9,
                                 VAR_3->multiplier, VAR_6, VAR_7);

    return 0;
}
