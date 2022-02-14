
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_3__ const* group_def; } ;
struct TYPE_10__ {char* member_0; } ;
struct TYPE_8__ {char* arg; TYPE_3__ const* group_def; } ;
struct TYPE_9__ {int nb_groups; TYPE_1__ global_opts; TYPE_7__* groups; } ;
typedef TYPE_2__ OptionParseContext ;
typedef TYPE_3__ OptionGroupDef ;


 TYPE_7__* FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void FUNC_4(OptionParseContext *VAR_0,
                               const OptionGroupDef *VAR_1, int VAR_2)
{
    static const OptionGroupDef VAR_3 = { "global" };
    int VAR_4;

    FUNC_3(VAR_0, 0, sizeof(*VAR_0));

    VAR_0->nb_groups = VAR_2;
    VAR_0->groups = FUNC_0(VAR_0->nb_groups, sizeof(*VAR_0->groups));
    if (!VAR_0->groups)
        FUNC_1(1);

    for (VAR_4 = 0; VAR_4 < VAR_0->nb_groups; VAR_4++)
        VAR_0->groups[VAR_4].group_def = &VAR_1[VAR_4];

    VAR_0->global_opts.group_def = &VAR_3;
    VAR_0->global_opts.arg = "";

    FUNC_2();
}
