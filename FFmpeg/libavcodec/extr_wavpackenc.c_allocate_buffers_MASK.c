
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int block_samples; int flags; int ** temp_buffer; int ** temp_buffer_size; int * best_buffer; int * best_buffer_size; } ;
typedef TYPE_1__ WavPackEncodeContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static int FUNC_2(WavPackEncodeContext *VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
        FUNC_1(&VAR_2->best_buffer[0], &VAR_2->best_buffer_size[0],
                              VAR_2->block_samples * 4);
        if (!VAR_2->best_buffer[0])
            return FUNC_0(VAR_0);

        FUNC_1(&VAR_2->temp_buffer[VAR_3][0], &VAR_2->temp_buffer_size[VAR_3][0],
                              VAR_2->block_samples * 4);
        if (!VAR_2->temp_buffer[VAR_3][0])
            return FUNC_0(VAR_0);
        if (!(VAR_2->flags & VAR_1)) {
            FUNC_1(&VAR_2->best_buffer[1], &VAR_2->best_buffer_size[1],
                                  VAR_2->block_samples * 4);
            if (!VAR_2->best_buffer[1])
                return FUNC_0(VAR_0);

            FUNC_1(&VAR_2->temp_buffer[VAR_3][1], &VAR_2->temp_buffer_size[VAR_3][1],
                                  VAR_2->block_samples * 4);
            if (!VAR_2->temp_buffer[VAR_3][1])
                return FUNC_0(VAR_0);
        }
    }

    return 0;
}
