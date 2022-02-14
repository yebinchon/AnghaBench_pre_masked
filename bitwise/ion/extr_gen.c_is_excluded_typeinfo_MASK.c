
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ kind; TYPE_3__* sym; struct TYPE_5__* base; } ;
typedef TYPE_1__ Type ;
struct TYPE_6__ {int decl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*) ;

bool FUNC_4(Type *VAR_6) {
    while (VAR_6->kind == VAR_0 || VAR_6->kind == VAR_1 || VAR_6->kind == VAR_2) {
        VAR_6 = VAR_6->base;
    }
    if (VAR_6->sym) {
        if (FUNC_0(VAR_6->sym->decl, FUNC_3("notypeinfo"))) {
            return 1;
        } else {
            return !FUNC_1(VAR_6->sym);
        }
    } else if (VAR_6->kind == VAR_4) {
        return !FUNC_2(VAR_6);
    } else {
        return !VAR_6->sym && (VAR_6->kind == VAR_3 || VAR_6->kind == VAR_5);
    }
}
