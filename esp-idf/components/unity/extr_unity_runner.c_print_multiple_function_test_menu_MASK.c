
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; int test_fn_count; char** test_fn_name; } ;
typedef TYPE_1__ test_desc_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(const test_desc_t *VAR_0)
{
    FUNC_2(VAR_0->name);
    FUNC_0();
    for (int VAR_1 = 0; VAR_1 < VAR_0->test_fn_count; VAR_1++) {
        FUNC_1();
        FUNC_2("(");
        FUNC_3(VAR_1 + 1);
        FUNC_2(")");
        FUNC_1();
        FUNC_2("\"");
        FUNC_2(VAR_0->test_fn_name[VAR_1]);
        FUNC_2("\"");
        FUNC_0();
    }
}
