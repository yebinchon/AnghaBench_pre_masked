
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ kind; scalar_t__ usig; } ;
typedef TYPE_1__ Type ;



__attribute__((used)) static bool FUNC_0(Type *VAR_0, Type *VAR_1) {
    return VAR_0->kind == VAR_1->kind && VAR_0->usig == VAR_1->usig;
}
