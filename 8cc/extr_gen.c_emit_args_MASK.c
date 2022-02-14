
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int Vector ;
struct TYPE_7__ {scalar_t__ kind; int size; } ;
struct TYPE_6__ {TYPE_3__* ty; } ;
typedef TYPE_1__ Node ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(Vector *VAR_2) {
    VAR_1;
    int VAR_3 = 0;
    for (int VAR_4 = 0; VAR_4 < FUNC_7(VAR_2); VAR_4++) {
        Node *VAR_5 = FUNC_6(VAR_2, VAR_4);
        if (VAR_5->ty->kind == VAR_0) {
            FUNC_0(VAR_5);
            VAR_3 += FUNC_4(VAR_5->ty->size);
        } else if (FUNC_2(VAR_5->ty)) {
            FUNC_1(VAR_5);
            FUNC_5(0);
            VAR_3 += 8;
        } else {
            FUNC_1(VAR_5);
            FUNC_3("rax");
            VAR_3 += 8;
        }
    }
    return VAR_3;
}
