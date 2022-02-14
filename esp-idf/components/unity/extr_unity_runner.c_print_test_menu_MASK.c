
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; char* desc; int test_fn_count; char** test_fn_name; struct TYPE_3__* next; } ;
typedef TYPE_1__ test_desc_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_5(void)
{
    int VAR_1 = 0;
    FUNC_1();
    FUNC_1();
    FUNC_3("Here's the test menu, pick your combo:");
    FUNC_1();
    for (const test_desc_t *VAR_2 = VAR_0;
            VAR_2 != ((void*)0);
            VAR_2 = VAR_2->next, ++VAR_1) {

        FUNC_3("(");
        FUNC_4(VAR_1 + 1);
        FUNC_3(")");
        FUNC_2();
        FUNC_3("\"");
        FUNC_3(VAR_2->name);
        FUNC_3("\" ");
        FUNC_3(VAR_2->desc);
        FUNC_1();

        if (VAR_2->test_fn_count > 1) {
            for (int VAR_3 = 0; VAR_3 < VAR_2->test_fn_count; VAR_3++) {
                FUNC_2();
                FUNC_3("(");
                FUNC_4(VAR_3 + 1);
                FUNC_3(")");
                FUNC_2();
                FUNC_3("\"");
                FUNC_3(VAR_2->test_fn_name[VAR_3]);
                FUNC_3("\"");
                FUNC_1();
            }
        }
    }
    FUNC_1();
    FUNC_3("Enter test for running.");
    FUNC_1();
    FUNC_0();
    return VAR_1;
}
