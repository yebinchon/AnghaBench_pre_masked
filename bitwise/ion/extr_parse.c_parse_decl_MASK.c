
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int notes; } ;
typedef int Notes ;
typedef TYPE_1__ Decl ;


 int FUNC_0 (char*,int ) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;

Decl *FUNC_4(void) {
    Notes VAR_0 = FUNC_2();
    Decl *VAR_1 = FUNC_1();
    if (!VAR_1) {
        FUNC_0("Expected declaration keyword, got %s", FUNC_3());
    }
    VAR_1->notes = VAR_0;
    return VAR_1;
}
