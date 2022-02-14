
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int num_args; int pos; TYPE_1__* args; } ;
struct TYPE_8__ {int ull; } ;
struct TYPE_9__ {TYPE_2__ val; } ;
struct TYPE_7__ {int expr; } ;
typedef TYPE_3__ Operand ;
typedef TYPE_4__ Note ;


 int FUNC_0 (int ,char*) ;
 TYPE_3__ FUNC_1 (int ) ;

void FUNC_2(Note VAR_0) {
    if (VAR_0.num_args != 1) {
        FUNC_0(VAR_0.pos, "#static_assert takes 1 argument");
    }
    Operand VAR_1 = FUNC_1(VAR_0.args[0].expr);
    if (!VAR_1.val.ull) {
        FUNC_0(VAR_0.pos, "#static_assert failed");
    }
}
