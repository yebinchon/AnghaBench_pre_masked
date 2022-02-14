
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char const* path; int full_path; } ;
typedef TYPE_1__ Package ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,char const*) ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_3 (int *,char const*) ;
 int VAR_2 ;
 int FUNC_4 (char*,char const*) ;
 char* FUNC_5 (char const*) ;
 int FUNC_6 (int ,char*) ;
 TYPE_1__* FUNC_7 (int,int) ;

Package *FUNC_8(const char *VAR_3) {
    VAR_3 = FUNC_5(VAR_3);
    Package *VAR_4 = FUNC_3(&VAR_2, VAR_3);
    if (!VAR_4) {
        VAR_4 = FUNC_7(1, sizeof(Package));
        VAR_4->path = VAR_3;
        if (VAR_1) {
            FUNC_4("Importing %s\n", VAR_3);
        }
        char VAR_5[VAR_0];
        if (!FUNC_2(VAR_5, VAR_3)) {
            return ((void*)0);
        }
        FUNC_6(VAR_4->full_path, VAR_5);
        FUNC_0(VAR_4);
        FUNC_1(VAR_4);
    }
    return VAR_4;
}
