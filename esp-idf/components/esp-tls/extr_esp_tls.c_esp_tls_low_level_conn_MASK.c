
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct TYPE_11__ {int conn_state; int sockfd; int is_tls; int write; int read; int error_handle; int wset; int rset; int server_fd; } ;
typedef TYPE_1__ esp_tls_t ;
struct TYPE_12__ {int timeout_ms; int non_block; } ;
typedef TYPE_2__ esp_tls_cfg_t ;
typedef int esp_err_t ;
typedef int error ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_3 ;




 int FUNC_3 (int,int *) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (char const*,int,TYPE_2__ const*,TYPE_1__*) ;
 int VAR_9 ;
 int FUNC_7 (char const*,int,int,int*,TYPE_1__*,TYPE_2__ const*) ;
 int FUNC_8 (TYPE_1__*,TYPE_2__ const*) ;
 int FUNC_9 (int,int ,int ,int*,unsigned int*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,struct timeval*) ;
 int FUNC_12 (int ,int *,int *,int *,struct timeval*) ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_13(const char *VAR_12, int VAR_13, int VAR_14, const esp_tls_cfg_t *VAR_15, esp_tls_t *VAR_16)
{
    if (!VAR_16) {
        FUNC_2(VAR_6, "empty esp_tls parameter");
        return -1;
    }
    esp_err_t VAR_17;


    switch (VAR_16->conn_state) {
    case 128:
        VAR_16->sockfd = -1;
        if (VAR_15 != ((void*)0)) {



            VAR_16->is_tls = 1;
        }
        if ((VAR_17 = FUNC_7(VAR_12, VAR_13, VAR_14, &VAR_16->sockfd, VAR_16, VAR_15)) != VAR_3) {
            FUNC_0(VAR_16->error_handle, VAR_0, VAR_17);
            return -1;
        }
        if (!VAR_15) {
            VAR_16->read = VAR_10;
            VAR_16->write = VAR_11;
            FUNC_1(VAR_6, "non-tls connection established");
            return 1;
        }
        if (VAR_15->non_block) {
            FUNC_5(&VAR_16->rset);
            FUNC_4(VAR_16->sockfd, &VAR_16->rset);
            VAR_16->wset = VAR_16->rset;
        }
        VAR_16->conn_state = 131;

    case 131:
        if (VAR_15->non_block) {
            FUNC_1(VAR_6, "connecting...");
            struct timeval VAR_18;
            FUNC_11(VAR_15->timeout_ms, &VAR_18);



            if (FUNC_12(VAR_16->sockfd + 1, &VAR_16->rset, &VAR_16->wset, ((void*)0),
                       VAR_15->timeout_ms ? &VAR_18 : ((void*)0)) == 0) {
                FUNC_1(VAR_6, "select() timed out");
                return 0;
            }
            if (FUNC_3(VAR_16->sockfd, &VAR_16->rset) || FUNC_3(VAR_16->sockfd, &VAR_16->wset)) {
                int VAR_19;
                unsigned int VAR_20 = sizeof(VAR_19);

                if (FUNC_9(VAR_16->sockfd, VAR_4, VAR_5, &VAR_19, &VAR_20) < 0) {
                    FUNC_1(VAR_6, "Non blocking connect failed");
                    FUNC_0(VAR_16->error_handle, VAR_1, VAR_9);
                    FUNC_0(VAR_16->error_handle, VAR_0, VAR_2);
                    VAR_16->conn_state = 130;
                    return -1;
                }
            }
        }

        VAR_17 = FUNC_6(VAR_12, VAR_13, VAR_15, VAR_16);
        if (VAR_17 != VAR_3) {
            FUNC_2(VAR_6, "create_ssl_handle failed");
            FUNC_0(VAR_16->error_handle, VAR_0, VAR_17);
            VAR_16->conn_state = 130;
            return -1;
        }
        VAR_16->read = VAR_7;
        VAR_16->write = VAR_8;
        VAR_16->conn_state = 129;

    case 129:
        FUNC_1(VAR_6, "handshake in progress...");
        return FUNC_8(VAR_16, VAR_15);
        break;
    case 130:
        FUNC_2(VAR_6, "failed to open a new connection");;
        break;
    default:
        FUNC_2(VAR_6, "invalid esp-tls state");
        break;
    }
    return -1;
}
