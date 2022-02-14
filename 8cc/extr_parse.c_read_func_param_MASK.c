
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ kind; struct TYPE_9__* ptr; } ;
typedef TYPE_1__ Type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;
 TYPE_1__* FUNC_4 (int*) ;
 TYPE_1__* FUNC_5 (char**,TYPE_1__*,int *,int ) ;
 int FUNC_6 (int ) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static Type *FUNC_7(char **VAR_5, bool VAR_6) {
    int VAR_7 = 0;
    Type *VAR_8 = VAR_4;
    if (FUNC_1(FUNC_3())) {
        VAR_8 = FUNC_4(&VAR_7);
    } else if (VAR_6) {
        FUNC_0(FUNC_3(), "type expected, but got %s", FUNC_6(FUNC_3()));
    }
    Type *VAR_9 = FUNC_5(VAR_5, VAR_8, ((void*)0), VAR_6 ? VAR_1 : VAR_0);


    if (VAR_9->kind == VAR_2)
        return FUNC_2(VAR_9->ptr);


    if (VAR_9->kind == VAR_3)
        return FUNC_2(VAR_9);
    return VAR_9;
}
