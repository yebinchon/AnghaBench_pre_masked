
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int path; } ;
typedef TYPE_1__ FTPContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,char const*,int const*,char**) ;

__attribute__((used)) static int FUNC_4(FTPContext *VAR_2)
{
    char *VAR_3 = ((void*)0), *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
    int VAR_6;
    static const char *VAR_7 = "PWD\r\n";
    static const int VAR_8[] = {257, 0};

    if (FUNC_3(VAR_2, VAR_7, VAR_8, &VAR_3) != 257 || !VAR_3)
        goto fail;

    for (VAR_6 = 0; VAR_3[VAR_6]; ++VAR_6) {
        if (VAR_3[VAR_6] == '"') {
            if (!VAR_4) {
                VAR_4 = VAR_3 + VAR_6 + 1;
                continue;
            }
            VAR_5 = VAR_3 + VAR_6;
            break;
        }
    }

    if (!VAR_5)
        goto fail;

    *VAR_5 = '\0';
    VAR_2->path = FUNC_2(VAR_4);

    FUNC_1(VAR_3);

    if (!VAR_2->path)
        return FUNC_0(VAR_1);
    return 0;

  fail:
    FUNC_1(VAR_3);
    return FUNC_0(VAR_0);
}
