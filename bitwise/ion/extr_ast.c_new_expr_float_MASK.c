
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int TokenSuffix ;
struct TYPE_5__ {char const* start; char const* end; double val; int suffix; } ;
struct TYPE_6__ {TYPE_1__ float_lit; } ;
typedef int SrcPos ;
typedef TYPE_2__ Expr ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ,int ) ;

Expr *FUNC_1(SrcPos VAR_1, const char *VAR_2, const char *VAR_3, double VAR_4, TokenSuffix VAR_5) {
    Expr *VAR_6 = FUNC_0(VAR_0, VAR_1);
    VAR_6->float_lit.start = VAR_2;
    VAR_6->float_lit.end = VAR_3;
    VAR_6->float_lit.val = VAR_4;
    VAR_6->float_lit.suffix = VAR_5;
    return VAR_6;
}
