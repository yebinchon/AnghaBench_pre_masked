
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int Type ;
struct TYPE_9__ {scalar_t__ kind; int init; int index; int name; } ;
struct TYPE_7__ {size_t num_fields; TYPE_3__* fields; scalar_t__ type; } ;
struct TYPE_8__ {TYPE_1__ compound; } ;
typedef TYPE_2__ Expr ;
typedef TYPE_3__ CompoundField ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int * FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (scalar_t__,char*) ;

void FUNC_7(Expr *VAR_2) {
    Type *VAR_3 = FUNC_2(VAR_2);
    if (VAR_3 && !FUNC_4(VAR_3)) {
        FUNC_1("{");
    } else if (VAR_2->compound.type) {
        FUNC_1("(%s){", FUNC_6(VAR_2->compound.type, ""));
    } else {
        FUNC_1("(%s){", FUNC_5(FUNC_3(VAR_2), ""));
    }
    for (size_t VAR_4 = 0; VAR_4 < VAR_2->compound.num_fields; VAR_4++) {
        if (VAR_4 != 0) {
            FUNC_1(", ");
        }
        CompoundField VAR_5 = VAR_2->compound.fields[VAR_4];
        if (VAR_5.kind == VAR_1) {
            FUNC_1(".%s = ", VAR_5.name);
        } else if (VAR_5.kind == VAR_0) {
            FUNC_1("[");
            FUNC_0(VAR_5.index);
            FUNC_1("] = ");
        }
        FUNC_0(VAR_5.init);
    }
    if (VAR_2->compound.num_fields == 0) {
        FUNC_1("0");
    }
    FUNC_1("}");
}
