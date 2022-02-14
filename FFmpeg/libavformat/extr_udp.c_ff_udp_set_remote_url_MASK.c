
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
typedef int hostname ;
typedef int buf ;
struct TYPE_6__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_7__ {scalar_t__ dest_addr_len; int is_connected; int dest_addr; int udp_fd; int is_multicast; } ;
typedef TYPE_2__ UDPContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char*,int,char*,char const*) ;
 int FUNC_2 (int *,int ,int *,int ,char*,int,int*,int *,int ,char const*) ;
 scalar_t__ FUNC_3 (int ,struct sockaddr*,scalar_t__) ;
 int FUNC_4 (struct sockaddr*) ;
 int FUNC_5 (TYPE_1__*,int ,char*) ;
 char* FUNC_6 (char const*,char) ;
 int FUNC_7 (char*,int *,int) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int *,char*,int) ;

int FUNC_9(URLContext *VAR_2, const char *VAR_3)
{
    UDPContext *VAR_4 = VAR_2->priv_data;
    char VAR_5[256], VAR_6[10];
    int VAR_7;
    const char *VAR_8;

    FUNC_2(((void*)0), 0, ((void*)0), 0, VAR_5, sizeof(VAR_5), &VAR_7, ((void*)0), 0, VAR_3);


    VAR_4->dest_addr_len = FUNC_8(VAR_2, &VAR_4->dest_addr, VAR_5, VAR_7);
    if (VAR_4->dest_addr_len < 0) {
        return FUNC_0(VAR_1);
    }
    VAR_4->is_multicast = FUNC_4((struct sockaddr*) &VAR_4->dest_addr);
    VAR_8 = FUNC_6(VAR_3, '?');
    if (VAR_8) {
        if (FUNC_1(VAR_6, sizeof(VAR_6), "connect", VAR_8)) {
            int VAR_9 = VAR_4->is_connected;
            VAR_4->is_connected = FUNC_7(VAR_6, ((void*)0), 10);
            if (VAR_4->is_connected && !VAR_9) {
                if (FUNC_3(VAR_4->udp_fd, (struct sockaddr *) &VAR_4->dest_addr,
                            VAR_4->dest_addr_len)) {
                    VAR_4->is_connected = 0;
                    FUNC_5(VAR_2, VAR_0, "connect");
                    return FUNC_0(VAR_1);
                }
            }
        }
    }

    return 0;
}
