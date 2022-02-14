
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int flags; int help; } ;
struct TYPE_8__ {int val; int key; TYPE_4__* opt; } ;
struct TYPE_7__ {int nb_opts; int arg; TYPE_1__* group_def; TYPE_3__* opts; } ;
struct TYPE_6__ {int flags; int name; } ;
typedef TYPE_2__ OptionGroup ;
typedef TYPE_3__ Option ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,char*,...) ;
 int FUNC_2 (void*,TYPE_4__*,int ,int ) ;

int FUNC_3(void *VAR_3, OptionGroup *VAR_4)
{
    int VAR_5, VAR_6;

    FUNC_1(((void*)0), VAR_0, "Parsing a group of options: %s %s.\n",
           VAR_4->group_def->name, VAR_4->arg);

    for (VAR_5 = 0; VAR_5 < VAR_4->nb_opts; VAR_5++) {
        Option *VAR_7 = &VAR_4->opts[VAR_5];

        if (VAR_4->group_def->flags &&
            !(VAR_4->group_def->flags & VAR_7->opt->flags)) {
            FUNC_1(((void*)0), VAR_1, "Option %s (%s) cannot be applied to "
                   "%s %s -- you are trying to apply an input option to an "
                   "output file or vice versa. Move this option before the "
                   "file it belongs to.\n", VAR_7->key, VAR_7->opt->help,
                   VAR_4->group_def->name, VAR_4->arg);
            return FUNC_0(VAR_2);
        }

        FUNC_1(((void*)0), VAR_0, "Applying option %s (%s) with argument %s.\n",
               VAR_7->key, VAR_7->opt->help, VAR_7->val);

        VAR_6 = FUNC_2(VAR_3, VAR_7->opt, VAR_7->key, VAR_7->val);
        if (VAR_6 < 0)
            return VAR_6;
    }

    FUNC_1(((void*)0), VAR_0, "Successfully parsed a group of options.\n");

    return 0;
}
