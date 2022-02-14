
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbg_script_synth {int carrier; int beat; int vol; int type; } ;
struct sbg_parser {int log; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct sbg_parser*,double*) ;
 int FUNC_3 (struct sbg_parser*,int*) ;
 scalar_t__ FUNC_4 (int ,double,int,int*) ;

__attribute__((used)) static int FUNC_5(struct sbg_parser *VAR_2,
                                    struct sbg_script_synth *VAR_3)
{
    double VAR_4, VAR_5;
    int VAR_6, VAR_7, VAR_8;

    if (!FUNC_2(VAR_2, &VAR_4))
        return 0;
    if (!FUNC_2(VAR_2, &VAR_5))
        VAR_5 = 0;
    FUNC_1(FUNC_3(VAR_2, &VAR_8));
    if (FUNC_4(VAR_2->log, VAR_4, 1, &VAR_6) < 0 ||
        FUNC_4(VAR_2->log, VAR_5, 1, &VAR_7) < 0)
        return FUNC_0(VAR_0);
    VAR_3->type = VAR_1;
    VAR_3->carrier = VAR_6;
    VAR_3->beat = VAR_7;
    VAR_3->vol = VAR_8;
    return 1;
}
