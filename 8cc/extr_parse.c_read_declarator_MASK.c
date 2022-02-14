
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int Vector ;
typedef int Type ;
struct TYPE_6__ {scalar_t__ kind; char* sval; } ;
typedef TYPE_1__ Token ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*,char*,int ) ;
 int FUNC_1 (char) ;
 TYPE_1__* FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 () ;
 scalar_t__ FUNC_6 (char) ;
 int FUNC_7 () ;
 int * FUNC_8 (int *,int *) ;
 int * FUNC_9 (int *,int *) ;
 int FUNC_10 () ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;

__attribute__((used)) static Type *FUNC_13(char **VAR_4, Type *VAR_5, Vector *VAR_6, int VAR_7) {
    if (FUNC_6('(')) {


        if (FUNC_3(FUNC_7()))
            return FUNC_8(VAR_5, VAR_6);






        Type *VAR_8 = FUNC_5();
        Type *VAR_9 = FUNC_13(VAR_4, VAR_8, VAR_6, VAR_7);
        FUNC_1(')');
        *VAR_8 = *FUNC_9(VAR_5, VAR_6);
        return VAR_9;
    }
    if (FUNC_6('*')) {
        FUNC_10();
        return FUNC_13(VAR_4, FUNC_4(VAR_5), VAR_6, VAR_7);
    }
    Token *VAR_10 = FUNC_2();
    if (VAR_10->kind == VAR_3) {
        if (VAR_7 == VAR_1)
            FUNC_0(VAR_10, "identifier is not expected, but got %s", FUNC_11(VAR_10));
        *VAR_4 = VAR_10->sval;
        return FUNC_9(VAR_5, VAR_6);
    }
    if (VAR_7 == VAR_0 || VAR_7 == VAR_2)
        FUNC_0(VAR_10, "identifier, ( or * are expected, but got %s", FUNC_11(VAR_10));
    FUNC_12(VAR_10);
    return FUNC_9(VAR_5, VAR_6);
}
