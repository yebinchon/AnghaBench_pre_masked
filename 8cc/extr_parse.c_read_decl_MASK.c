
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef int Vector ;
struct TYPE_12__ {int isstatic; scalar_t__ kind; } ;
typedef TYPE_1__ Type ;
typedef int Node ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (TYPE_1__*,char*) ;
 int * FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,char*,int ) ;
 scalar_t__ FUNC_7 (char) ;
 int FUNC_8 () ;
 int * FUNC_9 (TYPE_1__*) ;
 TYPE_1__* FUNC_10 (int*) ;
 TYPE_1__* FUNC_11 (char**,int ,int *,int ) ;
 int FUNC_12 (TYPE_1__*,char*) ;
 int * FUNC_13 (TYPE_1__*,char*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *,int ) ;

__attribute__((used)) static void FUNC_16(Vector *VAR_5, bool VAR_6) {
    int VAR_7 = 0;
    Type *VAR_8 = FUNC_10(&VAR_7);
    if (FUNC_7(';'))
        return;
    for (;;) {
        char *VAR_9 = ((void*)0);
        Type *VAR_10 = FUNC_11(&VAR_9, FUNC_4(VAR_8), ((void*)0), VAR_0);
        VAR_10->isstatic = (VAR_7 == VAR_3);
        if (VAR_7 == VAR_4) {
            FUNC_3(VAR_10, VAR_9);
        } else if (VAR_10->isstatic && !VAR_6) {
            FUNC_5(VAR_10);
            FUNC_12(VAR_10, VAR_9);
        } else {
            FUNC_5(VAR_10);
            Node *VAR_11 = (VAR_6 ? FUNC_1 : FUNC_2)(VAR_10, VAR_9);
            if (FUNC_7('=')) {
                FUNC_15(VAR_5, FUNC_0(VAR_11, FUNC_9(VAR_10)));
            } else if (VAR_7 != VAR_2 && VAR_10->kind != VAR_1) {
                FUNC_15(VAR_5, FUNC_0(VAR_11, ((void*)0)));
            }
        }
        if (FUNC_7(';'))
            return;
        if (!FUNC_7(','))
            FUNC_6(FUNC_8(), "';' or ',' are expected, but got %s", FUNC_14(FUNC_8()));
    }
}
