
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nb_block_sizes; int fdsp; int * int_table; int * level_table; int * run_table; int * coef_vlc; int hgain_vlc; scalar_t__ use_noise_coding; int exp_vlc; scalar_t__ use_exp_vlc; int * mdct_ctx; } ;
typedef TYPE_1__ WMACodecContext ;
struct TYPE_5__ {TYPE_1__* priv_data; } ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(AVCodecContext *VAR_0)
{
    WMACodecContext *VAR_1 = VAR_0->priv_data;
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_1->nb_block_sizes; VAR_2++)
        FUNC_2(&VAR_1->mdct_ctx[VAR_2]);

    if (VAR_1->use_exp_vlc)
        FUNC_1(&VAR_1->exp_vlc);
    if (VAR_1->use_noise_coding)
        FUNC_1(&VAR_1->hgain_vlc);
    for (VAR_2 = 0; VAR_2 < 2; VAR_2++) {
        FUNC_1(&VAR_1->coef_vlc[VAR_2]);
        FUNC_0(&VAR_1->run_table[VAR_2]);
        FUNC_0(&VAR_1->level_table[VAR_2]);
        FUNC_0(&VAR_1->int_table[VAR_2]);
    }
    FUNC_0(&VAR_1->fdsp);

    return 0;
}
