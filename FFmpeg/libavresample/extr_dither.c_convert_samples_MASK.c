
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_9__ {scalar_t__ method; int samples_align; int (* quantize ) (int *,float* const,int *,int) ;TYPE_1__* state; } ;
struct TYPE_8__ {int noise_buf_size; int noise_buf_ptr; int * noise_buf; } ;
typedef TYPE_1__ DitherState ;
typedef TYPE_2__ DitherContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,int *,float* const,int) ;
 int FUNC_3 (int *,float* const,int *,int) ;

__attribute__((used)) static int FUNC_4(DitherContext *VAR_1, int16_t **VAR_2, float * const *VAR_3,
                           int VAR_4, int VAR_5)
{
    int VAR_6, VAR_7;
    int VAR_8 = FUNC_0(VAR_5, 16);

    for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
        DitherState *VAR_9 = &VAR_1->state[VAR_6];

        if (VAR_9->noise_buf_size < VAR_8) {
            VAR_7 = FUNC_1(VAR_1, VAR_9, VAR_5);
            if (VAR_7 < 0)
                return VAR_7;
        } else if (VAR_9->noise_buf_size - VAR_9->noise_buf_ptr < VAR_8) {
            VAR_9->noise_buf_ptr = 0;
        }

        if (VAR_1->method == VAR_0) {
            FUNC_2(VAR_1, VAR_9, VAR_2[VAR_6], VAR_3[VAR_6], VAR_5);
        } else {
            VAR_1->quantize(VAR_2[VAR_6], VAR_3[VAR_6],
                        &VAR_9->noise_buf[VAR_9->noise_buf_ptr],
                        FUNC_0(VAR_5, VAR_1->samples_align));
        }

        VAR_9->noise_buf_ptr += VAR_8;
    }

    return 0;
}
