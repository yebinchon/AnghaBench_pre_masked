
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int buf ;
struct TYPE_10__ {int flags; int protocol_blacklist; int protocol_whitelist; int interrupt_callback; TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_11__ {int rw_timeout; int conn_control; int server_control_port; int hostname; } ;
typedef TYPE_2__ FTPContext ;
typedef int AVDictionary ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int **,char*,int,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*,int ,char*) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,int,char*,int *,int ,int ,int *) ;
 int FUNC_7 (int *,char*,int ,int *,int **,int ,int ,TYPE_1__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,char**,int const*) ;
 int FUNC_11 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_12(URLContext *VAR_6)
{
    char VAR_7[VAR_4], *VAR_8 = ((void*)0);
    int VAR_9;
    AVDictionary *VAR_10 = ((void*)0);
    FTPContext *VAR_11 = VAR_6->priv_data;
    static const int VAR_12[] = {220, 0};

    if (!VAR_11->conn_control) {
        FUNC_6(VAR_7, sizeof(VAR_7), "tcp", ((void*)0),
                    VAR_11->hostname, VAR_11->server_control_port, ((void*)0));
        if (VAR_11->rw_timeout != -1) {
            FUNC_2(&VAR_10, "timeout", VAR_11->rw_timeout, 0);
        }
        VAR_9 = FUNC_7(&VAR_11->conn_control, VAR_7, VAR_0,
                                   &VAR_6->interrupt_callback, &VAR_10,
                                   VAR_6->protocol_whitelist, VAR_6->protocol_blacklist, VAR_6);
        FUNC_1(&VAR_10);
        if (VAR_9 < 0) {
            FUNC_4(VAR_6, VAR_2, "Cannot open control connection\n");
            return VAR_9;
        }


        if (FUNC_10(VAR_11, ((VAR_6->flags & VAR_1) ? &VAR_8 : ((void*)0)), VAR_12) != 220) {
            FUNC_4(VAR_6, VAR_2, "FTP server not ready for new users\n");
            return FUNC_0(VAR_5);
        }

        if ((VAR_6->flags & VAR_1) && FUNC_5(VAR_8, "pure-ftpd")) {
            FUNC_4(VAR_6, VAR_3, "Pure-FTPd server is used as an output protocol. It is known issue this implementation may produce incorrect content and it cannot be fixed at this moment.");
        }
        FUNC_3(VAR_8);

        if ((VAR_9 = FUNC_8(VAR_11)) < 0) {
            FUNC_4(VAR_6, VAR_2, "FTP authentication failed\n");
            return VAR_9;
        }

        if ((VAR_9 = FUNC_11(VAR_11)) < 0) {
            FUNC_4(VAR_6, VAR_2, "Set content type failed\n");
            return VAR_9;
        }

        FUNC_9(VAR_11);
    }
    return 0;
}
