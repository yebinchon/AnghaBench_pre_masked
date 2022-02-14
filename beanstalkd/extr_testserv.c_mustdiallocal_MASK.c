
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int sin_addr; int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,struct sockaddr*,int) ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int *) ;
 scalar_t__ FUNC_4 (int,int ,int ,int*,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static int
FUNC_7(int VAR_6)
{
    struct sockaddr_in VAR_7 = {
        .sin_family = VAR_0,
        .sin_port = FUNC_2(VAR_6),
    };

    int VAR_8 = FUNC_3("127.0.0.1", &VAR_7.sin_addr);
    if (!VAR_8) {
        VAR_5 = VAR_1;
        FUNC_6("inet_aton");
        FUNC_1(1);
    }

    int VAR_9 = FUNC_5(VAR_0, VAR_3, 0);
    if (VAR_9 == -1) {
        FUNC_6("socket");
        FUNC_1(1);
    }


    int VAR_10 = 1;
    if (FUNC_4(VAR_9, VAR_2, VAR_4, &VAR_10, sizeof(int))) {
        FUNC_6("setting TCP_NODELAY on fd %d", VAR_9);
        FUNC_1(1);
    }

    VAR_8 = FUNC_0(VAR_9, (struct sockaddr *)&VAR_7, sizeof VAR_7);
    if (VAR_8 == -1) {
        FUNC_6("connect");
        FUNC_1(1);
    }

    return VAR_9;
}
