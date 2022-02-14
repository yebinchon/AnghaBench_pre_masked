
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ kind; int id; int sval; } ;
typedef TYPE_1__ Token ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static Token *FUNC_2(Token *VAR_3) {
    if (VAR_3->kind != VAR_0)
        return VAR_3;
    int VAR_4 = (intptr_t)FUNC_1(VAR_2, VAR_3->sval);
    if (!VAR_4)
        return VAR_3;
    Token *VAR_5 = FUNC_0(VAR_3);
    VAR_5->kind = VAR_1;
    VAR_5->id = VAR_4;
    return VAR_5;
}
