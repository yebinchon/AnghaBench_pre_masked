
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int Typespec ;
struct TYPE_8__ {int is_incomplete; } ;
struct TYPE_7__ {int member_0; } ;
typedef TYPE_1__ StmtList ;
typedef int SrcPos ;
typedef int FuncParam ;
typedef TYPE_2__ Decl ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 TYPE_2__* FUNC_6 (int ,char const*,int *,int ,int *,int,int *,TYPE_1__) ;
 int FUNC_7 () ;
 char* FUNC_8 () ;
 TYPE_1__ FUNC_9 () ;
 int * FUNC_10 () ;

Decl *FUNC_11(SrcPos VAR_6) {
    const char *VAR_7 = FUNC_8();
    FUNC_3(VAR_3);
    FuncParam *VAR_8 = ((void*)0);
    bool VAR_9 = 0;
    Typespec *VAR_10 = ((void*)0);
    if (!FUNC_4(VAR_4)) {
        FUNC_1(VAR_8, FUNC_7());
        while (FUNC_5(VAR_1)) {
            if (FUNC_5(VAR_2)) {
                if (VAR_9) {
                    FUNC_2("Multiple ellipsis in function declaration");
                }
                if (!FUNC_4(VAR_4)) {
                    VAR_10 = FUNC_10();
                }
                VAR_9 = 1;
            } else {
                if (VAR_9) {
                    FUNC_2("Ellipsis must be last parameter in function declaration");
                }
                FUNC_1(VAR_8, FUNC_7());
            }
        }
    }
    FUNC_3(VAR_4);
    Typespec *VAR_11 = ((void*)0);
    if (FUNC_5(VAR_0)) {
        VAR_11 = FUNC_10();
    }
    StmtList VAR_12 = {0};
    bool VAR_13;
    if (FUNC_5(VAR_5)) {
        VAR_13 = 1;
    } else {
        VAR_12 = FUNC_9();
        VAR_13 = 0;
    }
    Decl *VAR_14 = FUNC_6(VAR_6, VAR_7, VAR_8, FUNC_0(VAR_8), VAR_11, VAR_9, VAR_10, VAR_12);
    VAR_14->is_incomplete = VAR_13;
    return VAR_14;
}
