
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_4__ {int npcmblocks; unsigned int x96_subband_size; int predictor_history; scalar_t__ x96_subband_buffer; scalar_t__** x96_subband_samples; } ;
typedef TYPE_1__ DCACoreDecoder ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__*,unsigned int*,int) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(DCACoreDecoder *VAR_4)
{
    int VAR_5 = VAR_0 + VAR_4->npcmblocks;
    int VAR_6 = VAR_5 * VAR_1 * VAR_2;
    unsigned int VAR_7 = VAR_4->x96_subband_size;
    int VAR_8, VAR_9;


    FUNC_1(&VAR_4->x96_subband_buffer, &VAR_4->x96_subband_size,
                    VAR_6 * sizeof(int32_t));
    if (!VAR_4->x96_subband_buffer)
        return FUNC_0(VAR_3);

    if (VAR_7 != VAR_4->x96_subband_size) {
        for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
            for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
                VAR_4->x96_subband_samples[VAR_8][VAR_9] = VAR_4->x96_subband_buffer +
                    (VAR_8 * VAR_2 + VAR_9) * VAR_5 + VAR_0;
    }

    if (!VAR_4->predictor_history)
        FUNC_2(VAR_4);

    return 0;
}
