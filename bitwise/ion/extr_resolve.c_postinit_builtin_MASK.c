
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ kind; int type; } ;
typedef TYPE_1__ Sym ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;

void FUNC_4(void) {
    FUNC_0(VAR_2 == VAR_1);
    Sym *VAR_5 = FUNC_1(FUNC_2("Allocator"));
    if (VAR_5) {
        FUNC_0(VAR_5->kind == VAR_0);
        VAR_3 = VAR_5->type;
        VAR_4 = FUNC_3(VAR_3);
    }
}
