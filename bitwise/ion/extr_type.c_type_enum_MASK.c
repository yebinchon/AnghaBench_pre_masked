
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int align; int size; struct TYPE_6__* base; int * sym; } ;
typedef TYPE_1__ Type ;
struct TYPE_7__ {int align; int size; } ;
typedef int Sym ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 TYPE_2__* VAR_1 ;

Type *FUNC_1(Sym *VAR_2, Type *VAR_3) {
    Type *VAR_4 = FUNC_0(VAR_0);
    VAR_4->sym = VAR_2;
    VAR_4->base = VAR_3;
    VAR_4->size = VAR_1->size;
    VAR_4->align = VAR_1->align;
    return VAR_4;
}
