
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* name; int test_fn_count; int line; int * fn; int desc; int file; } ;
typedef TYPE_1__ test_desc_t ;
struct TYPE_6__ {int CurrentDetail1; int TestFile; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_4__ VAR_0 ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__ const*) ;
 int * FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_8(const test_desc_t *VAR_1)
{
    FUNC_3("Running ");
    FUNC_3(VAR_1->name);
    FUNC_3("...");
    FUNC_2();

    FUNC_1();

    VAR_0.TestFile = VAR_1->file;
    VAR_0.CurrentDetail1 = VAR_1->desc;
    bool VAR_2 = FUNC_6(VAR_0.CurrentDetail1, "[leaks") != ((void*)0);
    bool VAR_3 = FUNC_6(VAR_0.CurrentDetail1, "[multi_device]") != ((void*)0);
    if (VAR_1->test_fn_count == 1) {
        FUNC_7(VAR_1->fn[0], VAR_1->name, VAR_1->line);
    } else {
        int VAR_4 = FUNC_5(VAR_1);
        if (VAR_2 && VAR_3 == 0) {
            if (VAR_4 != (VAR_1->test_fn_count - 1)) {

                FUNC_4();
            }
        }
    }

    if (VAR_2) {

        FUNC_0();
        FUNC_3("Enter next test, or 'enter' to see menu");
        FUNC_2();
        FUNC_1();
        FUNC_4();
    }
}
