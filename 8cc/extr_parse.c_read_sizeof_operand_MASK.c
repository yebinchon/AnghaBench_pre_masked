
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ kind; int size; } ;
typedef TYPE_1__ Type ;
typedef int Node ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int ,int) ;
 TYPE_1__* FUNC_2 () ;
 int VAR_2 ;

__attribute__((used)) static Node *FUNC_3() {
    Type *VAR_3 = FUNC_2();

    int VAR_4 = (VAR_3->kind == VAR_1 || VAR_3->kind == VAR_0) ? 1 : VAR_3->size;
    FUNC_0(0 <= VAR_4);
    return FUNC_1(VAR_2, VAR_4);
}
