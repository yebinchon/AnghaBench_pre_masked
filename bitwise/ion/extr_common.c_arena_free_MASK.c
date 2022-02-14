
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char** blocks; } ;
typedef TYPE_1__ Arena ;


 char** FUNC_0 (char**) ;
 int FUNC_1 (char**) ;
 int FUNC_2 (char*) ;

void FUNC_3(Arena *VAR_0) {
    for (char **VAR_1 = VAR_0->blocks; VAR_1 != FUNC_0(VAR_0->blocks); VAR_1++) {
        FUNC_2(*VAR_1);
    }
    FUNC_1(VAR_0->blocks);
}
