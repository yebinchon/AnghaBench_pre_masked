
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * samples_hb; int * samples_up; int * samples_az; int * fixed_gain; int * pitch_gain; int * excitation_buf; } ;
typedef TYPE_1__ AMRWBContext ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static void FUNC_1(AMRWBContext *VAR_6)
{
    FUNC_0(&VAR_6->excitation_buf[0], &VAR_6->excitation_buf[VAR_1],
            (VAR_0 + VAR_3 + 1) * sizeof(float));

    FUNC_0(&VAR_6->pitch_gain[1], &VAR_6->pitch_gain[0], 5 * sizeof(float));
    FUNC_0(&VAR_6->fixed_gain[1], &VAR_6->fixed_gain[0], 1 * sizeof(float));

    FUNC_0(&VAR_6->samples_az[0], &VAR_6->samples_az[VAR_1],
            VAR_3 * sizeof(float));
    FUNC_0(&VAR_6->samples_up[0], &VAR_6->samples_up[VAR_1],
            VAR_5 * sizeof(float));
    FUNC_0(&VAR_6->samples_hb[0], &VAR_6->samples_hb[VAR_2],
            VAR_4 * sizeof(float));
}
