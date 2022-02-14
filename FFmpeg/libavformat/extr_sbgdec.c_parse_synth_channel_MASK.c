
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sbg_script_synth {int dummy; } ;
struct TYPE_2__ {int nb_synth; int synth; } ;
struct sbg_parser {TYPE_1__ scs; int nb_synth_max; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct sbg_script_synth* FUNC_1 (void**,int,int *,int *) ;
 int FUNC_2 (struct sbg_parser*,char) ;
 int FUNC_3 (struct sbg_parser*,struct sbg_script_synth*) ;
 int FUNC_4 (struct sbg_parser*,struct sbg_script_synth*) ;
 int FUNC_5 (struct sbg_parser*,struct sbg_script_synth*) ;
 int FUNC_6 (struct sbg_parser*,struct sbg_script_synth*) ;
 int FUNC_7 (struct sbg_parser*,struct sbg_script_synth*) ;

__attribute__((used)) static int FUNC_8(struct sbg_parser *VAR_1)
{
    int VAR_2;
    struct sbg_script_synth *VAR_3;

    VAR_3 = FUNC_1((void **)&VAR_1->scs.synth, sizeof(*VAR_3),
                             &VAR_1->scs.nb_synth, &VAR_1->nb_synth_max);
    if (!VAR_3)
        return FUNC_0(VAR_0);
    VAR_2 = FUNC_2(VAR_1, '-');
    if (!VAR_2)
        VAR_2 = FUNC_5(VAR_1, VAR_3);
    if (!VAR_2)
        VAR_2 = FUNC_3(VAR_1, VAR_3);
    if (!VAR_2)
        VAR_2 = FUNC_4(VAR_1, VAR_3);
    if (!VAR_2)
        VAR_2 = FUNC_7(VAR_1, VAR_3);

    if (!VAR_2)
        VAR_2 = FUNC_6(VAR_1, VAR_3);
    if (VAR_2 <= 0)
        VAR_1->scs.nb_synth--;
    return VAR_2;
}
