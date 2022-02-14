
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbg_script_definition {char type; int elements; int nb_elements; } ;
struct sbg_parser {int nb_block_tseq; } ;


 int VAR_0 ;
 int FUNC_0 (struct sbg_parser*,char) ;
 int FUNC_1 (struct sbg_parser*) ;
 int FUNC_2 (struct sbg_parser*) ;
 int FUNC_3 (struct sbg_parser*,int) ;

__attribute__((used)) static int FUNC_4(struct sbg_parser *VAR_1,
                           struct sbg_script_definition *VAR_2)
{
    int VAR_3, VAR_4;

    FUNC_2(VAR_1);
    if (!FUNC_1(VAR_1))
        return VAR_0;
    VAR_4 = VAR_1->nb_block_tseq;
    while (1) {
        VAR_3 = FUNC_3(VAR_1, 1);
        if (VAR_3 < 0)
            return VAR_3;
        if (!VAR_3)
            break;
    }
    if (!FUNC_0(VAR_1, '}'))
        return VAR_0;
    FUNC_2(VAR_1);
    if (!FUNC_1(VAR_1))
        return VAR_0;
    VAR_2->type = 'B';
    VAR_2->elements = VAR_4;
    VAR_2->nb_elements = VAR_1->nb_block_tseq - VAR_4;
    if (!VAR_2->nb_elements)
        return VAR_0;
    return 1;
}
