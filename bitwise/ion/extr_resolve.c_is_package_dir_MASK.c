
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* name; scalar_t__ valid; } ;
typedef TYPE_1__ DirListIter ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,char const*) ;
 char* FUNC_4 (char const*) ;
 int FUNC_5 (char*,char const*) ;
 scalar_t__ FUNC_6 (char const*,char*) ;

bool FUNC_7(const char *VAR_1, const char *VAR_2) {
    char VAR_3[VAR_0];
    FUNC_3(VAR_3, VAR_1);
    FUNC_5(VAR_3, VAR_2);
    DirListIter VAR_4;
    for (FUNC_0(&VAR_4, VAR_3); VAR_4.valid; FUNC_2(&VAR_4)) {
        const char *VAR_5 = FUNC_4(VAR_4.name);
        if (VAR_5 != VAR_4.name && FUNC_6(VAR_5, "ion") == 0) {
            FUNC_1(&VAR_4);
            return 1;
        }
    }
    return 0;
}
