
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tv ;
struct TYPE_4__ {int sock; } ;
typedef TYPE_1__ transport_tcp_t ;
struct timeval {int dummy; } ;
struct TYPE_5__ {int s_addr; } ;
struct sockaddr_in {TYPE_2__ sin_addr; int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int ip_addr_t ;
typedef int esp_transport_handle_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int ,int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct sockaddr_in*,int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int,struct sockaddr*,int) ;
 TYPE_1__* FUNC_5 (int ) ;
 int FUNC_6 (int,struct timeval*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,char const*,TYPE_2__*) ;
 int FUNC_9 (int const*) ;
 scalar_t__ FUNC_10 (char const*,struct sockaddr_in*) ;
 int FUNC_11 (int,int ,int ,struct timeval*,int) ;
 int FUNC_12 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_13(esp_transport_handle_t VAR_7, const char *VAR_8, int VAR_9, int VAR_10)
{
    struct sockaddr_in VAR_11;
    struct timeval VAR_12;
    transport_tcp_t *VAR_13 = FUNC_5(VAR_7);

    FUNC_2(&VAR_11, sizeof(struct sockaddr_in));


    if (FUNC_8(VAR_0, VAR_8, &VAR_11.sin_addr) != 1) {
        if (FUNC_10(VAR_8, &VAR_11) < 0) {
            return -1;
        }
    }

    VAR_13->sock = FUNC_12(VAR_1, VAR_2, 0);

    if (VAR_13->sock < 0) {
        FUNC_1(VAR_6, "Error create socket");
        return -1;
    }

    VAR_11.sin_family = VAR_0;
    VAR_11.sin_port = FUNC_7(VAR_9);

    FUNC_6(VAR_10, &VAR_12);

    FUNC_11(VAR_13->sock, VAR_3, VAR_4, &VAR_12, sizeof(VAR_12));
    FUNC_11(VAR_13->sock, VAR_3, VAR_5, &VAR_12, sizeof(VAR_12));

    FUNC_0(VAR_6, "[sock=%d],connecting to server IP:%s,Port:%d...",
             VAR_13->sock, FUNC_9((const ip_addr_t*)&VAR_11.sin_addr.s_addr), VAR_9);
    if (FUNC_4(VAR_13->sock, (struct sockaddr *)(&VAR_11), sizeof(struct sockaddr)) != 0) {
        FUNC_3(VAR_13->sock);
        VAR_13->sock = -1;
        return -1;
    }
    return VAR_13->sock;
}
