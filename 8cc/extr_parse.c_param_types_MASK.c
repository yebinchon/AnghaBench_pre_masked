
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int Vector ;
struct TYPE_3__ {int ty; } ;
typedef TYPE_1__ Node ;


 int * FUNC_0 () ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static Vector *FUNC_4(Vector *VAR_0) {
    Vector *VAR_1 = FUNC_0();
    for (int VAR_2 = 0; VAR_2 < FUNC_2(VAR_0); VAR_2++) {
        Node *VAR_3 = FUNC_1(VAR_0, VAR_2);
        FUNC_3(VAR_1, VAR_3->ty);
    }
    return VAR_1;
}
