
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbg_script_synth {int carrier; int beat; int vol; int type; } ;
struct sbg_parser {int log; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct sbg_parser*,double*) ;
 int FUNC_3 (struct sbg_parser*,char*,int) ;
 int FUNC_4 (struct sbg_parser*,int*) ;
 scalar_t__ FUNC_5 (int ,double,int,int*) ;

__attribute__((used)) static int FUNC_6(struct sbg_parser *VAR_3,
                                    struct sbg_script_synth *VAR_4)
{
    double VAR_5, VAR_6;
    int VAR_7, VAR_8, VAR_9;

    if (!FUNC_3(VAR_3, "spin:", 5))
        return 0;
    if (!FUNC_2(VAR_3, &VAR_5))
        return VAR_0;
    if (!FUNC_2(VAR_3, &VAR_6))
        return VAR_0;
    FUNC_1(FUNC_4(VAR_3, &VAR_9));
    if (FUNC_5(VAR_3->log, VAR_5, 1, &VAR_7) < 0 ||
        FUNC_5(VAR_3->log, VAR_6, 1, &VAR_8) < 0)
        return FUNC_0(VAR_1);
    VAR_4->type = VAR_2;
    VAR_4->carrier = VAR_7;
    VAR_4->beat = VAR_8;
    VAR_4->vol = VAR_9;
    return 1;
}
