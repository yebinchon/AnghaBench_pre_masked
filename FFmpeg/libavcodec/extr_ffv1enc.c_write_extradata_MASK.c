
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int state2 ;
typedef int state ;
typedef int int8_t ;
struct TYPE_12__ {int* one_state; } ;
struct TYPE_13__ {int version; int micro_version; int ac; int* state_transition; int colorspace; int bits_per_raw_sample; int chroma_planes; int chroma_h_shift; int chroma_v_shift; int transparency; int num_h_slices; int num_v_slices; int quant_table_count; int*** initial_states; int* context_count; int ec; int intra; TYPE_1__* avctx; int * quant_tables; TYPE_2__ c; } ;
struct TYPE_11__ {int extradata_size; int extradata; int gop_size; } ;
typedef TYPE_2__ RangeCoder ;
typedef TYPE_3__ FFV1Context ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int**,int) ;
 int FUNC_6 (TYPE_2__* const,double,int) ;
 int FUNC_7 (TYPE_2__* const,int,int) ;
 int FUNC_8 (TYPE_2__* const,int ) ;
 int FUNC_9 (int *,int,int) ;
 int FUNC_10 (TYPE_2__* const,int *,int) ;
 int FUNC_11 (TYPE_2__* const,int *,int,int) ;
 int FUNC_12 (TYPE_2__* const,int ) ;

__attribute__((used)) static int FUNC_13(FFV1Context *VAR_5)
{
    RangeCoder *const VAR_6 = &VAR_5->c;
    uint8_t VAR_7[VAR_3];
    int VAR_8, VAR_9, VAR_10;
    uint8_t VAR_11[32][VAR_3];
    unsigned VAR_12;

    FUNC_9(VAR_11, 128, sizeof(VAR_11));
    FUNC_9(VAR_7, 128, sizeof(VAR_7));

    VAR_5->avctx->extradata_size = 10000 + 4 +
                                    (11 * 11 * 5 * 5 * 5 + 11 * 11 * 11) * 32;
    VAR_5->avctx->extradata = FUNC_4(VAR_5->avctx->extradata_size + VAR_2);
    if (!VAR_5->avctx->extradata)
        return FUNC_0(VAR_4);
    FUNC_7(VAR_6, VAR_5->avctx->extradata, VAR_5->avctx->extradata_size);
    FUNC_6(VAR_6, 0.05 * (1LL << 32), 256 - 8);

    FUNC_11(VAR_6, VAR_7, VAR_5->version, 0);
    if (VAR_5->version > 2) {
        if (VAR_5->version == 3) {
            VAR_5->micro_version = 4;
        } else if (VAR_5->version == 4)
            VAR_5->micro_version = 2;
        FUNC_11(VAR_6, VAR_7, VAR_5->micro_version, 0);
    }

    FUNC_11(VAR_6, VAR_7, VAR_5->ac, 0);
    if (VAR_5->ac == VAR_0)
        for (VAR_8 = 1; VAR_8 < 256; VAR_8++)
            FUNC_11(VAR_6, VAR_7, VAR_5->state_transition[VAR_8] - VAR_6->one_state[VAR_8], 1);

    FUNC_11(VAR_6, VAR_7, VAR_5->colorspace, 0);
    FUNC_11(VAR_6, VAR_7, VAR_5->bits_per_raw_sample, 0);
    FUNC_10(VAR_6, VAR_7, VAR_5->chroma_planes);
    FUNC_11(VAR_6, VAR_7, VAR_5->chroma_h_shift, 0);
    FUNC_11(VAR_6, VAR_7, VAR_5->chroma_v_shift, 0);
    FUNC_10(VAR_6, VAR_7, VAR_5->transparency);
    FUNC_11(VAR_6, VAR_7, VAR_5->num_h_slices - 1, 0);
    FUNC_11(VAR_6, VAR_7, VAR_5->num_v_slices - 1, 0);

    FUNC_11(VAR_6, VAR_7, VAR_5->quant_table_count, 0);
    for (VAR_8 = 0; VAR_8 < VAR_5->quant_table_count; VAR_8++)
        FUNC_12(VAR_6, VAR_5->quant_tables[VAR_8]);

    for (VAR_8 = 0; VAR_8 < VAR_5->quant_table_count; VAR_8++) {
        if (FUNC_5(VAR_5->initial_states[VAR_8], VAR_5->context_count[VAR_8])) {
            FUNC_10(VAR_6, VAR_7, 1);
            for (VAR_9 = 0; VAR_9 < VAR_5->context_count[VAR_8]; VAR_9++)
                for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
                    int VAR_13 = VAR_9 ? VAR_5->initial_states[VAR_8][VAR_9 - 1][VAR_10] : 128;
                    FUNC_11(VAR_6, VAR_11[VAR_10],
                               (int8_t)(VAR_5->initial_states[VAR_8][VAR_9][VAR_10] - VAR_13), 1);
                }
        } else {
            FUNC_10(VAR_6, VAR_7, 0);
        }
    }

    if (VAR_5->version > 2) {
        FUNC_11(VAR_6, VAR_7, VAR_5->ec, 0);
        FUNC_11(VAR_6, VAR_7, VAR_5->intra = (VAR_5->avctx->gop_size < 2), 0);
    }

    VAR_5->avctx->extradata_size = FUNC_8(VAR_6, 0);
    VAR_12 = FUNC_2(FUNC_3(VAR_1), 0, VAR_5->avctx->extradata, VAR_5->avctx->extradata_size);
    FUNC_1(VAR_5->avctx->extradata + VAR_5->avctx->extradata_size, VAR_12);
    VAR_5->avctx->extradata_size += 4;

    return 0;
}
