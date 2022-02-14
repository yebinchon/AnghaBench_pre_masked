
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ kind; } ;
typedef TYPE_1__ Typespec ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 () ;

Typespec *FUNC_3(void) {
    Typespec *VAR_2 = FUNC_2();
    if (FUNC_1(VAR_0)) {
        if (VAR_2->kind != VAR_1) {
            FUNC_0("Colons in parameters of func types must be preceded by names.");
        }
        VAR_2 = FUNC_2();
    }
    return VAR_2;
}
