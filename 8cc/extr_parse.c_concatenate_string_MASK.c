
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int enc; scalar_t__ slen; int sval; } ;
typedef TYPE_1__ Token ;
struct TYPE_8__ {scalar_t__ kind; } ;
typedef int Buffer ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ,scalar_t__) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,char) ;
 int FUNC_4 (TYPE_1__*,char*,int ) ;
 int * FUNC_5 () ;
 TYPE_4__* FUNC_6 () ;
 TYPE_1__* FUNC_7 () ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_9(Token *VAR_2) {
    int VAR_3 = VAR_2->enc;
    Buffer *VAR_4 = FUNC_5();
    FUNC_0(VAR_4, VAR_2->sval, VAR_2->slen - 1);
    while (FUNC_6()->kind == VAR_1) {
        Token *VAR_5 = FUNC_7();
        FUNC_0(VAR_4, VAR_5->sval, VAR_5->slen - 1);
        int VAR_6 = VAR_5->enc;
        if (VAR_3 != VAR_0 && VAR_6 != VAR_0 && VAR_3 != VAR_6)
            FUNC_4(VAR_5, "unsupported non-standard concatenation of string literals: %s", FUNC_8(VAR_5));
        if (VAR_3 == VAR_0)
            VAR_3 = VAR_6;
    }
    FUNC_3(VAR_4, '\0');
    VAR_2->sval = FUNC_1(VAR_4);
    VAR_2->slen = FUNC_2(VAR_4);
    VAR_2->enc = VAR_3;
}
