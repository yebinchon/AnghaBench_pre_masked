
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gsize ;
typedef int gconstpointer ;
typedef int GhbValue ;
typedef int GResource ;
typedef int GBytes ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,char*,int ,int *) ;
 int * FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,char*,int *) ;
 int * FUNC_7 (int ) ;
 int VAR_0 ;

void
FUNC_8()
{
    GhbValue *VAR_1;
    gsize VAR_2;
    GBytes *VAR_3;
    gconstpointer VAR_4;

    VAR_0 = FUNC_5();

    FUNC_4();
    GResource *VAR_5 = FUNC_3();

    VAR_3 = FUNC_2(VAR_5,
                    "/fr/handbrake/ghb/data/internal_defaults.json", 0, ((void*)0));
    VAR_4 = FUNC_0(VAR_3, &VAR_2);
    VAR_1 = FUNC_7(VAR_4);
    FUNC_1(VAR_3);
    FUNC_6(VAR_0, "internal-defaults", VAR_1);

    VAR_3 = FUNC_2(VAR_5,
                    "/fr/handbrake/ghb/data/widget.deps", 0, ((void*)0));
    VAR_4 = FUNC_0(VAR_3, &VAR_2);
    VAR_1 = FUNC_7(VAR_4);
    FUNC_1(VAR_3);
    FUNC_6(VAR_0, "widget-deps", VAR_1);

    VAR_3 = FUNC_2(VAR_5,
                    "/fr/handbrake/ghb/data/widget_reverse.deps", 0, ((void*)0));
    VAR_4 = FUNC_0(VAR_3, &VAR_2);
    VAR_1 = FUNC_7(VAR_4);
    FUNC_1(VAR_3);
    FUNC_6(VAR_0, "widget-reverse-deps", VAR_1);
}
