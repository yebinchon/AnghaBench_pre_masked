
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ kind; int size; } ;
typedef TYPE_1__ Type ;
typedef int Token ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *,char*,char*,...) ;
 int FUNC_2 (TYPE_1__*) ;
 int * FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(char *VAR_1, Type *VAR_2) {
    if (!FUNC_2(VAR_2))
        FUNC_0("non-integer type cannot be a bitfield: %s", FUNC_5(VAR_2));
    Token *VAR_3 = FUNC_3();
    int VAR_4 = FUNC_4();
    int VAR_5 = VAR_2->kind == VAR_0 ? 1 : VAR_2->size * 8;
    if (VAR_4 < 0 || VAR_5 < VAR_4)
        FUNC_1(VAR_3, "invalid bitfield size for %s: %d", FUNC_5(VAR_2), VAR_4);
    if (VAR_4 == 0 && VAR_1 != ((void*)0))
        FUNC_1(VAR_3, "zero-width bitfield needs to be unnamed: %s", VAR_1);
    return VAR_4;
}
