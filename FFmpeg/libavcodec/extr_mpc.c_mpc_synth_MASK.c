
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_3__ {int ** sb_samples; int * synth_buf_offset; int * synth_buf; int mpadsp; } ;
typedef TYPE_1__ MPCContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *,int ,int*,int *,int,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(MPCContext *VAR_2, int16_t **VAR_3, int VAR_4)
{
    int VAR_5 = 0;
    int VAR_6, VAR_7;

    for(VAR_7 = 0; VAR_7 < VAR_4; VAR_7++){
        for(VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
            FUNC_0(&VAR_2->mpadsp,
                                VAR_2->synth_buf[VAR_7], &(VAR_2->synth_buf_offset[VAR_7]),
                                VAR_1, &VAR_5,
                                VAR_3[VAR_7] + 32 * VAR_6, 1,
                                VAR_2->sb_samples[VAR_7][VAR_6]);
        }
    }
}
