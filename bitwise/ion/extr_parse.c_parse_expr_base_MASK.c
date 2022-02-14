
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TokenKind ;
struct TYPE_2__ {char* name; int kind; int pos; } ;
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
 int FUNC_0 (int) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int **,int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int * FUNC_6 (int ,int *,int **,int ) ;
 int * FUNC_7 (int ,int *,char const*) ;
 int * FUNC_8 (int ,int *,int *) ;
 int * FUNC_9 (int ,int ,int,int *) ;
 int FUNC_10 () ;
 int * FUNC_11 () ;
 int * FUNC_12 () ;
 TYPE_1__ VAR_9 ;

Expr *FUNC_13(void) {
    Expr *VAR_10 = FUNC_12();
    while (FUNC_4(VAR_5) || FUNC_4(VAR_4) || FUNC_4(VAR_2) || FUNC_4(VAR_3) || FUNC_4(VAR_1)) {
        SrcPos VAR_11 = VAR_9.pos;
        if (FUNC_5(VAR_5)) {
            Expr **VAR_12 = ((void*)0);
            if (!FUNC_4(VAR_8)) {
                FUNC_2(VAR_12, FUNC_11());
                while (FUNC_5(VAR_0)) {
                    FUNC_2(VAR_12, FUNC_11());
                }
            }
            FUNC_3(VAR_8);
            VAR_10 = FUNC_6(VAR_11, VAR_10, VAR_12, FUNC_1(VAR_12));
        } else if (FUNC_5(VAR_4)) {
            Expr *VAR_13 = FUNC_11();
            FUNC_3(VAR_7);
            VAR_10 = FUNC_8(VAR_11, VAR_10, VAR_13);
        } else if (FUNC_4(VAR_2)) {
            FUNC_10();
            const char *VAR_14 = VAR_9.name;
            FUNC_3(VAR_6);
            VAR_10 = FUNC_7(VAR_11, VAR_10, VAR_14);
        } else {
            FUNC_0(FUNC_4(VAR_3) || FUNC_4(VAR_1));
            TokenKind VAR_15 = VAR_9.kind;
            FUNC_10();
            VAR_10 = FUNC_9(VAR_11, VAR_15, 1, VAR_10);
        }
    }
    return VAR_10;
}
