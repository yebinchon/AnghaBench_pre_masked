
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t kind; int align; int size; scalar_t__ typeid; } ;
typedef TYPE_1__ Type ;
struct TYPE_6__ {int align; int size; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_2__* VAR_1 ;

void FUNC_1(Type *VAR_2) {
    VAR_2->typeid = VAR_0++;
    FUNC_0(VAR_2);
    VAR_2->size = VAR_1[VAR_2->kind].size;
    VAR_2->align = VAR_1[VAR_2->kind].align;
}
