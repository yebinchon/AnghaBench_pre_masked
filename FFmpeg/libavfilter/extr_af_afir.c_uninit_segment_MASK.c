
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* priv; } ;
struct TYPE_7__ {int nb_channels; } ;
struct TYPE_6__ {scalar_t__ input_size; int output; int input; int coeff; int buffer; int sum; int block; int * part_index; int * output_offset; int * irdft; int * rdft; } ;
typedef TYPE_1__ AudioFIRSegment ;
typedef TYPE_2__ AudioFIRContext ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(AVFilterContext *VAR_0, AudioFIRSegment *VAR_1)
{
    AudioFIRContext *VAR_2 = VAR_0->priv;

    if (VAR_1->rdft) {
        for (int VAR_3 = 0; VAR_3 < VAR_2->nb_channels; VAR_3++) {
            FUNC_2(VAR_1->rdft[VAR_3]);
        }
    }
    FUNC_1(&VAR_1->rdft);

    if (VAR_1->irdft) {
        for (int VAR_4 = 0; VAR_4 < VAR_2->nb_channels; VAR_4++) {
            FUNC_2(VAR_1->irdft[VAR_4]);
        }
    }
    FUNC_1(&VAR_1->irdft);

    FUNC_1(&VAR_1->output_offset);
    FUNC_1(&VAR_1->part_index);

    FUNC_0(&VAR_1->block);
    FUNC_0(&VAR_1->sum);
    FUNC_0(&VAR_1->buffer);
    FUNC_0(&VAR_1->coeff);
    FUNC_0(&VAR_1->input);
    FUNC_0(&VAR_1->output);
    VAR_1->input_size = 0;
}
