
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* sval; } ;
typedef TYPE_1__ Token ;
typedef int Node ;


 int * FUNC_0 (int ,double) ;
 int FUNC_1 (TYPE_1__*,char*,char,char*) ;
 int FUNC_2 (char*,char*) ;
 double FUNC_3 (char*,char**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static Node *FUNC_4(Token *VAR_3) {
    char *VAR_4 = VAR_3->sval;
    char *VAR_5;
    double VAR_6 = FUNC_3(VAR_4, &VAR_5);

    if (!FUNC_2(VAR_5, "l"))
        return FUNC_0(VAR_2, VAR_6);
    if (!FUNC_2(VAR_5, "f"))
        return FUNC_0(VAR_1, VAR_6);
    if (*VAR_5 != '\0')
        FUNC_1(VAR_3, "invalid character '%c': %s", *VAR_5, VAR_4);
    return FUNC_0(VAR_0, VAR_6);
}
