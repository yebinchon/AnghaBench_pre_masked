
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ kind; struct TYPE_4__* base; } ;
typedef TYPE_1__ Type ;


 scalar_t__ VAR_0 ;

Type *FUNC_0(Type *VAR_1) {
    if (VAR_1->kind == VAR_0) {
        return VAR_1->base;
    } else {
        return VAR_1;
    }
}
