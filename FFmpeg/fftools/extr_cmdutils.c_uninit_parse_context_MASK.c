
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int nb_groups; struct TYPE_10__* groups; int swr_opts; int sws_dict; int resample_opts; int format_opts; int codec_opts; struct TYPE_10__* opts; } ;
struct TYPE_8__ {TYPE_4__* opts; } ;
struct TYPE_7__ {TYPE_4__* opts; } ;
struct TYPE_9__ {int nb_groups; TYPE_2__ global_opts; TYPE_1__ cur_group; TYPE_4__* groups; } ;
typedef TYPE_3__ OptionParseContext ;
typedef TYPE_4__ OptionGroupList ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_4__**) ;
 int FUNC_2 () ;

void FUNC_3(OptionParseContext *VAR_0)
{
    int VAR_1, VAR_2;

    for (VAR_1 = 0; VAR_1 < VAR_0->nb_groups; VAR_1++) {
        OptionGroupList *VAR_3 = &VAR_0->groups[VAR_1];

        for (VAR_2 = 0; VAR_2 < VAR_3->nb_groups; VAR_2++) {
            FUNC_1(&VAR_3->groups[VAR_2].opts);
            FUNC_0(&VAR_3->groups[VAR_2].codec_opts);
            FUNC_0(&VAR_3->groups[VAR_2].format_opts);
            FUNC_0(&VAR_3->groups[VAR_2].resample_opts);

            FUNC_0(&VAR_3->groups[VAR_2].sws_dict);
            FUNC_0(&VAR_3->groups[VAR_2].swr_opts);
        }
        FUNC_1(&VAR_3->groups);
    }
    FUNC_1(&VAR_0->groups);

    FUNC_1(&VAR_0->cur_group.opts);
    FUNC_1(&VAR_0->global_opts.opts);

    FUNC_2();
}
