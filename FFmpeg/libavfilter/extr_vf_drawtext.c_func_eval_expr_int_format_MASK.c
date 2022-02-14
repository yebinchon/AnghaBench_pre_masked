
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int fmt_str ;
struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_6__ {int prng; int var_values; } ;
typedef TYPE_1__ DrawTextContext ;
typedef TYPE_2__ AVFilterContext ;
typedef int AVBPrint ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (double*,char*,int ,int ,int *,int *,int ,int ,int *,int ,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ,char*,...) ;
 int FUNC_4 (char*,int,char*,char) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (char*,char*,unsigned int*) ;
 int FUNC_8 (char*,char) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_9(AVFilterContext *VAR_10, AVBPrint *VAR_11,
                          char *VAR_12, unsigned VAR_13, char **VAR_14, int VAR_15)
{
    DrawTextContext *VAR_16 = VAR_10->priv;
    double VAR_17;
    int VAR_18;
    int VAR_19;
    unsigned int VAR_20 = 0;
    char VAR_21[30] = "%";







    VAR_19 = FUNC_2(&VAR_17, VAR_14[0], VAR_9, VAR_16->var_values,
                                 ((void*)0), ((void*)0), VAR_8, VAR_7,
                                 &VAR_16->prng, 0, VAR_10);
    if (VAR_19 < 0) {
        FUNC_3(VAR_10, VAR_1,
               "Expression '%s' for the expr text expansion function is not valid\n",
               VAR_14[0]);
        return VAR_19;
    }

    if (!FUNC_8("xXdu", VAR_14[1][0])) {
        FUNC_3(VAR_10, VAR_1, "Invalid format '%c' specified,"
                " allowed values: 'x', 'X', 'd', 'u'\n", VAR_14[1][0]);
        return FUNC_0(VAR_2);
    }

    if (VAR_13 == 3) {
        VAR_19 = FUNC_7(VAR_14[2], "%u", &VAR_20);
        if (VAR_19 != 1) {
            FUNC_3(VAR_10, VAR_1, "expr_int_format(): Invalid number of positions"
                    " to print: '%s'\n", VAR_14[2]);
            return FUNC_0(VAR_2);
        }
    }

    FUNC_5(VAR_3);
    VAR_18 = VAR_17;
    if ((VAR_19 = FUNC_6(VAR_4|VAR_5|VAR_6))) {
        FUNC_3(VAR_10, VAR_1, "Conversion of floating-point result to int failed. Control register: 0x%08x. Conversion result: %d\n", VAR_19, VAR_18);
        return FUNC_0(VAR_2);
    }

    if (VAR_13 == 3)
        FUNC_4(VAR_21, sizeof(VAR_21), "0%u", VAR_20);
    FUNC_4(VAR_21, sizeof(VAR_21), "%c", VAR_14[1][0]);

    FUNC_3(VAR_10, VAR_0, "Formatting value %f (expr '%s') with spec '%s'\n",
            VAR_17, VAR_14[0], VAR_21);

    FUNC_1(VAR_11, VAR_21, VAR_18);

    return 0;
}
