
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int desc; struct TYPE_4__* next; } ;
typedef TYPE_1__ test_desc_t ;


 int FUNC_0 () ;
 int FUNC_1 (char const*) ;
 TYPE_1__* VAR_0 ;
 int * FUNC_2 (int ,char const*) ;
 int FUNC_3 (TYPE_1__ const*) ;

void FUNC_4(const char *VAR_1, bool VAR_2)
{
    FUNC_1("Running tests ");
    if (VAR_2) {
        FUNC_1("NOT ");
    }
    FUNC_1("matching '");
    FUNC_1(VAR_1);
    FUNC_1("'...");
    FUNC_0();

    for (const test_desc_t *VAR_3 = VAR_0; VAR_3 != ((void*)0); VAR_3 = VAR_3->next) {
        if ((FUNC_2(VAR_3->desc, VAR_1) != ((void*)0)) == !VAR_2) {
            FUNC_3(VAR_3);
        }
    }
}
