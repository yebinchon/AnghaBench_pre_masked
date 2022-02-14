
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int Typespec ;
typedef int TokenSuffix ;
typedef int TokenMod ;
struct TYPE_2__ {unsigned long long int_val; char* start; char* end; double float_val; char* str_val; char* name; int mod; int suffix; int pos; } ;
typedef int SrcPos ;
typedef int Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int * FUNC_5 (int ,int *) ;
 int * FUNC_6 (int ,int *) ;
 int * FUNC_7 (int ,int *,int ) ;
 int * FUNC_8 (int ,char const*,char const*,double,int ) ;
 int * FUNC_9 (int ,unsigned long long,int ,int ) ;
 int * FUNC_10 (int ,char const*) ;
 int * FUNC_11 (int ,int *,char const*) ;
 int * FUNC_12 (int ,int *) ;
 int * FUNC_13 (int ,int *) ;
 int * FUNC_14 (int ,int *) ;
 int * FUNC_15 (int ,char const*,int ) ;
 int * FUNC_16 (int ,int *) ;
 int * FUNC_17 (int ,int *) ;
 int VAR_10 ;
 int * FUNC_18 (int ,char const**,int) ;
 int FUNC_19 () ;
 int VAR_11 ;
 int * FUNC_20 () ;
 int * FUNC_21 (int *) ;
 int * FUNC_22 (int ) ;
 int FUNC_23 () ;
 char* FUNC_24 () ;
 int * FUNC_25 () ;
 int VAR_12 ;
 TYPE_1__ VAR_13 ;
 int FUNC_26 () ;
 int VAR_14 ;

Expr *FUNC_27(void) {
    SrcPos VAR_15 = VAR_13.pos;
    if (FUNC_2(VAR_3)) {
        unsigned long long VAR_16 = VAR_13.int_val;
        TokenMod VAR_17 = VAR_13.mod;
        TokenSuffix VAR_18 = VAR_13.suffix;
        FUNC_19();
        return FUNC_9(VAR_15, VAR_16, VAR_17, VAR_18);
    } else if (FUNC_2(VAR_2)) {
        const char *VAR_19 = VAR_13.start;
        const char *VAR_20 = VAR_13.end;
        double VAR_21 = VAR_13.float_val;
        TokenSuffix VAR_22 = VAR_13.suffix;
        FUNC_19();
        return FUNC_8(VAR_15, VAR_19, VAR_20, VAR_21, VAR_22);
    } else if (FUNC_2(VAR_8)) {
        const char *VAR_23 = VAR_13.str_val;
        TokenMod VAR_24 = VAR_13.mod;
        FUNC_19();
        return FUNC_15(VAR_15, VAR_23, VAR_24);
    } else if (FUNC_2(VAR_6)) {
        const char *VAR_25 = VAR_13.name;
        FUNC_19();
        if (FUNC_2(VAR_4)) {
            return FUNC_21(FUNC_18(VAR_15, &VAR_25, 1));
        } else {
            return FUNC_10(VAR_15, VAR_25);
        }
    } else if (FUNC_3(VAR_10)) {
        return FUNC_22(VAR_15);
    } else if (FUNC_3(VAR_12)) {
        FUNC_0(VAR_5);
        if (FUNC_4(VAR_0)) {
            Typespec *VAR_26 = FUNC_25();
            FUNC_0(VAR_7);
            return FUNC_14(VAR_15, VAR_26);
        } else {
            Expr *VAR_27 = FUNC_20();
            FUNC_0(VAR_7);
            return FUNC_13(VAR_15, VAR_27);
        }
    } else if (FUNC_3(VAR_9)) {
        FUNC_0(VAR_5);
        if (FUNC_4(VAR_0)) {
            Typespec *VAR_28 = FUNC_25();
            FUNC_0(VAR_7);
            return FUNC_6(VAR_15, VAR_28);
        } else {
            Expr *VAR_29 = FUNC_20();
            FUNC_0(VAR_7);
            return FUNC_5(VAR_15, VAR_29);
        }
    } else if (FUNC_3(VAR_14)) {
        FUNC_0(VAR_5);
        if (FUNC_4(VAR_0)) {
            Typespec *VAR_30 = FUNC_25();
            FUNC_0(VAR_7);
            return FUNC_17(VAR_15, VAR_30);
        } else {
            Expr *VAR_31 = FUNC_20();
            FUNC_0(VAR_7);
            return FUNC_16(VAR_15, VAR_31);
        }
    } else if (FUNC_3(VAR_11)) {
        FUNC_0(VAR_5);
        Typespec *VAR_32 = FUNC_25();
        FUNC_0(VAR_1);
        const char *VAR_33 = FUNC_24();
        FUNC_0(VAR_7);
        return FUNC_11(VAR_15, VAR_32, VAR_33);
    } else if (FUNC_2(VAR_4)) {
        return FUNC_21(((void*)0));
    } else if (FUNC_4(VAR_5)) {
        if (FUNC_4(VAR_0)) {
            Typespec *VAR_34 = FUNC_25();
            FUNC_0(VAR_7);
            if (FUNC_2(VAR_4)) {
                return FUNC_21(VAR_34);
            } else {
                return FUNC_7(VAR_15, VAR_34, FUNC_23());
            }
        } else {
            Expr *VAR_35 = FUNC_20();
            FUNC_0(VAR_7);
            return FUNC_12(VAR_15, VAR_35);
        }
    } else {
        FUNC_1("Unexpected token %s in expression", FUNC_26());
        return ((void*)0);
    }
}
