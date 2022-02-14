
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {struct TYPE_10__* base; int align; int size; } ;
typedef TYPE_1__ Type ;
struct TYPE_11__ {int align; int size; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (size_t) ;
 TYPE_4__* VAR_2 ;

Type *FUNC_3(Type *VAR_3) {
    Type *VAR_4 = FUNC_0(&VAR_1, VAR_3);
    if (!VAR_4) {
        VAR_4 = FUNC_2(VAR_0);
        VAR_4->size = VAR_2[VAR_0].size;
        VAR_4->align = VAR_2[VAR_0].align;
        VAR_4->base = VAR_3;
        FUNC_1(&VAR_1, VAR_3, VAR_4);
    }
    return VAR_4;
}
