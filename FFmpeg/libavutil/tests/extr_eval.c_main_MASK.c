
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (double*,char const* const,int ,int ,int *,int *,int *,int *,int *,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (double) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,char*) ;

int FUNC_5(int VAR_3, char **VAR_4)
{
    int VAR_5;
    double VAR_6;
    const char *const *VAR_7;
    static const char *const VAR_8[] = {
        "",
        "1;2",
        "-20",
        "-PI",
        "+PI",
        "1+(5-2)^(3-1)+1/2+sin(PI)-max(-2.2,-3.1)",
        "80G/80Gi",
        "1k",
        "1Gi",
        "1gi",
        "1GiFoo",
        "1k+1k",
        "1Gi*3foo",
        "foo",
        "foo(",
        "foo()",
        "foo)",
        "sin",
        "sin(",
        "sin()",
        "sin)",
        "sin 10",
        "sin(1,2,3)",
        "sin(1 )",
        "1",
        "1foo",
        "bar + PI + E + 100f*2 + foo",
        "13k + 12f - foo(1, 2)",
        "1gi",
        "1Gi",
        "st(0, 123)",
        "st(1, 123); ld(1)",
        "lte(0, 1)",
        "lte(1, 1)",
        "lte(1, 0)",
        "lt(0, 1)",
        "lt(1, 1)",
        "gt(1, 0)",
        "gt(2, 7)",
        "gte(122, 122)",

        "st(0, 1); while(lte(ld(0), 100), st(1, ld(1)+ld(0));st(0, ld(0)+1)); ld(1)",

        "st(1, 1); st(2, 2); st(0, 1); while(lte(ld(0),10), st(3, ld(1)+ld(2)); st(1, ld(2)); st(2, ld(3)); st(0, ld(0)+1)); ld(3)",
        "while(0, 10)",
        "st(0, 1); while(lte(ld(0),100), st(1, ld(1)+ld(0)); st(0, ld(0)+1))",
        "isnan(1)",
        "isnan(NAN)",
        "isnan(INF)",
        "isinf(1)",
        "isinf(NAN)",
        "isinf(INF)",
        "floor(NAN)",
        "floor(123.123)",
        "floor(-123.123)",
        "trunc(123.123)",
        "trunc(-123.123)",
        "ceil(123.123)",
        "ceil(-123.123)",
        "sqrt(1764)",
        "isnan(sqrt(-1))",
        "not(1)",
        "not(NAN)",
        "not(0)",
        "6.0206dB",
        "-3.0103dB",
        "pow(0,1.23)",
        "pow(PI,1.23)",
        "PI^1.23",
        "pow(-1,1.23)",
        "if(1, 2)",
        "if(1, 1, 2)",
        "if(0, 1, 2)",
        "ifnot(0, 23)",
        "ifnot(1, NaN) + if(0, 1)",
        "ifnot(1, 1, 2)",
        "ifnot(0, 1, 2)",
        "taylor(1, 1)",
        "taylor(eq(mod(ld(1),4),1)-eq(mod(ld(1),4),3), PI/2, 1)",
        "root(sin(ld(0))-1, 2)",
        "root(sin(ld(0))+6+sin(ld(0)/12)-log(ld(0)), 100)",
        "7000000B*random(0)",
        "squish(2)",
        "gauss(0.1)",
        "hypot(4,3)",
        "gcd(30,55)*print(min(9,1))",
        "bitor(42, 12)",
        "bitand(42, 12)",
        "bitand(NAN, 1)",
        "between(10, -3, 10)",
        "between(-4, -2, -1)",
        "between(1,2)",
        "clip(0, 2, 1)",
        "clip(0/0, 1, 2)",
        "clip(0, 0/0, 1)",
        ((void*)0)
    };
    int VAR_9;

    for (VAR_7 = VAR_8; *VAR_7; VAR_7++) {
        FUNC_3("Evaluating '%s'\n", *VAR_7);
        VAR_9 = FUNC_1(&VAR_6, *VAR_7,
                               VAR_1, VAR_2,
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0, ((void*)0));
        if (FUNC_2(VAR_6))
            FUNC_3("'%s' -> nan\n\n", *VAR_7);
        else
            FUNC_3("'%s' -> %f\n\n", *VAR_7, VAR_6);
        if (VAR_9 < 0)
            FUNC_3("av_expr_parse_and_eval failed\n");
    }

    VAR_9 = FUNC_1(&VAR_6, "1+(5-2)^(3-1)+1/2+sin(PI)-max(-2.2,-3.1)",
                           VAR_1, VAR_2,
                           ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0, ((void*)0));
    FUNC_3("%f == 12.7\n", VAR_6);
    if (VAR_9 < 0)
        FUNC_3("av_expr_parse_and_eval failed\n");
    VAR_9 = FUNC_1(&VAR_6, "80G/80Gi",
                           VAR_1, VAR_2,
                           ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0, ((void*)0));
    FUNC_3("%f == 0.931322575\n", VAR_6);
    if (VAR_9 < 0)
        FUNC_3("av_expr_parse_and_eval failed\n");

    if (VAR_3 > 1 && !FUNC_4(VAR_4[1], "-t")) {
        for (VAR_5 = 0; VAR_5 < 1050; VAR_5++) {
            VAR_0;
            VAR_9 = FUNC_1(&VAR_6, "1+(5-2)^(3-1)+1/2+sin(PI)-max(-2.2,-3.1)",
                                   VAR_1, VAR_2,
                                   ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0, ((void*)0));
            if (VAR_9 < 0)
                FUNC_3("av_expr_parse_and_eval failed\n");
            FUNC_0("av_expr_parse_and_eval");
        }
    }

    return 0;
}
