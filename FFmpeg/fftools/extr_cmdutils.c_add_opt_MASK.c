
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {char const* key; char const* val; TYPE_3__ const* opt; } ;
struct TYPE_9__ {int flags; } ;
struct TYPE_8__ {int nb_opts; TYPE_6__* opts; } ;
struct TYPE_7__ {TYPE_2__ cur_group; TYPE_2__ global_opts; } ;
typedef TYPE_1__ OptionParseContext ;
typedef TYPE_2__ OptionGroup ;
typedef TYPE_3__ OptionDef ;


 int FUNC_0 (TYPE_6__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(OptionParseContext *VAR_3, const OptionDef *VAR_4,
                    const char *VAR_5, const char *VAR_6)
{
    int VAR_7 = !(VAR_4->flags & (VAR_1 | VAR_2 | VAR_0));
    OptionGroup *VAR_8 = VAR_7 ? &VAR_3->global_opts : &VAR_3->cur_group;

    FUNC_0(VAR_8->opts, VAR_8->nb_opts);
    VAR_8->opts[VAR_8->nb_opts - 1].opt = VAR_4;
    VAR_8->opts[VAR_8->nb_opts - 1].key = VAR_5;
    VAR_8->opts[VAR_8->nb_opts - 1].val = VAR_6;
}
