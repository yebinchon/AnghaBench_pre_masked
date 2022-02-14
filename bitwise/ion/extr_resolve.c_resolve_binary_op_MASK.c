
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int TokenKind ;
struct TYPE_7__ {int type; int val; scalar_t__ is_const; } ;
typedef TYPE_1__ Operand ;


 int FUNC_0 (int ,int ,int ,int ) ;
 TYPE_1__ FUNC_1 (int ,int ) ;
 TYPE_1__ FUNC_2 (int ) ;

Operand FUNC_3(TokenKind VAR_0, Operand VAR_1, Operand VAR_2) {
    if (VAR_1.is_const && VAR_2.is_const) {
        return FUNC_1(VAR_1.type, FUNC_0(VAR_0, VAR_1.type, VAR_1.val, VAR_2.val));
    } else {
        return FUNC_2(VAR_1.type);
    }
}
