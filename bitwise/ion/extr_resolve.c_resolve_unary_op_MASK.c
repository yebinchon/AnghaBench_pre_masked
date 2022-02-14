
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int TokenKind ;
struct TYPE_6__ {int val; int type; scalar_t__ is_const; } ;
typedef TYPE_1__ Operand ;


 int FUNC_0 (int ,int ,int ) ;
 TYPE_1__ FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;

Operand FUNC_3(TokenKind VAR_0, Operand VAR_1) {
    FUNC_2(&VAR_1);
    if (VAR_1.is_const) {
        return FUNC_1(VAR_1.type, FUNC_0(VAR_0, VAR_1.type, VAR_1.val));
    } else {
        return VAR_1;
    }
}
