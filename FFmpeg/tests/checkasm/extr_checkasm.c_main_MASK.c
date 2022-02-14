
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ flag; int * name; } ;
struct TYPE_5__ {char* bench_pattern; char* test_name; int num_failed; int num_checked; int funcs; int bench_pattern_len; } ;
struct TYPE_4__ {int func; } ;


 int FUNC_0 () ;
 unsigned int FUNC_1 () ;
 int FUNC_2 (int *,unsigned int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,...) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,char*,int) ;
 unsigned int FUNC_13 (char*,int *,int) ;
 TYPE_1__* VAR_6 ;

int FUNC_14(int VAR_7, char *VAR_8[])
{
    unsigned int VAR_9 = FUNC_1();
    int VAR_10, VAR_11 = 0;






    if (!VAR_6[0].func || !VAR_3[0].flag) {
        FUNC_7(VAR_5, "checkasm: no tests to perform\n");
        return 0;
    }

    while (VAR_7 > 1) {
        if (!FUNC_12(VAR_8[1], "--bench", 7)) {
            if (FUNC_3() < 0)
                return 1;
            if (VAR_8[1][7] == '=') {
                VAR_4.bench_pattern = VAR_8[1] + 8;
                VAR_4.bench_pattern_len = FUNC_11(VAR_4.bench_pattern);
            } else
                VAR_4.bench_pattern = "";
        } else if (!FUNC_12(VAR_8[1], "--test=", 7)) {
            VAR_4.test_name = VAR_8[1] + 7;
        } else {
            VAR_9 = FUNC_13(VAR_8[1], ((void*)0), 10);
        }

        VAR_7--;
        VAR_8++;
    }

    FUNC_7(VAR_5, "checkasm: using random seed %u\n", VAR_9);
    FUNC_2(&VAR_2, VAR_9);

    FUNC_5(((void*)0), 0);
    for (VAR_10 = 0; VAR_3[VAR_10].flag; VAR_10++)
        FUNC_5(VAR_3[VAR_10].name, VAR_3[VAR_10].flag);

    if (VAR_4.num_failed) {
        FUNC_7(VAR_5, "checkasm: %d of %d tests have failed\n", VAR_4.num_failed, VAR_4.num_checked);
        VAR_11 = 1;
    } else {
        FUNC_7(VAR_5, "checkasm: all %d tests passed\n", VAR_4.num_checked);
        if (VAR_4.bench_pattern) {
            FUNC_10(VAR_4.funcs);
        }
    }

    FUNC_6(VAR_4.funcs);
    FUNC_4();
    return VAR_11;
}
