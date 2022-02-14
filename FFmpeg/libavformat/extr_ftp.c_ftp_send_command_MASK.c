
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int conn_control; } ;
typedef TYPE_1__ FTPContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,char*,char const*) ;
 int FUNC_2 (int ,char const*,int ) ;
 int FUNC_3 (TYPE_1__*,char**,int const*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(FTPContext *VAR_1, const char *VAR_2,
                            const int VAR_3[], char **VAR_4)
{
    int VAR_5;

    FUNC_1(VAR_1, "%s", VAR_2);

    if (VAR_4)
        *VAR_4 = ((void*)0);

    if (!VAR_1->conn_control)
        return FUNC_0(VAR_0);

    if ((VAR_5 = FUNC_2(VAR_1->conn_control, VAR_2, FUNC_4(VAR_2))) < 0)
        return VAR_5;
    if (!VAR_5)
        return -1;


    if (VAR_3) {
        return FUNC_3(VAR_1, VAR_4, VAR_3);
    }
    return 0;
}
