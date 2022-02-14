
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int Vector ;
struct TYPE_14__ {scalar_t__ kind; } ;
typedef TYPE_1__ Type ;
struct TYPE_15__ {scalar_t__ kind; int sval; } ;
typedef TYPE_2__ Token ;
struct TYPE_16__ {scalar_t__ kind; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*,int ,int) ;
 int FUNC_1 (char) ;
 TYPE_2__* FUNC_2 () ;
 scalar_t__ FUNC_3 (TYPE_2__*,char) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (TYPE_1__*,int) ;
 TYPE_7__* FUNC_6 () ;
 int FUNC_7 (int *,TYPE_1__*,int,int) ;
 int FUNC_8 (int *,TYPE_1__*,int,int) ;
 int FUNC_9 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_10(Vector *VAR_3, Type *VAR_4, int VAR_5, bool VAR_6) {
    Token *VAR_7 = FUNC_2();
    if (FUNC_4(VAR_4)) {
        if (VAR_7->kind == VAR_2) {
            FUNC_0(VAR_3, VAR_4, VAR_7->sval, VAR_5);
            return;
        }
        if (FUNC_3(VAR_7, '{') && FUNC_6()->kind == VAR_2) {
            VAR_7 = FUNC_2();
            FUNC_0(VAR_3, VAR_4, VAR_7->sval, VAR_5);
            FUNC_1('}');
            return;
        }
    }
    FUNC_9(VAR_7);
    if (VAR_4->kind == VAR_0) {
        FUNC_7(VAR_3, VAR_4, VAR_5, VAR_6);
    } else if (VAR_4->kind == VAR_1) {
        FUNC_8(VAR_3, VAR_4, VAR_5, VAR_6);
    } else {
        Type *VAR_8 = FUNC_5(VAR_4, 1);
        FUNC_7(VAR_3, VAR_8, VAR_5, VAR_6);
    }
}
