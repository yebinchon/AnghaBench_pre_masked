
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_28__ {scalar_t__* extended_data; } ;
struct TYPE_27__ {int (* vector_fmul_scalar ) (float*,float*,int ,int ) ;} ;
struct TYPE_26__ {scalar_t__* extended_data; } ;
struct TYPE_25__ {scalar_t__* extended_data; } ;
struct TYPE_24__ {scalar_t__* extended_data; } ;
struct TYPE_23__ {scalar_t__* extended_data; } ;
struct TYPE_22__ {scalar_t__* extended_data; } ;
struct TYPE_21__ {int (* fcmul_add ) (float*,float const*,float const*,int) ;} ;
struct TYPE_20__ {scalar_t__* extended_data; } ;
struct TYPE_19__ {TYPE_11__* priv; } ;
struct TYPE_18__ {int nb_samples; scalar_t__* extended_data; } ;
struct TYPE_17__ {int min_part_size; int nb_segments; int wet_gain; TYPE_8__* fdsp; TYPE_2__ afirdsp; int one2many; int dry_gain; TYPE_10__* seg; TYPE_4__** in; } ;
struct TYPE_16__ {int input_offset; int* output_offset; int part_size; int input_size; int fft_length; int* part_index; int block_size; int nb_partitions; int coeff_size; TYPE_3__* buffer; int * irdft; TYPE_1__* coeff; TYPE_9__* block; int * rdft; TYPE_7__* sum; TYPE_6__* output; TYPE_5__* input; } ;
typedef int FFTComplex ;
typedef TYPE_10__ AudioFIRSegment ;
typedef TYPE_11__ AudioFIRContext ;
typedef TYPE_12__ AVFrame ;
typedef TYPE_13__ AVFilterContext ;


 int FUNC_0 (int const,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,float*) ;
 int FUNC_3 () ;
 int FUNC_4 (float*,float*,int) ;
 int FUNC_5 (float*,float*,int) ;
 int FUNC_6 (float*,int ,int) ;
 int FUNC_7 (float*,float const*,int ,int ) ;
 int FUNC_8 (float*,float const*,float const*,int) ;
 int FUNC_9 (float*,float*,int ,int ) ;

__attribute__((used)) static int FUNC_10(AVFilterContext *VAR_0, AVFrame *VAR_1, int VAR_2, int VAR_3)
{
    AudioFIRContext *VAR_4 = VAR_0->priv;
    const float *VAR_5 = (const float *)VAR_4->in[0]->extended_data[VAR_2] + VAR_3;
    float *VAR_6, *VAR_7, *VAR_8 = (float *)VAR_1->extended_data[VAR_2] + VAR_3;
    const int VAR_9 = FUNC_1(VAR_4->min_part_size, VAR_1->nb_samples - VAR_3);
    int VAR_10, VAR_11, VAR_12;

    for (int VAR_13 = 0; VAR_13 < VAR_4->nb_segments; VAR_13++) {
        AudioFIRSegment *VAR_14 = &VAR_4->seg[VAR_13];
        float *VAR_15 = (float *)VAR_14->input->extended_data[VAR_2];
        float *VAR_16 = (float *)VAR_14->output->extended_data[VAR_2];
        float *VAR_17 = (float *)VAR_14->sum->extended_data[VAR_2];

        VAR_4->fdsp->vector_fmul_scalar(VAR_15 + VAR_14->input_offset, VAR_5, VAR_4->dry_gain, FUNC_0(VAR_9, 4));
        FUNC_3();

        VAR_14->output_offset[VAR_2] += VAR_4->min_part_size;
        if (VAR_14->output_offset[VAR_2] == VAR_14->part_size) {
            VAR_14->output_offset[VAR_2] = 0;
        } else {
            FUNC_5(VAR_15, VAR_15 + VAR_4->min_part_size, (VAR_14->input_size - VAR_4->min_part_size) * sizeof(*VAR_15));

            VAR_16 += VAR_14->output_offset[VAR_2];
            for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
                VAR_8[VAR_10] += VAR_16[VAR_10];
            }
            continue;
        }

        FUNC_6(VAR_17, 0, sizeof(*VAR_17) * VAR_14->fft_length);
        VAR_6 = (float *)VAR_14->block->extended_data[VAR_2] + VAR_14->part_index[VAR_2] * VAR_14->block_size;
        FUNC_6(VAR_6 + VAR_14->part_size, 0, sizeof(*VAR_6) * (VAR_14->fft_length - VAR_14->part_size));

        FUNC_4(VAR_6, VAR_15, sizeof(*VAR_15) * VAR_14->part_size);

        FUNC_2(VAR_14->rdft[VAR_2], VAR_6);
        VAR_6[2 * VAR_14->part_size] = VAR_6[1];
        VAR_6[1] = 0;

        VAR_12 = VAR_14->part_index[VAR_2];

        for (VAR_11 = 0; VAR_11 < VAR_14->nb_partitions; VAR_11++) {
            const int VAR_18 = VAR_12 * VAR_14->coeff_size;
            const float *VAR_19 = (const float *)VAR_14->block->extended_data[VAR_2] + VAR_11 * VAR_14->block_size;
            const FFTComplex *VAR_20 = (const FFTComplex *)VAR_14->coeff->extended_data[VAR_2 * !VAR_4->one2many] + VAR_18;

            VAR_4->afirdsp.fcmul_add(VAR_17, VAR_19, (const float *)VAR_20, VAR_14->part_size);

            if (VAR_12 == 0)
                VAR_12 = VAR_14->nb_partitions;
            VAR_12--;
        }

        VAR_17[1] = VAR_17[2 * VAR_14->part_size];
        FUNC_2(VAR_14->irdft[VAR_2], VAR_17);

        VAR_7 = (float *)VAR_14->buffer->extended_data[VAR_2];
        for (VAR_10 = 0; VAR_10 < VAR_14->part_size; VAR_10++) {
            VAR_7[VAR_10] += VAR_17[VAR_10];
        }

        FUNC_4(VAR_16, VAR_7, VAR_14->part_size * sizeof(*VAR_16));

        VAR_7 = (float *)VAR_14->buffer->extended_data[VAR_2];
        FUNC_4(VAR_7, VAR_17 + VAR_14->part_size, VAR_14->part_size * sizeof(*VAR_7));

        VAR_14->part_index[VAR_2] = (VAR_14->part_index[VAR_2] + 1) % VAR_14->nb_partitions;

        FUNC_5(VAR_15, VAR_15 + VAR_4->min_part_size, (VAR_14->input_size - VAR_4->min_part_size) * sizeof(*VAR_15));

        for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
            VAR_8[VAR_10] += VAR_16[VAR_10];
        }
    }

    VAR_4->fdsp->vector_fmul_scalar(VAR_8, VAR_8, VAR_4->wet_gain, FUNC_0(VAR_9, 4));
    FUNC_3();

    return 0;
}
