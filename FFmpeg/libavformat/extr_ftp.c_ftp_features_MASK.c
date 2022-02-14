
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int utf8; int features; } ;
typedef TYPE_1__ FTPContext ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,char const*,int const*,int *) ;

__attribute__((used)) static int FUNC_3(FTPContext *VAR_0)
{
    static const char *VAR_1 = "FEAT\r\n";
    static const char *VAR_2 = "OPTS UTF8 ON\r\n";
    static const int VAR_3[] = {211, 0};
    static const int VAR_4[] = {200, 202, 451, 0};

    FUNC_0(&VAR_0->features);
    if (FUNC_2(VAR_0, VAR_1, VAR_3, &VAR_0->features) != 211) {
        FUNC_0(&VAR_0->features);
    }

    if (FUNC_1(VAR_0, "UTF8")) {
        int VAR_5 = FUNC_2(VAR_0, VAR_2, VAR_4, ((void*)0));
        if (VAR_5 == 200 || VAR_5 == 202)
            VAR_0->utf8 = 1;
    }

    return 0;
}
