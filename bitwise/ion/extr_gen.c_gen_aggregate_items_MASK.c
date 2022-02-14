
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ kind; int base; int num_elems; } ;
struct TYPE_7__ {size_t num_items; scalar_t__ kind; TYPE_1__* items; } ;
struct TYPE_6__ {scalar_t__ kind; size_t num_names; TYPE_2__* subaggregate; int * names; TYPE_3__* type; int pos; } ;
typedef TYPE_1__ AggregateItem ;
typedef TYPE_2__ Aggregate ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 TYPE_3__* FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_3__*,int ) ;

void FUNC_5(Aggregate *VAR_5) {
    VAR_4++;
    for (size_t VAR_6 = 0; VAR_6 < VAR_5->num_items; VAR_6++) {
        AggregateItem VAR_7 = VAR_5->items[VAR_6];
        if (VAR_7.kind == VAR_0) {
            for (size_t VAR_8 = 0; VAR_8 < VAR_7.num_names; VAR_8++) {
                FUNC_1(VAR_7.pos);
                if (VAR_7.type->kind == VAR_3 && !VAR_7.type->num_elems) {
                    FUNC_2("%s;", FUNC_4(FUNC_3(VAR_7.pos, VAR_7.type->base), VAR_7.names[VAR_8]));
                } else {
                    FUNC_2("%s;", FUNC_4(VAR_7.type, VAR_7.names[VAR_8]));
                }
            }
        } else if (VAR_7.kind == VAR_1) {
            FUNC_2("%s {", VAR_7.subaggregate->kind == VAR_2 ? "struct" : "union");
            FUNC_5(VAR_7.subaggregate);
            FUNC_2("};");
        } else {
            FUNC_0(0);
        }
    }
    VAR_4--;
}
