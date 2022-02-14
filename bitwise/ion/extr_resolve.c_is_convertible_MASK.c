
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_21__ {TYPE_2__* fields; } ;
struct TYPE_19__ {scalar_t__ intrinsic; } ;
struct TYPE_22__ {struct TYPE_22__* base; TYPE_3__ aggregate; TYPE_1__ func; } ;
typedef TYPE_4__ Type ;
struct TYPE_23__ {TYPE_4__* type; } ;
struct TYPE_20__ {TYPE_4__* type; } ;
typedef TYPE_5__ Operand ;


 scalar_t__ FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_5__) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;
 scalar_t__ FUNC_6 (TYPE_4__*) ;
 TYPE_4__* VAR_0 ;
 TYPE_4__* VAR_1 ;
 TYPE_4__* FUNC_7 (TYPE_4__*) ;

bool FUNC_8(Operand *VAR_2, Type *VAR_3) {
    VAR_3 = FUNC_7(VAR_3);
    Type *VAR_4 = FUNC_7(VAR_2->type);
    if (VAR_3 == VAR_4) {
        return 1;
    } else if (FUNC_3(VAR_4) && VAR_4->func.intrinsic) {
        return 0;
    } else if (VAR_3 == VAR_0 || VAR_3 == VAR_1) {
        return 1;
    } else if (FUNC_1(VAR_3) && FUNC_1(VAR_4)) {
        return 1;
    } else if (FUNC_5(VAR_3) && FUNC_4(*VAR_2)) {
        return 1;
    } else if (FUNC_6(VAR_3) && FUNC_6(VAR_4)) {
        if (FUNC_2(VAR_3->base) && FUNC_2(VAR_4->base)) {
            return VAR_3->base->base == VAR_4->base->base || VAR_3->base->base == VAR_1 || VAR_4->base->base == VAR_1;
        } else if (FUNC_0(VAR_3->base) && FUNC_0(VAR_4->base) && VAR_3->base == VAR_4->base->aggregate.fields[0].type) {
            return 1;
        } else {
            Type *VAR_5 = FUNC_7(VAR_3->base);
            if (VAR_5 == VAR_4->base) {
                return 1;
            } else if (VAR_5 == VAR_1) {
                return FUNC_2(VAR_3->base) || !FUNC_2(VAR_4->base);
            } else {
                return VAR_4->base == VAR_1;
            }
        }
    } else {
        return 0;
    }
}
