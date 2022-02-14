
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int TypespecKind ;
struct TYPE_4__ {int pos; int kind; } ;
typedef TYPE_1__ Typespec ;
typedef int SrcPos ;


 TYPE_1__* FUNC_0 (int) ;

Typespec *FUNC_1(TypespecKind VAR_0, SrcPos VAR_1) {
    Typespec *VAR_2 = FUNC_0(sizeof(Typespec));
    VAR_2->kind = VAR_0;
    VAR_2->pos = VAR_1;
    return VAR_2;
}
