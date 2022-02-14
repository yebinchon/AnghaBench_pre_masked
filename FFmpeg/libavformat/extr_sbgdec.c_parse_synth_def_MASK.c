
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sbg_script_definition {char type; int elements; int nb_elements; } ;
struct TYPE_2__ {int nb_synth; } ;
struct sbg_parser {TYPE_1__ scs; } ;


 int VAR_0 ;
 int FUNC_0 (struct sbg_parser*) ;
 int FUNC_1 (struct sbg_parser*) ;
 int FUNC_2 (struct sbg_parser*) ;

__attribute__((used)) static int FUNC_3(struct sbg_parser *VAR_1,
                           struct sbg_script_definition *VAR_2)
{
    int VAR_3, VAR_4;

    VAR_4 = VAR_1->scs.nb_synth;
    while (1) {
        VAR_3 = FUNC_2(VAR_1);
        if (VAR_3 < 0)
            return VAR_3;
        if (!VAR_3 || !FUNC_1(VAR_1))
            break;
    }
    FUNC_1(VAR_1);
    if (VAR_4 == VAR_1->scs.nb_synth)
        return VAR_0;
    if (!FUNC_0(VAR_1))
        return VAR_0;
    VAR_2->type = 'S';
    VAR_2->elements = VAR_4;
    VAR_2->nb_elements = VAR_1->scs.nb_synth - VAR_4;
    return 1;
}
