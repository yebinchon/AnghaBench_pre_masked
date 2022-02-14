
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_4__ {int (* apply_qmf ) (int *,int*) ;} ;
struct TYPE_5__ {int prev_samples_pos; int * prev_samples; TYPE_1__ dsp; } ;
typedef TYPE_2__ G722Context ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int*) ;

__attribute__((used)) static inline void FUNC_2(G722Context *VAR_1, const int16_t *VAR_2,
                                  int *VAR_3, int *VAR_4)
{
    int VAR_5[2];
    VAR_1->prev_samples[VAR_1->prev_samples_pos++] = VAR_2[0];
    VAR_1->prev_samples[VAR_1->prev_samples_pos++] = VAR_2[1];
    VAR_1->dsp.apply_qmf(VAR_1->prev_samples + VAR_1->prev_samples_pos - 24, VAR_5);
    *VAR_3 = (VAR_5[0] + VAR_5[1]) >> 14;
    *VAR_4 = (VAR_5[0] - VAR_5[1]) >> 14;
    if (VAR_1->prev_samples_pos >= VAR_0) {
        FUNC_0(VAR_1->prev_samples,
                VAR_1->prev_samples + VAR_1->prev_samples_pos - 22,
                22 * sizeof(VAR_1->prev_samples[0]));
        VAR_1->prev_samples_pos = 22;
    }
}
