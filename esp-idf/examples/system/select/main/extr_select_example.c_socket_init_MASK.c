
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_port; int sin_family; int member_0; } ;
struct sockaddr {int dummy; } ;
struct addrinfo {int ai_addrlen; int ai_addr; int ai_socktype; int ai_family; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__,struct sockaddr*,int) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int ) ;
 int VAR_5 ;
 int FUNC_3 () ;
 int FUNC_4 (struct addrinfo*) ;
 int FUNC_5 (char*,char*,struct addrinfo const*,struct addrinfo**) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;
 int FUNC_9 () ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_10(void)
{
    const struct addrinfo VAR_7 = {
        .ai_family = VAR_0,
        .ai_socktype = VAR_3,
    };
    struct addrinfo *VAR_8;
    int VAR_9;
    struct sockaddr_in VAR_10 = { 0 };

    FUNC_3();

    VAR_9 = FUNC_5("localhost", "80", &VAR_7, &VAR_8);

    if (VAR_9 != 0 || VAR_8 == ((void*)0)) {
        FUNC_0(VAR_4, "DNS lookup failed: %d", VAR_5);
        return;
    }

    VAR_6 = FUNC_8(VAR_8->ai_family, VAR_8->ai_socktype, 0);

    if (VAR_6 < 0) {
        FUNC_0(VAR_4, "Failed to allocate socket.");
        FUNC_4(VAR_8);
        return;
    }

    VAR_10.sin_family = VAR_2;
    VAR_10.sin_port = FUNC_7(80);
    VAR_10.sin_addr.s_addr = FUNC_6(VAR_1);
    VAR_9 = FUNC_1(VAR_6, (struct sockaddr *) &VAR_10, sizeof(struct sockaddr_in));
    if (VAR_9 < 0) {
        FUNC_0(VAR_4, "Failed to bind socket");
        FUNC_4(VAR_8);
        FUNC_9();
        return;
    }

    if (FUNC_2(VAR_6, VAR_8->ai_addr, VAR_8->ai_addrlen) != 0) {
        FUNC_0(VAR_4, "Socket connection failed: %d", VAR_5);
        FUNC_4(VAR_8);
        FUNC_9();
        return;
    }

    FUNC_4(VAR_8);
}
