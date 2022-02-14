
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int name; scalar_t__ valid; } ;
typedef TYPE_1__ DirListIter ;


 int FUNC_0 (char const**,char const*) ;
 int FUNC_1 (TYPE_1__*,char const*) ;
 int FUNC_2 (TYPE_1__*) ;
 char* FUNC_3 (int ) ;

const char **FUNC_4(const char *VAR_0) {
    const char **VAR_1 = ((void*)0);
    DirListIter VAR_2;
    for (FUNC_1(&VAR_2, VAR_0); VAR_2.valid; FUNC_2(&VAR_2)) {
        const char *VAR_3 = FUNC_3(VAR_2.name);
        FUNC_0(VAR_1, VAR_3);
    }
    return VAR_1;
}
