
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t bs_num_env; int* e_a; int bs_frame_class; int bs_num_noise; int bs_amp_res; int * t_q; int * t_env; int * bs_freq_res; int t_env_num_env_old; } ;
typedef TYPE_1__ SBRData ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static void FUNC_1(SBRData *VAR_0, const SBRData *VAR_1) {

    VAR_0->bs_freq_res[0] = VAR_0->bs_freq_res[VAR_0->bs_num_env];
    VAR_0->t_env_num_env_old = VAR_0->t_env[VAR_0->bs_num_env];
    VAR_0->e_a[0] = -(VAR_0->e_a[1] != VAR_0->bs_num_env);


    FUNC_0(VAR_0->bs_freq_res+1, VAR_1->bs_freq_res+1, sizeof(VAR_0->bs_freq_res)-sizeof(*VAR_0->bs_freq_res));
    FUNC_0(VAR_0->t_env, VAR_1->t_env, sizeof(VAR_0->t_env));
    FUNC_0(VAR_0->t_q, VAR_1->t_q, sizeof(VAR_0->t_q));
    VAR_0->bs_num_env = VAR_1->bs_num_env;
    VAR_0->bs_amp_res = VAR_1->bs_amp_res;
    VAR_0->bs_num_noise = VAR_1->bs_num_noise;
    VAR_0->bs_frame_class = VAR_1->bs_frame_class;
    VAR_0->e_a[1] = VAR_1->e_a[1];
}
