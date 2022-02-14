
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ kind; int base; } ;
typedef TYPE_1__ Type ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

Type *FUNC_2(Type *VAR_1) {
    if (VAR_1->kind == VAR_0) {
        VAR_1 = FUNC_0(FUNC_1(VAR_1->base));
    }
    return VAR_1;
}
