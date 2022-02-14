
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ kind; int c; } ;
typedef TYPE_1__ Token ;
struct TYPE_8__ {scalar_t__ kind; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char*,int ) ;
 TYPE_3__* FUNC_2 () ;
 TYPE_1__* FUNC_3 () ;

__attribute__((used)) static Token *FUNC_4() {
    Token *VAR_2 = FUNC_3();
    if (VAR_2->kind == VAR_0)
        FUNC_1(VAR_2, "stray character in program: '%c'", VAR_2->c);
    if (VAR_2->kind == VAR_1 && FUNC_2()->kind == VAR_1)
        FUNC_0(VAR_2);
    return VAR_2;
}
