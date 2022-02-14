
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int Vector ;
struct TYPE_5__ {int offset; int fields; } ;
typedef TYPE_1__ Type ;
typedef int Dict ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,TYPE_1__*) ;
 char* FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(Dict *VAR_0, Type *VAR_1, int VAR_2) {
    Vector *VAR_3 = FUNC_2(VAR_1->fields);
    for (int VAR_4 = 0; VAR_4 < FUNC_5(VAR_3); VAR_4++) {
        char *VAR_5 = FUNC_4(VAR_3, VAR_4);
        Type *VAR_6 = FUNC_0(FUNC_1(VAR_1->fields, VAR_5));
        VAR_6->offset += VAR_2;
        FUNC_3(VAR_0, VAR_5, VAR_6);
    }
}
