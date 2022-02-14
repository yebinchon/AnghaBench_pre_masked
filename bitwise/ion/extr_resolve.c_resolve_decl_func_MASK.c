
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int Type ;
struct TYPE_7__ {size_t num_params; int has_varargs; scalar_t__ varargs_type; scalar_t__ ret_type; TYPE_1__* params; } ;
struct TYPE_8__ {scalar_t__ kind; TYPE_2__ func; int pos; } ;
struct TYPE_6__ {scalar_t__ type; } ;
typedef TYPE_3__ Decl ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int **,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*) ;
 int VAR_1 ;
 int * FUNC_5 (TYPE_3__*,int ) ;
 int * FUNC_6 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int * FUNC_9 (scalar_t__,int) ;
 int * VAR_3 ;
 int * FUNC_10 (int **,int ,int *,int,int ,int *) ;
 int * VAR_4 ;
 scalar_t__ FUNC_11 (int *) ;
 int * VAR_5 ;

Type *FUNC_12(Decl *VAR_6) {
    FUNC_0(VAR_6->kind == VAR_0);
    bool VAR_7 = FUNC_5(VAR_6, VAR_1) != ((void*)0);
    bool VAR_8 = FUNC_5(VAR_6, VAR_2) != ((void*)0);
    bool VAR_9 = VAR_7;
    Type **VAR_10 = ((void*)0);
    for (size_t VAR_11 = 0; VAR_11 < VAR_6->func.num_params; VAR_11++) {
        Type *VAR_12 = FUNC_9(VAR_6->func.params[VAR_11].type, VAR_9);
        VAR_12 = FUNC_6(VAR_12);
        FUNC_3(VAR_12);
        if (VAR_12 == VAR_5 && !VAR_7) {
            FUNC_4(VAR_6->pos, "Function parameter type cannot be void");
        }
        FUNC_2(VAR_10, VAR_12);
    }
    Type *VAR_13 = VAR_5;
    if (VAR_6->func.ret_type) {
        VAR_13 = FUNC_6(FUNC_9(VAR_6->func.ret_type, VAR_9));
        FUNC_3(VAR_13);
    }
    if (FUNC_7(VAR_13)) {
        FUNC_4(VAR_6->pos, "Function return type cannot be array");
    }
    Type *VAR_14 = VAR_5;
    if (VAR_6->func.varargs_type) {
        VAR_14 = FUNC_6(FUNC_9(VAR_6->func.varargs_type, VAR_9));
        FUNC_3(VAR_14);
        if (FUNC_8(VAR_14) && FUNC_11(VAR_14) < FUNC_11(VAR_4)) {
            FUNC_4(VAR_6->pos, "Integer varargs type must have same or higher rank than int");
        } else if (VAR_14 == VAR_3) {
            FUNC_4(VAR_6->pos, "Floating varargs type must be double, not float");
        }
    }
    return FUNC_10(VAR_10, FUNC_1(VAR_10), VAR_13, VAR_8, VAR_6->func.has_varargs, VAR_14);
}
