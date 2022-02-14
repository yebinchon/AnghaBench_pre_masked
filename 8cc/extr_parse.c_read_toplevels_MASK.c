
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int Vector ;
struct TYPE_2__ {scalar_t__ kind; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int * FUNC_1 () ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 () ;
 int * VAR_1 ;
 int FUNC_5 (int *,int ) ;

Vector *FUNC_6() {
    VAR_1 = FUNC_1();
    for (;;) {
        if (FUNC_2()->kind == VAR_0)
            return VAR_1;
        if (FUNC_0())
            FUNC_5(VAR_1, FUNC_4());
        else
            FUNC_3(VAR_1, 1);
    }
}
