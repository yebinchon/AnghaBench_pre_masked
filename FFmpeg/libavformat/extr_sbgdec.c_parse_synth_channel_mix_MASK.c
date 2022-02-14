
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbg_script_synth {int vol; int type; } ;
struct sbg_parser {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct sbg_parser*,char*,int) ;
 int FUNC_2 (struct sbg_parser*,int*) ;

__attribute__((used)) static int FUNC_3(struct sbg_parser *VAR_1,
                                   struct sbg_script_synth *VAR_2)
{
    int VAR_3;

    if (!FUNC_1(VAR_1, "mix", 3))
        return 0;
    FUNC_0(FUNC_2(VAR_1, &VAR_3));
    VAR_2->type = VAR_0;
    VAR_2->vol = VAR_3;
    return 1;
}
