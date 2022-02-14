
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int channels; } ;
struct TYPE_9__ {TYPE_6__** inputs; TYPE_2__* priv; } ;
struct TYPE_8__ {int min_part_size; } ;
struct TYPE_7__ {int fft_length; int part_size; int block_size; int coeff_size; int nb_partitions; int input_size; int input_offset; void* output; void* input; void* coeff; void* block; void* sum; void* buffer; void** irdft; void** rdft; void* output_offset; void* part_index; } ;
typedef TYPE_1__ AudioFIRSegment ;
typedef TYPE_2__ AudioFIRContext ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int,int) ;
 int VAR_2 ;
 void* FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 void* FUNC_4 (int ,int ) ;
 void* FUNC_5 (TYPE_6__*,int) ;

__attribute__((used)) static int FUNC_6(AVFilterContext *VAR_3, AudioFIRSegment *VAR_4,
                        int VAR_5, int VAR_6, int VAR_7)
{
    AudioFIRContext *VAR_8 = VAR_3->priv;

    VAR_4->rdft = FUNC_2(VAR_3->inputs[0]->channels, sizeof(*VAR_4->rdft));
    VAR_4->irdft = FUNC_2(VAR_3->inputs[0]->channels, sizeof(*VAR_4->irdft));
    if (!VAR_4->rdft || !VAR_4->irdft)
        return FUNC_0(VAR_1);

    VAR_4->fft_length = VAR_7 * 2 + 1;
    VAR_4->part_size = VAR_7;
    VAR_4->block_size = FUNC_1(VAR_4->fft_length, 32);
    VAR_4->coeff_size = FUNC_1(VAR_4->part_size + 1, 32);
    VAR_4->nb_partitions = VAR_6;
    VAR_4->input_size = VAR_5 + VAR_8->min_part_size;
    VAR_4->input_offset = VAR_5;

    VAR_4->part_index = FUNC_2(VAR_3->inputs[0]->channels, sizeof(*VAR_4->part_index));
    VAR_4->output_offset = FUNC_2(VAR_3->inputs[0]->channels, sizeof(*VAR_4->output_offset));
    if (!VAR_4->part_index || !VAR_4->output_offset)
        return FUNC_0(VAR_1);

    for (int VAR_9 = 0; VAR_9 < VAR_3->inputs[0]->channels; VAR_9++) {
        VAR_4->rdft[VAR_9] = FUNC_4(FUNC_3(2 * VAR_7), VAR_0);
        VAR_4->irdft[VAR_9] = FUNC_4(FUNC_3(2 * VAR_7), VAR_2);
        if (!VAR_4->rdft[VAR_9] || !VAR_4->irdft[VAR_9])
            return FUNC_0(VAR_1);
    }

    VAR_4->sum = FUNC_5(VAR_3->inputs[0], VAR_4->fft_length);
    VAR_4->block = FUNC_5(VAR_3->inputs[0], VAR_4->nb_partitions * VAR_4->block_size);
    VAR_4->buffer = FUNC_5(VAR_3->inputs[0], VAR_4->part_size);
    VAR_4->coeff = FUNC_5(VAR_3->inputs[1], VAR_4->nb_partitions * VAR_4->coeff_size * 2);
    VAR_4->input = FUNC_5(VAR_3->inputs[0], VAR_4->input_size);
    VAR_4->output = FUNC_5(VAR_3->inputs[0], VAR_4->part_size);
    if (!VAR_4->buffer || !VAR_4->sum || !VAR_4->block || !VAR_4->coeff || !VAR_4->input || !VAR_4->output)
        return FUNC_0(VAR_1);

    return 0;
}
