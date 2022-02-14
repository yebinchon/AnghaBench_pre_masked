
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int Vector ;
struct TYPE_6__ {scalar_t__ kind; } ;
struct TYPE_5__ {TYPE_4__* ty; } ;
typedef TYPE_1__ Node ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(Vector *VAR_2, Vector *VAR_3, Vector *VAR_4, Vector *VAR_5) {
    VAR_1;
    int VAR_6 = 0, VAR_7 = 0;
    int VAR_8 = 6, VAR_9 = 8;
    for (int VAR_10 = 0; VAR_10 < FUNC_2(VAR_5); VAR_10++) {
        Node *VAR_11 = FUNC_1(VAR_5, VAR_10);
        if (VAR_11->ty->kind == VAR_0)
            FUNC_3(VAR_4, VAR_11);
        else if (FUNC_0(VAR_11->ty))
            FUNC_3((VAR_7++ < VAR_9) ? VAR_3 : VAR_4, VAR_11);
        else
            FUNC_3((VAR_6++ < VAR_8) ? VAR_2 : VAR_4, VAR_11);
    }
}
