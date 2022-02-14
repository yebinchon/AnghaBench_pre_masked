
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int uint8_t ;
typedef int state2 ;
typedef int state ;
struct TYPE_12__ {int bytestream_end; scalar_t__* one_state; } ;
struct TYPE_13__ {int version; int micro_version; int ac; int colorspace; int chroma_h_shift; int chroma_v_shift; int num_h_slices; int num_v_slices; int quant_table_count; int* context_count; int*** initial_states; int ec; int intra; void* transparency; void* chroma_planes; TYPE_10__* avctx; int * quant_tables; scalar_t__ height; scalar_t__ width; scalar_t__ plane_count; scalar_t__* state_transition; TYPE_1__ c; } ;
struct TYPE_11__ {int extradata_size; int bits_per_raw_sample; int debug; int extradata; } ;
typedef TYPE_1__ RangeCoder ;
typedef TYPE_2__ FFV1Context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_10__*,int ,char*,...) ;
 int FUNC_4 (TYPE_1__* const,double,int) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_1__* const,int ,int) ;
 void* FUNC_7 (TYPE_1__* const,int *) ;
 int FUNC_8 (TYPE_1__* const,int *,int) ;
 int FUNC_9 (int *,int,int) ;
 int FUNC_10 (TYPE_1__* const,int ) ;

__attribute__((used)) static int FUNC_11(FFV1Context *VAR_8)
{
    RangeCoder *const VAR_9 = &VAR_8->c;
    uint8_t VAR_10[VAR_5];
    int VAR_11, VAR_12, VAR_13, VAR_14;
    uint8_t VAR_15[32][VAR_5];
    unsigned VAR_16 = 0;

    FUNC_9(VAR_15, 128, sizeof(VAR_15));
    FUNC_9(VAR_10, 128, sizeof(VAR_10));

    FUNC_6(VAR_9, VAR_8->avctx->extradata, VAR_8->avctx->extradata_size);
    FUNC_4(VAR_9, 0.05 * (1LL << 32), 256 - 8);

    VAR_8->version = FUNC_8(VAR_9, VAR_10, 0);
    if (VAR_8->version < 2) {
        FUNC_3(VAR_8->avctx, VAR_4, "Invalid version in global header\n");
        return VAR_1;
    }
    if (VAR_8->version > 2) {
        VAR_9->bytestream_end -= 4;
        VAR_8->micro_version = FUNC_8(VAR_9, VAR_10, 0);
        if (VAR_8->micro_version < 0)
            return VAR_1;
    }
    VAR_8->ac = FUNC_8(VAR_9, VAR_10, 0);

    if (VAR_8->ac == VAR_0) {
        for (VAR_11 = 1; VAR_11 < 256; VAR_11++)
            VAR_8->state_transition[VAR_11] = FUNC_8(VAR_9, VAR_10, 1) + VAR_9->one_state[VAR_11];
    }

    VAR_8->colorspace = FUNC_8(VAR_9, VAR_10, 0);
    VAR_8->avctx->bits_per_raw_sample = FUNC_8(VAR_9, VAR_10, 0);
    VAR_8->chroma_planes = FUNC_7(VAR_9, VAR_10);
    VAR_8->chroma_h_shift = FUNC_8(VAR_9, VAR_10, 0);
    VAR_8->chroma_v_shift = FUNC_8(VAR_9, VAR_10, 0);
    VAR_8->transparency = FUNC_7(VAR_9, VAR_10);
    VAR_8->plane_count = 1 + (VAR_8->chroma_planes || VAR_8->version<4) + VAR_8->transparency;
    VAR_8->num_h_slices = 1 + FUNC_8(VAR_9, VAR_10, 0);
    VAR_8->num_v_slices = 1 + FUNC_8(VAR_9, VAR_10, 0);

    if (VAR_8->chroma_h_shift > 4U || VAR_8->chroma_v_shift > 4U) {
        FUNC_3(VAR_8->avctx, VAR_4, "chroma shift parameters %d %d are invalid\n",
               VAR_8->chroma_h_shift, VAR_8->chroma_v_shift);
        return VAR_1;
    }

    if (VAR_8->num_h_slices > (unsigned)VAR_8->width || !VAR_8->num_h_slices ||
        VAR_8->num_v_slices > (unsigned)VAR_8->height || !VAR_8->num_v_slices
       ) {
        FUNC_3(VAR_8->avctx, VAR_4, "slice count invalid\n");
        return VAR_1;
    }

    VAR_8->quant_table_count = FUNC_8(VAR_9, VAR_10, 0);
    if (VAR_8->quant_table_count > (unsigned)VAR_7 || !VAR_8->quant_table_count) {
        FUNC_3(VAR_8->avctx, VAR_4, "quant table count %d is invalid\n", VAR_8->quant_table_count);
        VAR_8->quant_table_count = 0;
        return VAR_1;
    }

    for (VAR_11 = 0; VAR_11 < VAR_8->quant_table_count; VAR_11++) {
        VAR_8->context_count[VAR_11] = FUNC_10(VAR_9, VAR_8->quant_tables[VAR_11]);
        if (VAR_8->context_count[VAR_11] < 0) {
            FUNC_3(VAR_8->avctx, VAR_4, "read_quant_table error\n");
            return VAR_1;
        }
    }
    if ((VAR_14 = FUNC_5(VAR_8)) < 0)
        return VAR_14;

    for (VAR_11 = 0; VAR_11 < VAR_8->quant_table_count; VAR_11++)
        if (FUNC_7(VAR_9, VAR_10)) {
            for (VAR_12 = 0; VAR_12 < VAR_8->context_count[VAR_11]; VAR_12++)
                for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
                    int VAR_17 = VAR_12 ? VAR_8->initial_states[VAR_11][VAR_12 - 1][VAR_13] : 128;
                    VAR_8->initial_states[VAR_11][VAR_12][VAR_13] =
                        (VAR_17 + FUNC_8(VAR_9, VAR_15[VAR_13], 1)) & 0xFF;
                }
        }

    if (VAR_8->version > 2) {
        VAR_8->ec = FUNC_8(VAR_9, VAR_10, 0);
        if (VAR_8->micro_version > 2)
            VAR_8->intra = FUNC_8(VAR_9, VAR_10, 0);
    }

    if (VAR_8->version > 2) {
        unsigned VAR_18;
        VAR_18 = FUNC_1(FUNC_2(VAR_2), 0,
                   VAR_8->avctx->extradata, VAR_8->avctx->extradata_size);
        if (VAR_18 || VAR_8->avctx->extradata_size < 4) {
            FUNC_3(VAR_8->avctx, VAR_4, "CRC mismatch %X!\n", VAR_18);
            return VAR_1;
        }
        VAR_16 = FUNC_0(VAR_8->avctx->extradata + VAR_8->avctx->extradata_size - 4);
    }

    if (VAR_8->avctx->debug & VAR_6)
        FUNC_3(VAR_8->avctx, VAR_3,
               "global: ver:%d.%d, coder:%d, colorspace: %d bpr:%d chroma:%d(%d:%d), alpha:%d slices:%dx%d qtabs:%d ec:%d intra:%d CRC:0x%08X\n",
               VAR_8->version, VAR_8->micro_version,
               VAR_8->ac,
               VAR_8->colorspace,
               VAR_8->avctx->bits_per_raw_sample,
               VAR_8->chroma_planes, VAR_8->chroma_h_shift, VAR_8->chroma_v_shift,
               VAR_8->transparency,
               VAR_8->num_h_slices, VAR_8->num_v_slices,
               VAR_8->quant_table_count,
               VAR_8->ec,
               VAR_8->intra,
               VAR_16
              );
    return 0;
}
