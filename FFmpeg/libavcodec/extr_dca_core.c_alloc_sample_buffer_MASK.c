
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_4__ {int npcmblocks; unsigned int subband_size; int predictor_history; scalar_t__ subband_buffer; scalar_t__ lfe_samples; scalar_t__** subband_samples; } ;
typedef TYPE_1__ DCACoreDecoder ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__*,unsigned int*,int) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(DCACoreDecoder *VAR_5)
{
    int VAR_6 = VAR_0 + VAR_5->npcmblocks;
    int VAR_7 = VAR_6 * VAR_1 * VAR_3;
    int VAR_8 = VAR_2 + VAR_5->npcmblocks / 2;
    unsigned int VAR_9 = VAR_5->subband_size;
    int VAR_10, VAR_11;


    FUNC_1(&VAR_5->subband_buffer, &VAR_5->subband_size,
                    (VAR_7 + VAR_8) * sizeof(int32_t));
    if (!VAR_5->subband_buffer)
        return FUNC_0(VAR_4);

    if (VAR_9 != VAR_5->subband_size) {
        for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++)
            for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++)
                VAR_5->subband_samples[VAR_10][VAR_11] = VAR_5->subband_buffer +
                    (VAR_10 * VAR_3 + VAR_11) * VAR_6 + VAR_0;
        VAR_5->lfe_samples = VAR_5->subband_buffer + VAR_7;
    }

    if (!VAR_5->predictor_history)
        FUNC_2(VAR_5);

    return 0;
}
