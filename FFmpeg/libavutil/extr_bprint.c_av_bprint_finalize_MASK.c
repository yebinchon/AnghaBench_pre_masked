
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int size; char* str; scalar_t__ len; } ;
typedef TYPE_1__ AVBPrint ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned int FUNC_1 (scalar_t__,unsigned int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char**) ;
 char* FUNC_4 (unsigned int) ;
 char* FUNC_5 (char*,unsigned int) ;
 int FUNC_6 (char*,char*,unsigned int) ;

int FUNC_7(AVBPrint *VAR_1, char **VAR_2)
{
    unsigned VAR_3 = FUNC_1(VAR_1->len + 1, VAR_1->size);
    char *VAR_4;
    int VAR_5 = 0;

    if (VAR_2) {
        if (FUNC_2(VAR_1)) {
            VAR_4 = FUNC_5(VAR_1->str, VAR_3);
            if (!VAR_4)
                VAR_4 = VAR_1->str;
            VAR_1->str = ((void*)0);
        } else {
            VAR_4 = FUNC_4(VAR_3);
            if (VAR_4)
                FUNC_6(VAR_4, VAR_1->str, VAR_3);
            else
                VAR_5 = FUNC_0(VAR_0);
        }
        *VAR_2 = VAR_4;
    } else {
        if (FUNC_2(VAR_1))
            FUNC_3(&VAR_1->str);
    }
    VAR_1->size = VAR_3;
    return VAR_5;
}
