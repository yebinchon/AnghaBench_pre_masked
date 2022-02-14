
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int Typespec ;
struct TYPE_5__ {char const* name; int is_undef; int * expr; int * type; } ;
struct TYPE_6__ {TYPE_1__ init; } ;
typedef TYPE_2__ Stmt ;
typedef int SrcPos ;
typedef int Expr ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ,int ) ;

Stmt *FUNC_1(SrcPos VAR_1, const char *VAR_2, Typespec *VAR_3, Expr *VAR_4, bool VAR_5) {
    Stmt *VAR_6 = FUNC_0(VAR_0, VAR_1);
    VAR_6->init.name = VAR_2;
    VAR_6->init.type = VAR_3;
    VAR_6->init.expr = VAR_4;
    VAR_6->init.is_undef = VAR_5;
    return VAR_6;
}
