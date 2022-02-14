
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {char const* arg; int * resample_opts; int * format_opts; int * codec_opts; int * swr_opts; int * sws_dict; int group_def; } ;
struct TYPE_8__ {int nb_groups; int group_def; TYPE_3__* groups; } ;
struct TYPE_7__ {TYPE_3__ cur_group; TYPE_2__* groups; } ;
typedef TYPE_1__ OptionParseContext ;
typedef TYPE_2__ OptionGroupList ;
typedef TYPE_3__ OptionGroup ;


 int FUNC_0 (TYPE_3__*,int) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;

__attribute__((used)) static void FUNC_3(OptionParseContext *VAR_5, int VAR_6,
                         const char *VAR_7)
{
    OptionGroupList *VAR_8 = &VAR_5->groups[VAR_6];
    OptionGroup *VAR_9;

    FUNC_0(VAR_8->groups, VAR_8->nb_groups);
    VAR_9 = &VAR_8->groups[VAR_8->nb_groups - 1];

    *VAR_9 = VAR_5->cur_group;
    VAR_9->arg = VAR_7;
    VAR_9->group_def = VAR_8->group_def;
    VAR_9->sws_dict = VAR_4;
    VAR_9->swr_opts = VAR_3;
    VAR_9->codec_opts = VAR_0;
    VAR_9->format_opts = VAR_1;
    VAR_9->resample_opts = VAR_2;

    VAR_0 = ((void*)0);
    VAR_1 = ((void*)0);
    VAR_2 = ((void*)0);
    VAR_4 = ((void*)0);
    VAR_3 = ((void*)0);
    FUNC_1();

    FUNC_2(&VAR_5->cur_group, 0, sizeof(VAR_5->cur_group));
}
