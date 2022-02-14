
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int type; } ;
struct TYPE_11__ {scalar_t__ kind; int type; int val; } ;
typedef TYPE_1__ Sym ;
typedef int SrcPos ;
typedef TYPE_2__ Operand ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,char const*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_2__ FUNC_3 (int ,int ) ;
 TYPE_2__ FUNC_4 (TYPE_2__) ;
 TYPE_2__ FUNC_5 (int ) ;
 TYPE_2__ VAR_3 ;
 TYPE_2__ FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 (char const*) ;

Operand FUNC_8(SrcPos VAR_4, const char *VAR_5) {
    Sym *VAR_6 = FUNC_7(VAR_5);
    if (!VAR_6) {
        FUNC_0(VAR_4, "Unresolved name '%s'", VAR_5);
    }
    if (VAR_6->kind == VAR_2) {
        Operand VAR_7 = FUNC_5(VAR_6->type);
        if (FUNC_1(VAR_7.type) && !FUNC_2(VAR_7.type)) {
            VAR_7 = FUNC_4(VAR_7);
        }
        return VAR_7;
    } else if (VAR_6->kind == VAR_0) {
        return FUNC_3(VAR_6->type, VAR_6->val);
    } else if (VAR_6->kind == VAR_1) {
        return FUNC_6(VAR_6->type);
    } else {
        FUNC_0(VAR_4, "%s must be a var or const", VAR_5);
        return VAR_3;
    }
}
