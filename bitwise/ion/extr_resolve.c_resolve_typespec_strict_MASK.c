
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_13__ ;


struct TYPE_19__ {size_t num_fields; TYPE_4__** fields; } ;
struct TYPE_18__ {size_t num_args; TYPE_4__* ret; TYPE_4__** args; } ;
struct TYPE_20__ {int kind; char** names; int pos; TYPE_3__ tuple; TYPE_2__ func; TYPE_13__* num_elems; struct TYPE_20__* base; int num_names; } ;
typedef TYPE_4__ Typespec ;
typedef int Type ;
struct TYPE_17__ {int i; } ;
struct TYPE_22__ {TYPE_1__ val; int type; } ;
struct TYPE_21__ {int * type; int kind; int * package; } ;
struct TYPE_16__ {int pos; } ;
typedef TYPE_5__ Sym ;
typedef int Package ;
typedef TYPE_6__ Operand ;


 int VAR_0 ;
 int VAR_1 ;






 int FUNC_0 (int ) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int **,int *) ;
 int FUNC_3 (TYPE_6__*,int ) ;
 int * VAR_2 ;
 int FUNC_4 (int ,char*,...) ;
 TYPE_5__* FUNC_5 (int *,char const*) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 TYPE_6__ FUNC_10 (TYPE_13__*) ;
 int FUNC_11 (TYPE_5__*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_14 (TYPE_4__*,int *) ;
 int * FUNC_15 (int *,int,int ) ;
 int * FUNC_16 (int *) ;
 int * FUNC_17 (int **,int ,int *,int,int,int *) ;
 int VAR_3 ;
 int * FUNC_18 (int *) ;
 int * FUNC_19 (int **,int ) ;
 int * VAR_4 ;

Type *FUNC_20(Typespec *VAR_5, bool VAR_6) {
    if (!VAR_5) {
        return VAR_4;
    }
    Type *VAR_7 = ((void*)0);
    switch (VAR_5->kind) {
    case 130: {
        Package *VAR_8 = VAR_2;
        for (size_t VAR_9 = 0; VAR_9 < VAR_5->num_names - 1; VAR_9++) {
            const char *VAR_10 = VAR_5->names[VAR_9];
            Sym *VAR_11 = FUNC_5(VAR_8, VAR_10);
            if (!VAR_11) {
                FUNC_4(VAR_5->pos, "Unresolved package '%s'", VAR_10);
            }
            if (VAR_11->kind != VAR_0) {
                FUNC_4(VAR_5->pos, "%s must denote a package", VAR_10);
                return ((void*)0);
            }
            VAR_8 = VAR_11->package;
        }
        const char *VAR_12 = VAR_5->names[VAR_5->num_names - 1];
        Sym *VAR_13 = FUNC_5(VAR_8, VAR_12);
        if (!VAR_13) {
            FUNC_4(VAR_5->pos, "Unresolved type name '%s'", VAR_12);
        }
        if (VAR_13->kind != VAR_1) {
            FUNC_4(VAR_5->pos, "%s must denote a type", VAR_12);
            return ((void*)0);
        }
        FUNC_11(VAR_13);
        FUNC_13(VAR_5, VAR_13);
        VAR_7 = VAR_13->type;
        break;
    }
    case 132:
        VAR_7 = FUNC_20(VAR_5->base, VAR_6);
        if (VAR_6) {
            VAR_7 = FUNC_16(VAR_7);
        }
        break;
    case 129:
        VAR_7 = FUNC_18(FUNC_20(VAR_5->base, VAR_6));
        break;
    case 133: {
        int VAR_14 = 0;
        Type *VAR_15 = FUNC_20(VAR_5->base, VAR_6);
        if (VAR_5->num_elems) {
            Operand VAR_16 = FUNC_10(VAR_5->num_elems);
            if (!FUNC_9(VAR_16.type)) {
                FUNC_4(VAR_5->pos, "Array size constant expression must have integer type");
            }
            FUNC_3(&VAR_16, VAR_3);
            VAR_14 = VAR_16.val.i;
            if (VAR_14 < 0) {
                FUNC_4(VAR_5->num_elems->pos, "Non-positive array size");
            }
        }
        VAR_7 = FUNC_15(VAR_15, VAR_14, VAR_5->num_elems == ((void*)0));
        break;
    }
    case 131: {
        Type **VAR_17 = ((void*)0);
        for (size_t VAR_18 = 0; VAR_18 < VAR_5->func.num_args; VAR_18++) {
            Type *VAR_19 = FUNC_20(VAR_5->func.args[VAR_18], VAR_6);
            if (VAR_19 == VAR_4) {
                FUNC_4(VAR_5->pos, "Function parameter type cannot be void");
            }
            VAR_19 = FUNC_7(VAR_19);
            FUNC_2(VAR_17, VAR_19);
        }
        Type *VAR_20 = VAR_4;
        if (VAR_5->func.ret) {
            VAR_20 = FUNC_7(FUNC_20(VAR_5->func.ret, VAR_6));
        }
        if (FUNC_8(VAR_20)) {
            FUNC_4(VAR_5->pos, "Function return type cannot be array");
        }

        VAR_7 = FUNC_17(VAR_17, FUNC_1(VAR_17), VAR_20, 0, 0, VAR_4);
        break;
    }
    case 128: {
        Type **VAR_21 = ((void*)0);
        for (size_t VAR_22 = 0; VAR_22 < VAR_5->tuple.num_fields; VAR_22++) {
            Type *VAR_23 = FUNC_20(VAR_5->tuple.fields[VAR_22], VAR_6);
            if (VAR_23 == VAR_4) {
                FUNC_4(VAR_5->pos, "Tuple element types cannot be void");
            }
            FUNC_2(VAR_21, VAR_23);
        }
        VAR_7 = FUNC_19(VAR_21, FUNC_1(VAR_21));
        if (!FUNC_6(VAR_7)) {
            FUNC_12(VAR_7);
        }
        break;
    }
    default:
        FUNC_0(0);
        return ((void*)0);
    }
    FUNC_14(VAR_5, VAR_7);
    return VAR_7;
}
