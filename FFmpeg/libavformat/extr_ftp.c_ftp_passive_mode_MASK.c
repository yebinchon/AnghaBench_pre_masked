
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int server_data_port; } ;
typedef TYPE_1__ FTPContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,char*,char**) ;
 int FUNC_4 (TYPE_1__*,char*,int) ;
 int FUNC_5 (TYPE_1__*,char const*,int const*,char**) ;

__attribute__((used)) static int FUNC_6(FTPContext *VAR_1)
{
    char *VAR_2 = ((void*)0), *VAR_3 = ((void*)0), *VAR_4 = ((void*)0);
    int VAR_5;
    static const char *VAR_6 = "PASV\r\n";
    static const int VAR_7[] = {227, 0};

    if (FUNC_5(VAR_1, VAR_6, VAR_7, &VAR_2) != 227 || !VAR_2)
        goto fail;

    for (VAR_5 = 0; VAR_2[VAR_5]; ++VAR_5) {
        if (VAR_2[VAR_5] == '(') {
            VAR_3 = VAR_2 + VAR_5 + 1;
        } else if (VAR_2[VAR_5] == ')') {
            VAR_4 = VAR_2 + VAR_5;
            break;
        }
    }
    if (!VAR_3 || !VAR_4)
        goto fail;

    *VAR_4 = '\0';

    if (!FUNC_3(VAR_3, ",", &VAR_4)) goto fail;
    if (!FUNC_3(VAR_4, ",", &VAR_4)) goto fail;
    if (!FUNC_3(VAR_4, ",", &VAR_4)) goto fail;
    if (!FUNC_3(VAR_4, ",", &VAR_4)) goto fail;


    VAR_3 = FUNC_3(VAR_4, ",", &VAR_4);
    if (!VAR_3) goto fail;
    VAR_1->server_data_port = FUNC_1(VAR_3) * 256;
    VAR_3 = FUNC_3(VAR_4, ",", &VAR_4);
    if (!VAR_3) goto fail;
    VAR_1->server_data_port += FUNC_1(VAR_3);
    FUNC_4(VAR_1, "Server data port: %d\n", VAR_1->server_data_port);

    FUNC_2(VAR_2);
    return 0;

  fail:
    FUNC_2(VAR_2);
    VAR_1->server_data_port = -1;
    return FUNC_0(VAR_0);
}
