
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int Vector ;
struct TYPE_9__ {scalar_t__ kind; } ;
typedef TYPE_1__ Type ;
struct TYPE_10__ {int ty; } ;
typedef TYPE_2__ Node ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*,int) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (char) ;
 scalar_t__ FUNC_4 (char) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,TYPE_1__*,int,int) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static void FUNC_8(Vector *VAR_2, Type *VAR_3, int VAR_4, bool VAR_5) {
    FUNC_4('=');
    if (VAR_3->kind == VAR_0 || VAR_3->kind == VAR_1) {
        FUNC_6(VAR_2, VAR_3, VAR_4, VAR_5);
    } else if (FUNC_4('{')) {
        FUNC_8(VAR_2, VAR_3, VAR_4, 1);
        FUNC_3('}');
    } else {
        Node *VAR_6 = FUNC_1(FUNC_5());
        FUNC_2(VAR_3, VAR_6->ty);
        FUNC_7(VAR_2, FUNC_0(VAR_6, VAR_3, VAR_4));
    }
}
