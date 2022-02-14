
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int buf ;
struct TYPE_4__ {char* user; char* password; } ;
typedef TYPE_1__ FTPContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,char*,int const*,int *) ;
 int FUNC_2 (char*,int,char*,char*) ;

__attribute__((used)) static int FUNC_3(FTPContext *VAR_2)
{
    char VAR_3[VAR_0];
    int VAR_4;
    static const int VAR_5[] = {331, 230, 0};
    static const int VAR_6[] = {230, 0};

    FUNC_2(VAR_3, sizeof(VAR_3), "USER %s\r\n", VAR_2->user);
    VAR_4 = FUNC_1(VAR_2, VAR_3, VAR_5, ((void*)0));
    if (VAR_4 == 331) {
        if (VAR_2->password) {
            FUNC_2(VAR_3, sizeof(VAR_3), "PASS %s\r\n", VAR_2->password);
            VAR_4 = FUNC_1(VAR_2, VAR_3, VAR_6, ((void*)0));
        } else
            return FUNC_0(VAR_1);
    }
    if (VAR_4 != 230)
        return FUNC_0(VAR_1);

    return 0;
}
