
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int Vector ;
struct TYPE_4__ {int hideset; } ;
typedef TYPE_1__ Token ;
typedef int Set ;


 TYPE_1__* FUNC_0 (int ) ;
 int * FUNC_1 () ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_1__*) ;

__attribute__((used)) static Vector *FUNC_6(Vector *VAR_0, Set *VAR_1) {
    Vector *VAR_2 = FUNC_1();
    for (int VAR_3 = 0; VAR_3 < FUNC_4(VAR_0); VAR_3++) {
        Token *VAR_4 = FUNC_0(FUNC_3(VAR_0, VAR_3));
        VAR_4->hideset = FUNC_2(VAR_4->hideset, VAR_1);
        FUNC_5(VAR_2, VAR_4);
    }
    return VAR_2;
}
