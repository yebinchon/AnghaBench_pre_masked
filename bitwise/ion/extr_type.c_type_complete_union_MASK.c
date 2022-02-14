
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {TYPE_4__* type; scalar_t__ offset; scalar_t__ name; } ;
typedef TYPE_2__ TypeField ;
struct TYPE_13__ {int num_fields; TYPE_2__* fields; } ;
struct TYPE_15__ {scalar_t__ kind; int nonmodifiable; TYPE_1__ aggregate; void* align; void* size; } ;
typedef TYPE_3__ Type ;
struct TYPE_16__ {scalar_t__ kind; scalar_t__ nonmodifiable; } ;


 void* FUNC_0 (void*,void*) ;
 void* FUNC_1 (void*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_2__**,TYPE_4__*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;

void FUNC_8(Type *VAR_2, TypeField *VAR_3, size_t VAR_4) {
    FUNC_3(VAR_2->kind == VAR_0);
    VAR_2->kind = VAR_1;
    VAR_2->size = 0;
    VAR_2->align = 0;
    bool VAR_5 = 0;
    TypeField *VAR_6 = ((void*)0);
    for (TypeField *VAR_7 = VAR_3; VAR_7 != VAR_3 + VAR_4; VAR_7++) {
        FUNC_3(VAR_7->type->kind > VAR_0);
        if (VAR_7->name) {
            VAR_7->offset = 0;
            FUNC_5(VAR_6, *VAR_7);
        } else {
            FUNC_2(&VAR_6, VAR_7->type, 0);
        }
        VAR_2->size = FUNC_1(VAR_2->size, FUNC_7(VAR_7->type));
        VAR_2->align = FUNC_1(VAR_2->align, FUNC_6(VAR_7->type));
        VAR_5 = VAR_7->type->nonmodifiable || VAR_5;
    }
    VAR_2->size = FUNC_0(VAR_2->size, VAR_2->align);
    VAR_2->aggregate.fields = VAR_6;
    VAR_2->aggregate.num_fields = FUNC_4(VAR_6);
    VAR_2->nonmodifiable = VAR_5;
}
