
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int test_fn_count; int line; int name; int * fn; } ;
typedef TYPE_1__ test_desc_t ;
typedef int cmdline ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (TYPE_1__ const*) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (char*,int) ;

__attribute__((used)) static int FUNC_8(const test_desc_t *VAR_0)
{
    int VAR_1;
    char VAR_2[256] = {0};

    FUNC_4(VAR_0);
    while (FUNC_5(VAR_2) == 0) {
        FUNC_7(VAR_2, sizeof(VAR_2));
        if (FUNC_5(VAR_2) == 0) {

            FUNC_4(VAR_0);
        }
    }
    VAR_1 = FUNC_3((const char *) VAR_2) - 1;
    if (VAR_1 >= 0 && VAR_1 < VAR_0->test_fn_count) {
        FUNC_6(VAR_0->fn[VAR_1], VAR_0->name, VAR_0->line);
    } else {
        FUNC_1("Invalid selection, your should input number 1-");
        FUNC_2(VAR_0->test_fn_count);
        FUNC_0();
    }
    return VAR_1;
}
