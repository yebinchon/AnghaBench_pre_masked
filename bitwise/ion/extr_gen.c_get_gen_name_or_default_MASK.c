
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int buf ;
struct TYPE_5__ {char* external_name; scalar_t__ kind; char* name; TYPE_1__* home_package; } ;
struct TYPE_4__ {char* external_name; } ;
typedef TYPE_2__ Sym ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char const*) ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (void const*) ;
 char* FUNC_2 (int *,void const*) ;
 int FUNC_3 (int *,void const*,void*) ;
 char* FUNC_4 (char*,char const*,char*) ;
 char FUNC_5 (char const) ;

const char *FUNC_6(const void *VAR_2, const char *VAR_3) {
    const char *VAR_4 = FUNC_2(&VAR_1, VAR_2);
    if (!VAR_4) {
        Sym *VAR_5 = FUNC_1(VAR_2);
        if (VAR_5) {
            if (VAR_5->external_name) {
                VAR_4 = VAR_5->external_name;
            } else if (VAR_5->home_package->external_name) {
                const char *VAR_6 = VAR_5->home_package->external_name;
                char VAR_7[256];
                if (VAR_5->kind == VAR_0) {
                    char *VAR_8 = VAR_7;
                    for (const char *VAR_9 = VAR_6; *VAR_9 && VAR_8 < VAR_7 + sizeof(VAR_7) - 1; VAR_9++, VAR_8++) {
                        *VAR_8 = FUNC_5(*VAR_9);
                    }
                    *VAR_8 = 0;
                    if (VAR_8 < VAR_7 + sizeof(VAR_7)) {
                        VAR_6 = VAR_7;
                    }
                }
                VAR_4 = FUNC_4("%s%s", VAR_6, VAR_5->name);
            } else {
                VAR_4 = VAR_5->name;
            }
        } else {
            FUNC_0(VAR_3);
            VAR_4 = VAR_3;
        }
        FUNC_3(&VAR_1, VAR_2, (void *)VAR_4);
    }
    return VAR_4;
}
