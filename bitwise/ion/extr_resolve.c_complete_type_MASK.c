
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ kind; TYPE_2__* sym; } ;
typedef TYPE_1__ Type ;
struct TYPE_9__ {scalar_t__ kind; int aggregate; int pos; scalar_t__ is_incomplete; } ;
struct TYPE_8__ {TYPE_3__* decl; int home_package; } ;
typedef TYPE_2__ Sym ;
typedef int Package ;
typedef TYPE_3__ Decl ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int *) ;
 int VAR_4 ;

void FUNC_6(Type *VAR_5) {
    if (VAR_5->kind == VAR_2) {
        FUNC_4(VAR_5->sym->decl->pos, "Type completion cycle");
        return;
    } else if (VAR_5->kind != VAR_3) {
        return;
    }
    Sym *VAR_6 = VAR_5->sym;
    Package *VAR_7 = FUNC_3(VAR_6->home_package);
    Decl *VAR_8 = VAR_6->decl;
    if (VAR_8->is_incomplete) {
        FUNC_4(VAR_8->pos, "Trying to use incomplete type as complete type");
    }
    VAR_5->kind = VAR_2;
    FUNC_0(VAR_8->kind == VAR_0 || VAR_8->kind == VAR_1);
    FUNC_2(VAR_5, VAR_8->aggregate);
    FUNC_1(VAR_4, VAR_5->sym);
    FUNC_5(VAR_7);
}
