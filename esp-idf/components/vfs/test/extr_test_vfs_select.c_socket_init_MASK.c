
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
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ,char*) ;
 int FUNC_3 (struct addrinfo*) ;
 int FUNC_4 (int,struct sockaddr*,int) ;
 int FUNC_5 (int,int ,int ) ;
 int FUNC_6 (struct addrinfo*) ;
 int FUNC_7 (char*,char*,struct addrinfo const*,struct addrinfo**) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_11(void)
{
    const struct addrinfo VAR_4 = {
        .ai_family = VAR_0,
        .ai_socktype = VAR_3,
    };
    struct addrinfo *VAR_5;
    int VAR_6;
    struct sockaddr_in VAR_7 = { 0 };
    int VAR_8 = -1;

    VAR_6 = FUNC_7("localhost", "80", &VAR_4, &VAR_5);
    FUNC_1(VAR_6, 0);
    FUNC_3(VAR_5);

    VAR_8 = FUNC_10(VAR_5->ai_family, VAR_5->ai_socktype, 0);
    FUNC_0(VAR_8 >= 0);

    VAR_7.sin_family = VAR_2;
    VAR_7.sin_port = FUNC_9(80);
    VAR_7.sin_addr.s_addr = FUNC_8(VAR_1);
    VAR_6 = FUNC_4(VAR_8, (struct sockaddr *) &VAR_7, sizeof(struct sockaddr_in));
    FUNC_0(VAR_6 >= 0);

    VAR_6 = FUNC_5(VAR_8, VAR_5->ai_addr, VAR_5->ai_addrlen);
    FUNC_2(VAR_6, 0, "Socket connection failed");

    FUNC_6(VAR_5);

    return VAR_8;
}
