
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ profile; int bitdepth; int monochrome; int color_description_present_flag; int chroma_subsampling_x; int chroma_subsampling_y; void* chroma_sample_position; void* color_range; void* matrix_coefficients; void* transfer_characteristics; void* color_primaries; } ;
typedef int GetBitContext ;
typedef TYPE_1__ AV1SequenceParameters ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 void* FUNC_0 (int *,int) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(AV1SequenceParameters *VAR_9, GetBitContext *VAR_10)
{
    int VAR_11 = 0;
    int VAR_12 = FUNC_1(VAR_10);
    if (VAR_9->profile == VAR_8 && VAR_12)
        VAR_11 = FUNC_1(VAR_10);

    VAR_9->bitdepth = 8 + (VAR_12 * 2) + (VAR_11 * 2);

    if (VAR_9->profile == VAR_6)
        VAR_9->monochrome = 0;
    else
        VAR_9->monochrome = FUNC_1(VAR_10);

    VAR_9->color_description_present_flag = FUNC_1(VAR_10);
    if (VAR_9->color_description_present_flag) {
        VAR_9->color_primaries = FUNC_0(VAR_10, 8);
        VAR_9->transfer_characteristics = FUNC_0(VAR_10, 8);
        VAR_9->matrix_coefficients = FUNC_0(VAR_10, 8);
    } else {
        VAR_9->color_primaries = VAR_1;
        VAR_9->transfer_characteristics = VAR_5;
        VAR_9->matrix_coefficients = VAR_3;
    }

    if (VAR_9->monochrome) {
        VAR_9->color_range = FUNC_1(VAR_10);
        VAR_9->chroma_subsampling_x = 1;
        VAR_9->chroma_subsampling_y = 1;
        VAR_9->chroma_sample_position = 0;
        return 0;
    } else if (VAR_9->color_primaries == VAR_0 &&
               VAR_9->transfer_characteristics == VAR_4 &&
               VAR_9->matrix_coefficients == VAR_2) {
        VAR_9->chroma_subsampling_x = 0;
        VAR_9->chroma_subsampling_y = 0;
    } else {
        VAR_9->color_range = FUNC_1(VAR_10);

        if (VAR_9->profile == VAR_7) {
            VAR_9->chroma_subsampling_x = 1;
            VAR_9->chroma_subsampling_y = 1;
        } else if (VAR_9->profile == VAR_6) {
            VAR_9->chroma_subsampling_x = 0;
            VAR_9->chroma_subsampling_y = 0;
        } else {
            if (VAR_11) {
                VAR_9->chroma_subsampling_x = FUNC_1(VAR_10);
                if (VAR_9->chroma_subsampling_x)
                    VAR_9->chroma_subsampling_y = FUNC_1(VAR_10);
                else
                    VAR_9->chroma_subsampling_y = 0;
            } else {
                VAR_9->chroma_subsampling_x = 1;
                VAR_9->chroma_subsampling_y = 0;
            }
        }
        if (VAR_9->chroma_subsampling_x && VAR_9->chroma_subsampling_y)
            VAR_9->chroma_sample_position = FUNC_0(VAR_10, 2);
    }

    FUNC_2(VAR_10);

    return 0;
}
