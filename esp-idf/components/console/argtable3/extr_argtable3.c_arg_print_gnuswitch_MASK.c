
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arg_hdr {int flag; int mincount; char const** shortopts; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char const*,char const*) ;

__attribute__((used)) static
void FUNC_1(FILE *VAR_2, struct arg_hdr * *VAR_3)
{
    int VAR_4;
    const char *VAR_5 = " -%c";
    const char *VAR_6 = " [-%c";
    const char *VAR_7 = "";


    for(VAR_4 = 0;
        VAR_3[VAR_4] && !(VAR_3[VAR_4]->flag & VAR_1);
        VAR_4++)
    {

        if (VAR_3[VAR_4]->mincount < 1)
            continue;


        if (VAR_3[VAR_4]->shortopts == ((void*)0))
            continue;


        if (VAR_3[VAR_4]->flag & VAR_0)
            continue;


        FUNC_0(VAR_2, VAR_5, VAR_3[VAR_4]->shortopts[0]);
        VAR_5 = "%c";
        VAR_6 = "[%c";
    }


    for(VAR_4 = 0;
        VAR_3[VAR_4] && !(VAR_3[VAR_4]->flag & VAR_1);
        VAR_4++)
    {

        if (VAR_3[VAR_4]->mincount > 0)
            continue;


        if (VAR_3[VAR_4]->shortopts == ((void*)0))
            continue;


        if (VAR_3[VAR_4]->flag & VAR_0)
            continue;


        FUNC_0(VAR_2, VAR_6, VAR_3[VAR_4]->shortopts[0]);
        VAR_6 = "%c";
        VAR_7 = "]";
    }

    FUNC_0(VAR_2, "%s", VAR_7);
}
