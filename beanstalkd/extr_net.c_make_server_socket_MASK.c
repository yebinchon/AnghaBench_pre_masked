
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,int ,int ,int,int ) ;
 int FUNC_3 (int,int ,int,int *,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;

int
FUNC_8(char *VAR_3, char *VAR_4)
{
    int VAR_5 = -1, VAR_6;




    VAR_6 = FUNC_4(1);
    if (VAR_6 < 0) {
        FUNC_6("sd_listen_fds");
        return -1;
    }
    if (VAR_6 > 0) {
        if (VAR_6 > 1) {
            FUNC_7("inherited more than one listen socket;"
                   " ignoring all but the first");
        }
        VAR_5 = VAR_0;
        VAR_6 = FUNC_2(VAR_5, 0, VAR_1, 1, 0);
        if (VAR_6 < 0) {
            FUNC_6("sd_is_socket_inet");
            VAR_2 = -VAR_6;
            return -1;
        }
        if (VAR_6 == 0) {
            VAR_6 = FUNC_3(VAR_5, VAR_1, 1, ((void*)0), 0);
            if (VAR_6 < 0) {
                FUNC_6("sd_is_socket_unix");
                VAR_2 = -VAR_6;
                return -1;
            }
            if (VAR_6 == 0) {
                FUNC_7("inherited fd is not a TCP or UNIX listening socket");
                return -1;
            }
        }
        return VAR_5;
    }

    if (VAR_3 && !FUNC_5(VAR_3, "unix:", 5)) {
        return FUNC_1(&VAR_3[5]);
    } else {
        return FUNC_0(VAR_3, VAR_4);
    }
}
