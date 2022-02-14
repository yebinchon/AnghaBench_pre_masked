
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_addr; void* sin6_port; void* sin6_family; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; void* sin_port; void* sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int source_addr ;
typedef int socklen_t ;
typedef int rx_buffer ;
typedef int dest_addr ;
typedef int addr_str ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__,char*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (int,char*,int,int ,struct sockaddr*,int*) ;
 int FUNC_9 (int,int ,int ,int ,struct sockaddr*,int) ;
 int FUNC_10 (int,int ) ;
 int FUNC_11 (int,int ,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(void *VAR_11)
{
    char VAR_12[128];
    char VAR_13[128];
    int VAR_14;
    int VAR_15;

    while (1) {
        struct sockaddr_in6 VAR_16;
        FUNC_4(VAR_2, &VAR_16.sin6_addr);
        VAR_16.sin6_family = VAR_1;
        VAR_16.sin6_port = FUNC_3(VAR_5);
        VAR_14 = VAR_1;
        VAR_15 = VAR_4;
        FUNC_5(VAR_16.sin6_addr, VAR_13, sizeof(VAR_13) - 1);


        int VAR_17 = FUNC_11(VAR_14, VAR_6, VAR_15);
        if (VAR_17 < 0) {
            FUNC_0(VAR_7, "Unable to create socket: errno %d", VAR_8);
            break;
        }
        FUNC_1(VAR_7, "Socket created, sending to %s:%d", VAR_2, VAR_5);

        while (1) {

            int VAR_18 = FUNC_9(VAR_17, VAR_9, FUNC_12(VAR_9), 0, (struct sockaddr *)&VAR_16, sizeof(VAR_16));
            if (VAR_18 < 0) {
                FUNC_0(VAR_7, "Error occurred during sending: errno %d", VAR_8);
                break;
            }
            FUNC_1(VAR_7, "Message sent");

            struct sockaddr_in VAR_19;
            socklen_t VAR_20 = sizeof(VAR_19);
            int VAR_21 = FUNC_8(VAR_17, VAR_12, sizeof(VAR_12) - 1, 0, (struct sockaddr *)&VAR_19, &VAR_20);


            if (VAR_21 < 0) {
                FUNC_0(VAR_7, "recvfrom failed: errno %d", VAR_8);
                break;
            }

            else {
                VAR_12[VAR_21] = 0;
                FUNC_1(VAR_7, "Received %d bytes from %s:", VAR_21, VAR_13);
                FUNC_1(VAR_7, "%s", VAR_12);
            }

            FUNC_13(2000 / VAR_10);
        }

        if (VAR_17 != -1) {
            FUNC_0(VAR_7, "Shutting down socket and restarting...");
            FUNC_10(VAR_17, 0);
            FUNC_2(VAR_17);
        }
    }
    FUNC_14(((void*)0));
}
