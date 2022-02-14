
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int Vector ;
struct TYPE_7__ {int hasva; int isstatic; int params; scalar_t__ oldstyle; } ;
typedef TYPE_1__ Type ;
typedef int Node ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char) ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_3 () ;
 int * FUNC_4 (int ) ;
 void* FUNC_5 () ;
 int FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (int*) ;
 TYPE_1__* FUNC_8 (char**,TYPE_1__*,int *,int ) ;
 int * FUNC_9 (TYPE_1__*,char*,int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;

__attribute__((used)) static Node *FUNC_12() {
    int VAR_6 = 0;
    Type *VAR_7 = FUNC_7(&VAR_6);
    VAR_5 = FUNC_4(VAR_2);
    VAR_3 = FUNC_5();
    VAR_4 = FUNC_3();
    char *VAR_8;
    Vector *VAR_9 = FUNC_5();
    Type *VAR_10 = FUNC_8(&VAR_8, VAR_7, VAR_9, VAR_0);
    if (VAR_10->oldstyle) {
        if (FUNC_11(VAR_9) == 0)
            VAR_10->hasva = 0;
        FUNC_10(VAR_9);
        VAR_10->params = FUNC_6(VAR_9);
    }
    VAR_10->isstatic = (VAR_6 == VAR_1);
    FUNC_0(VAR_10, VAR_8);
    FUNC_2('{');
    Node *VAR_11 = FUNC_9(VAR_10, VAR_8, VAR_9);
    FUNC_1();
    VAR_5 = ((void*)0);
    return VAR_11;
}
