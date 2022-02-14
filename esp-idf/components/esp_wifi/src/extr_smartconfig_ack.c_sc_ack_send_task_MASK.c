
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int server_addr ;
struct TYPE_12__ {int* ip; int mac; } ;
struct TYPE_10__ {scalar_t__ type; TYPE_5__ ctx; } ;
typedef TYPE_3__ sc_ack_t ;
typedef int remote_ip ;
typedef int portTickType ;
struct TYPE_9__ {scalar_t__ addr; } ;
struct TYPE_11__ {TYPE_2__ ip; } ;
typedef TYPE_4__ esp_netif_ip_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_2 (struct sockaddr_in*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int *,int ,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,TYPE_4__*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int*,int*,int) ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_11 (int) ;
 int FUNC_12 (int,TYPE_5__*,int,int ,struct sockaddr*,int) ;
 int FUNC_13 (int,int ,int,int*,int) ;
 int FUNC_14 (int ,int ,int ) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static void FUNC_17(void *VAR_24)
{
    sc_ack_t *VAR_25 = (sc_ack_t *)VAR_24;
    esp_netif_ip_info_t VAR_26;
    uint8_t VAR_27[4];
    FUNC_10(VAR_27, VAR_25->ctx.ip, sizeof(VAR_27));
    int VAR_28 = (VAR_25->type == VAR_14) ? VAR_11 : VAR_8;
    struct sockaddr_in VAR_29;
    socklen_t VAR_30 = sizeof(VAR_29);
    int VAR_31 = -1;
    int VAR_32 = 1;
    int VAR_33;
    int VAR_34 = (VAR_25->type == VAR_14) ? VAR_10 : VAR_7;
    uint8_t VAR_35 = 1;
    int VAR_36;
    int VAR_37;

    FUNC_2(&VAR_29, sizeof(struct sockaddr_in));
    VAR_29.sin_family = VAR_0;
    FUNC_10(&VAR_29.sin_addr.s_addr, VAR_27, sizeof(VAR_27));
    VAR_29.sin_port = FUNC_9(VAR_28);

    FUNC_7(VAR_20, VAR_25->ctx.mac);

    FUNC_15(200 / VAR_22);

    while (VAR_23) {

        VAR_37 = FUNC_6(FUNC_5("WIFI_STA_DEF"), &VAR_26);
        if ((VAR_3 == VAR_37) && (VAR_26.ip.addr != VAR_5)) {

            if (VAR_25->type == VAR_14) {
                FUNC_10(VAR_25->ctx.ip, &VAR_26.ip.addr, 4);
            }


            VAR_31 = FUNC_14(VAR_0, VAR_15, 0);
            if ((VAR_31 < VAR_6) || (VAR_31 > (VAR_4 - 1))) {
                FUNC_1(VAR_19, "Creat udp socket failed");
                goto _end;
            }

            FUNC_13(VAR_31, VAR_16, VAR_17 | VAR_18, &VAR_32, sizeof(int));

            while (VAR_23) {

                FUNC_15(100 / VAR_22);

                VAR_33 = FUNC_12(VAR_31, &VAR_25->ctx, VAR_34, 0, (struct sockaddr*) &VAR_29, VAR_30);
                if (VAR_33 > 0) {

                    if (VAR_35++ >= VAR_9) {
                        FUNC_4(VAR_12, VAR_13, ((void*)0), 0, VAR_21);
                        goto _end;
                    }
                }
                else {
                    VAR_36 = FUNC_11(VAR_31);
                    if (VAR_36 == VAR_2 || VAR_36 == VAR_1) {
                        FUNC_0(VAR_19, "send failed, errno %d", VAR_36);
                        continue;
                    }
                    FUNC_1(VAR_19, "send failed, errno %d", VAR_36);
                    goto _end;
                }
            }
        }
        else {
            FUNC_15((portTickType)(100 / VAR_22));
        }
    }

_end:
    if ((VAR_31 >= VAR_6) && (VAR_31 <= (VAR_4 - 1))) {
        FUNC_3(VAR_31);
    }
    FUNC_8(VAR_25);
    FUNC_16(((void*)0));
}
