
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ kind; int is_struct; int align; int size; int * fields; } ;
typedef TYPE_1__ Type ;
typedef int Dict ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*) ;
 TYPE_1__* FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,TYPE_1__*) ;
 int * FUNC_4 (int*,int*,int) ;
 char* FUNC_5 () ;
 int VAR_1 ;

__attribute__((used)) static Type *FUNC_6(bool VAR_2) {
    char *VAR_3 = FUNC_5();
    Type *VAR_4;
    if (VAR_3) {
        VAR_4 = FUNC_2(VAR_1, VAR_3);
        if (VAR_4 && (VAR_4->kind == VAR_0 || VAR_4->is_struct != VAR_2))
            FUNC_0("declarations of %s does not match", VAR_3);
        if (!VAR_4) {
            VAR_4 = FUNC_1(VAR_2);
            FUNC_3(VAR_1, VAR_3, VAR_4);
        }
    } else {
        VAR_4 = FUNC_1(VAR_2);
    }
    int VAR_5 = 0, VAR_6 = 1;
    Dict *VAR_7 = FUNC_4(&VAR_5, &VAR_6, VAR_2);
    VAR_4->align = VAR_6;
    if (VAR_7) {
        VAR_4->fields = VAR_7;
        VAR_4->size = VAR_5;
    }
    return VAR_4;
}
