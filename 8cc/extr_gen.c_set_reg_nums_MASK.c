
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int Vector ;
struct TYPE_3__ {int ty; } ;
typedef TYPE_1__ Node ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(Vector *VAR_2) {
    VAR_1 = VAR_0 = 0;
    for (int VAR_3 = 0; VAR_3 < FUNC_2(VAR_2); VAR_3++) {
        Node *VAR_4 = FUNC_1(VAR_2, VAR_3);
        if (FUNC_0(VAR_4->ty))
            VAR_0++;
        else
            VAR_1++;
    }
}
