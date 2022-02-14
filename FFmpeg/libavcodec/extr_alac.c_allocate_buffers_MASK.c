
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {int max_samples_per_frame; int direct_output; int sample_size; int avctx; int ** extra_bits_buffer; int ** output_samples_buffer; int ** predict_error_buffer; int channels; } ;
typedef TYPE_1__ ALACContext ;


 int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int *,unsigned int,int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(ALACContext *VAR_3)
{
    int VAR_4;
    unsigned VAR_5 = VAR_3->max_samples_per_frame * sizeof(int32_t);

    for (VAR_4 = 0; VAR_4 < 2; VAR_4++) {
        VAR_3->predict_error_buffer[VAR_4] = ((void*)0);
        VAR_3->output_samples_buffer[VAR_4] = ((void*)0);
        VAR_3->extra_bits_buffer[VAR_4] = ((void*)0);
    }

    for (VAR_4 = 0; VAR_4 < FUNC_1(VAR_3->channels, 2); VAR_4++) {
        FUNC_2(VAR_3->avctx, VAR_3->predict_error_buffer[VAR_4],
                         VAR_5, VAR_2);

        VAR_3->direct_output = VAR_3->sample_size > 16;
        if (!VAR_3->direct_output) {
            FUNC_2(VAR_3->avctx, VAR_3->output_samples_buffer[VAR_4],
                             VAR_5 + VAR_0, VAR_2);
        }

        FUNC_2(VAR_3->avctx, VAR_3->extra_bits_buffer[VAR_4],
                         VAR_5 + VAR_0, VAR_2);
    }
    return 0;
buf_alloc_fail:
    FUNC_3(VAR_3->avctx);
    return FUNC_0(VAR_1);
}
