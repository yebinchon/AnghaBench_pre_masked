
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nchannels; int nsubbands; float* ts_buffer; float*** time_samples; int ts_size; } ;
typedef TYPE_1__ DCALbrDecoder ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (float**,int *,int) ;

__attribute__((used)) static int FUNC_1(DCALbrDecoder *VAR_2)
{

    int VAR_3 = VAR_1 + VAR_0 * 2;
    int VAR_4 = VAR_3 * VAR_2->nchannels * VAR_2->nsubbands;
    int VAR_5, VAR_6;
    float *VAR_7;


    FUNC_0(&VAR_2->ts_buffer, &VAR_2->ts_size, VAR_4 * sizeof(float));
    if (!VAR_2->ts_buffer)
        return -1;

    VAR_7 = VAR_2->ts_buffer + VAR_0;
    for (VAR_5 = 0; VAR_5 < VAR_2->nchannels; VAR_5++) {
        for (VAR_6 = 0; VAR_6 < VAR_2->nsubbands; VAR_6++) {
            VAR_2->time_samples[VAR_5][VAR_6] = VAR_7;
            VAR_7 += VAR_3;
        }
    }

    return 0;
}
