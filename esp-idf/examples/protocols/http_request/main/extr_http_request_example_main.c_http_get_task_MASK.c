
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct in_addr {int dummy; } ;
struct sockaddr_in {struct in_addr sin_addr; } ;
struct addrinfo {int ai_addrlen; scalar_t__ ai_addr; int ai_socktype; int ai_family; } ;
typedef int recv_buf ;
typedef int receiving_timeout ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int,scalar_t__,int ) ;
 int VAR_8 ;
 int FUNC_5 (struct addrinfo*) ;
 int FUNC_6 (int ,int ,struct addrinfo const*,struct addrinfo**) ;
 int FUNC_7 (struct in_addr) ;
 int VAR_9 ;
 int FUNC_8 (char) ;
 int FUNC_9 (int,char*,int) ;
 scalar_t__ FUNC_10 (int,int ,int ,struct timeval*,int) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int) ;
 scalar_t__ FUNC_14 (int,int ,int ) ;

__attribute__((used)) static void FUNC_15(void *VAR_10)
{
    const struct addrinfo VAR_11 = {
        .ai_family = VAR_0,
        .ai_socktype = VAR_2,
    };
    struct addrinfo *VAR_12;
    struct in_addr *VAR_13;
    int VAR_14, VAR_15;
    char VAR_16[64];

    while(1) {
        int VAR_17 = FUNC_6(VAR_7, VAR_6, &VAR_11, &VAR_12);

        if(VAR_17 != 0 || VAR_12 == ((void*)0)) {
            FUNC_0(VAR_5, "DNS lookup failed err=%d res=%p", VAR_17, VAR_12);
            FUNC_13(1000 / VAR_9);
            continue;
        }




        VAR_13 = &((struct sockaddr_in *)VAR_12->ai_addr)->sin_addr;
        FUNC_1(VAR_5, "DNS lookup succeeded. IP=%s", FUNC_7(*VAR_13));

        VAR_14 = FUNC_11(VAR_12->ai_family, VAR_12->ai_socktype, 0);
        if(VAR_14 < 0) {
            FUNC_0(VAR_5, "... Failed to allocate socket.");
            FUNC_5(VAR_12);
            FUNC_13(1000 / VAR_9);
            continue;
        }
        FUNC_1(VAR_5, "... allocated socket");

        if(FUNC_4(VAR_14, VAR_12->ai_addr, VAR_12->ai_addrlen) != 0) {
            FUNC_0(VAR_5, "... socket connect failed errno=%d", VAR_8);
            FUNC_3(VAR_14);
            FUNC_5(VAR_12);
            FUNC_13(4000 / VAR_9);
            continue;
        }

        FUNC_1(VAR_5, "... connected");
        FUNC_5(VAR_12);

        if (FUNC_14(VAR_14, VAR_1, FUNC_12(VAR_1)) < 0) {
            FUNC_0(VAR_5, "... socket send failed");
            FUNC_3(VAR_14);
            FUNC_13(4000 / VAR_9);
            continue;
        }
        FUNC_1(VAR_5, "... socket send success");

        struct timeval VAR_18;
        VAR_18.tv_sec = 5;
        VAR_18.tv_usec = 0;
        if (FUNC_10(VAR_14, VAR_3, VAR_4, &VAR_18,
                sizeof(VAR_18)) < 0) {
            FUNC_0(VAR_5, "... failed to set socket receiving timeout");
            FUNC_3(VAR_14);
            FUNC_13(4000 / VAR_9);
            continue;
        }
        FUNC_1(VAR_5, "... set socket receiving timeout success");


        do {
            FUNC_2(VAR_16, sizeof(VAR_16));
            VAR_15 = FUNC_9(VAR_14, VAR_16, sizeof(VAR_16)-1);
            for(int VAR_19 = 0; VAR_19 < VAR_15; VAR_19++) {
                FUNC_8(VAR_16[VAR_19]);
            }
        } while(VAR_15 > 0);

        FUNC_1(VAR_5, "... done reading from socket. Last read return=%d errno=%d.", VAR_15, VAR_8);
        FUNC_3(VAR_14);
        for(int VAR_20 = 10; VAR_20 >= 0; VAR_20--) {
            FUNC_1(VAR_5, "%d... ", VAR_20);
            FUNC_13(1000 / VAR_9);
        }
        FUNC_1(VAR_5, "Starting again!");
    }
}
