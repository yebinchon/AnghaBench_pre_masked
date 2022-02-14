
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int var; } ;
struct TYPE_6__ {double const* const_values; void* opaque; int var; int member_0; } ;
typedef TYPE_1__ Parser ;
typedef TYPE_2__ AVExpr ;


 double FUNC_0 (TYPE_1__*,TYPE_2__*) ;

double FUNC_1(AVExpr *VAR_0, const double *VAR_1, void *VAR_2)
{
    Parser VAR_3 = { 0 };
    VAR_3.var= VAR_0->var;

    VAR_3.const_values = VAR_1;
    VAR_3.opaque = VAR_2;
    return FUNC_0(&VAR_3, VAR_0);
}
